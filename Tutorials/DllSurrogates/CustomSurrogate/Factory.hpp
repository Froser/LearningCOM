#pragma once
#include <combaseapi.h>

class MyFactory : public IClassFactory
{
public:
    MyFactory(REFCLSID clsid) : m_ref(0), m_clsid(clsid) {}

    // Í¨¹ý IClassFactory ¼Ì³Ð
    virtual HRESULT __stdcall QueryInterface(REFIID riid, void** ppvObject) override
    {
        if (!ppvObject)
            return E_POINTER;

        if (IsEqualIID(IID_IUnknown, riid))
            *ppvObject = this;
        else if (IsEqualIID(IID_IClassFactory, riid))
            *ppvObject = (IClassFactory*)this;
        else
            return E_NOINTERFACE;

        ((IUnknown*)(*ppvObject))->AddRef();
        return S_OK;
    }
    virtual ULONG __stdcall AddRef(void) override
    {
        return ++m_ref;
    }
    virtual ULONG __stdcall Release(void) override
    {
        int c = --m_ref;
        if (m_ref == 0)
            delete this;

        return (ULONG)c;
    }
    virtual HRESULT __stdcall CreateInstance(IUnknown* pUnkOuter, REFIID riid, void** ppvObject) override
    {
        return CoCreateInstance(m_clsid, pUnkOuter,
            CLSCTX_INPROC_SERVER, riid, ppvObject);
    }
    virtual HRESULT __stdcall LockServer(BOOL fLock) override
    {
        return E_NOTIMPL;
    }
    int m_ref;
    CLSID m_clsid;
};
