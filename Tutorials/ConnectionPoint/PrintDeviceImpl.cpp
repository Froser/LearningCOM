#include "pch.h"
#include "PrintDeviceImpl.h"
#include <iostream>

STDMETHODIMP PrintDeviceSinkCP::GetConnectionInterface(IID* pIID)
{
    *pIID = IID_IPrintDeviceSink;
    return S_OK;
}

STDMETHODIMP PrintDeviceSinkCP::GetConnectionPointContainer(IConnectionPointContainer** ppCPC)
{
    return m_container->QueryInterface(IID_IConnectionPointContainer, (void**)ppCPC);
}

STDMETHODIMP PrintDeviceSinkCP::Advise(IUnknown* pUnkSink, DWORD* pdwCookie)
{
    *pdwCookie = m_cookie;
    return pUnkSink->QueryInterface(IID_IPrintDeviceSink, (void**)&m_interfaces[m_cookie++]);
}

STDMETHODIMP PrintDeviceSinkCP::Unadvise(DWORD dwCookie)
{
    if (m_interfaces[dwCookie])
    {
        m_interfaces[dwCookie]->Release();
        m_interfaces[dwCookie] = NULL;
    }
    return S_OK;
}

STDMETHODIMP PrintDeviceSinkCP::EnumConnections(IEnumConnections** ppEnum)
{
    return E_NOTIMPL;
}

void PrintDeviceSinkCP::SetContainer(IConnectionPointContainer* pUnk)
{
    m_container = pUnk;
}

void PrintDeviceSinkCP::Fire_Print()
{
    for (int i = 0; i < MAX_ADVISE; ++i)
    {
        if (m_interfaces[i])
            m_interfaces[i]->OnPrint();
    }
}

PrintDeviceSinkCP::PrintDeviceSinkCP()
    : m_cookie(0)
    , m_container(NULL)
{
    memset(m_interfaces, 0, sizeof(m_interfaces));
}

PrintDeviceSinkCP::~PrintDeviceSinkCP()
{
    for (int i = 0; i < MAX_ADVISE; ++i)
    {
        if (m_interfaces[i])
            m_interfaces[i]->Release();
    }
}

//////////////////////////////////////////////////////////////////////////
STDMETHODIMP PrintDeviceImpl::Print()
{
    std::cout << "Hello world!" << std::endl;
    if (m_cp)
        m_cp->Fire_Print();
    return S_OK;
}

STDMETHODIMP PrintDeviceImpl::EnumConnectionPoints(IEnumConnectionPoints** ppEnum)
{
    return E_NOTIMPL;
}

STDMETHODIMP PrintDeviceImpl::FindConnectionPoint(REFIID riid, IConnectionPoint** ppCP)
{
    if (IsEqualIID(riid, IID_IPrintDeviceSink))
    {
        if (!m_cp)
        {
            m_cp = new CComObject<PrintDeviceSinkCP>();
            m_cp->SetContainer(this);
        }

        return m_cp->QueryInterface(IID_IConnectionPoint, (void**)ppCP);
    }

    return E_NOINTERFACE;
}