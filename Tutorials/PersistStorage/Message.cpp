#include "pch.h"
#include "Message.h"

MessageImpl::MessageImpl()
    : m_number(0)
    , m_dirty(false)
{

}

MessageImpl::~MessageImpl()
{

}

STDMETHODIMP_(int) MessageImpl::Get()
{
    return m_number;
}

STDMETHODIMP MessageImpl::Set(int n)
{
    if (m_number != n)
    {
        m_number = n;
        m_dirty = true;
    }
    return S_OK;
}

STDMETHODIMP MessageImpl::GetClassID(CLSID* pClassID)
{
    if (!pClassID)
        return E_POINTER;

    *pClassID = CLSID_Message;
    return S_OK;
}

STDMETHODIMP MessageImpl::IsDirty(void)
{
    return m_dirty ? S_OK : S_FALSE;
}

STDMETHODIMP MessageImpl::GetSizeMax(ULARGE_INTEGER* pCbSize)
{
    if (!pCbSize)
        return E_POINTER;

    pCbSize->QuadPart = sizeof(m_number);
    return S_OK;
}

STDMETHODIMP MessageImpl::InitNew(void)
{
    m_number = 0;
    return S_OK;
}

STDMETHODIMP MessageImpl::Save(LPSTREAM pStm, BOOL fClearDirty)
{
#if 0 // �Ż�ǰ
    CLSID clsid;
    GetClassID(&clsid);
    /* дCLSID */
    pStm->Write(&clsid, sizeof(CLSID), NULL);

    /* д���� */
    pStm->Write(&m_number, sizeof(m_number), NULL);
    if (fClearDirty)
        m_dirty = false;

    return S_OK;
#elif 0 
    CLSID clsid;
    GetClassID(&clsid);
    /* дCLSID */
    WriteClassStm(pStm, clsid);

    /* д���� */
    pStm->Write(&m_number, sizeof(m_number), NULL);
    if (fClearDirty)
        m_dirty = false;

    return S_OK;
#else // �Ż��󣬲���Ҫ��¼CLSID
    /* д���� */
    pStm->Write(&m_number, sizeof(m_number), NULL);
    if (fClearDirty)
        m_dirty = false;

    return S_OK;
#endif
}

STDMETHODIMP MessageImpl::Load(LPSTREAM pStm)
{
    /* ��ȡ���� */
    pStm->Read(&m_number, sizeof(int), NULL);
    return S_OK;
}