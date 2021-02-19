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
#if 0 // 优化前
    CLSID clsid;
    GetClassID(&clsid);
    /* 写CLSID */
    pStm->Write(&clsid, sizeof(CLSID), NULL);

    /* 写数据 */
    pStm->Write(&m_number, sizeof(m_number), NULL);
    if (fClearDirty)
        m_dirty = false;

    return S_OK;
#elif 0 
    CLSID clsid;
    GetClassID(&clsid);
    /* 写CLSID */
    WriteClassStm(pStm, clsid);

    /* 写数据 */
    pStm->Write(&m_number, sizeof(m_number), NULL);
    if (fClearDirty)
        m_dirty = false;

    return S_OK;
#else // 优化后，不需要记录CLSID
    /* 写数据 */
    pStm->Write(&m_number, sizeof(m_number), NULL);
    if (fClearDirty)
        m_dirty = false;

    return S_OK;
#endif
}

STDMETHODIMP MessageImpl::Load(LPSTREAM pStm)
{
    /* 读取数据 */
    pStm->Read(&m_number, sizeof(int), NULL);
    return S_OK;
}