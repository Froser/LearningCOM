#pragma once
#include "ConnectionPoint_i.h"
#include <combaseapi.h>
#include <atlcom.h>
#include <atlcomcli.h>

// ����������Լ�ʵ��IConnectionPoint��
// ʹ��ATLʵ��IConnectionPoint�����ӣ���ο�ConnectionPointATL

using namespace ATL;

#define MAX_ADVISE 10
class PrintDeviceSinkCP
    : public CComObjectRoot
    , public CComCoClass<PrintDeviceSinkCP>
    , public IConnectionPoint
{
    BEGIN_COM_MAP(PrintDeviceSinkCP)
        COM_INTERFACE_ENTRY(IConnectionPoint)
    END_COM_MAP()

    PrintDeviceSinkCP();
    ~PrintDeviceSinkCP();

    // ͨ�� IConnectionPoint �̳�
    STDMETHODIMP GetConnectionInterface(IID* pIID) override;
    STDMETHODIMP GetConnectionPointContainer(IConnectionPointContainer** ppCPC) override;
    STDMETHODIMP Advise(IUnknown* pUnkSink, DWORD* pdwCookie) override;
    STDMETHODIMP Unadvise(DWORD dwCookie) override;
    STDMETHODIMP EnumConnections(IEnumConnections** ppEnum) override;

public:
    void SetContainer(IConnectionPointContainer*);
    void Fire_Print();

private:
    int m_cookie;
    IPrintDeviceSink* m_interfaces[MAX_ADVISE];
    CComPtr<IConnectionPointContainer> m_container;
};

class PrintDeviceImpl
    : public CComObjectRoot
    , public CComCoClass<PrintDeviceImpl, &CLSID_PrintDevice>
    , public IPrintDevice
    , public IConnectionPointContainer
{
    BEGIN_COM_MAP(PrintDeviceImpl)
        COM_INTERFACE_ENTRY(IPrintDevice)
        COM_INTERFACE_ENTRY(IConnectionPointContainer)
    END_COM_MAP()

public:
    DECLARE_REGISTRY_RESOURCEID(IDR_CONNECTIONPOINT);

    STDMETHODIMP Print() override;

    // ͨ�� IConnectionPointContainer �̳�
    STDMETHODIMP EnumConnectionPoints(IEnumConnectionPoints** ppEnum) override;
    STDMETHODIMP FindConnectionPoint(REFIID riid, IConnectionPoint** ppCP) override;

private:
    CComPtr<PrintDeviceSinkCP> m_cp;
};

OBJECT_ENTRY_AUTO(CLSID_PrintDevice, PrintDeviceImpl);