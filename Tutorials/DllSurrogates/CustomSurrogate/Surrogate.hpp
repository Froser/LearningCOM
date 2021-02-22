#pragma once
#include <combaseapi.h>
#include "Factory.hpp"

class MySurrogate : public ISurrogate
{
public:
    MySurrogate() : m_cookie(0), m_factory(nullptr) {}

    // Í¨¹ý ISurrogate ¼Ì³Ð
    virtual HRESULT __stdcall QueryInterface(REFIID riid, void** ppvObject) override
    {
        if (!ppvObject)
            return E_POINTER;

        if (IsEqualIID(IID_IUnknown, riid))
            *ppvObject = this;
        else if (IsEqualIID(IID_ISurrogate, riid))
            *ppvObject = (ISurrogate*)this;
        else
            return E_NOINTERFACE;

        ((IUnknown*)(*ppvObject))->AddRef();
        return S_OK;
    }
    virtual ULONG __stdcall AddRef(void) override
    {
        return 2;
    }
    virtual ULONG __stdcall Release(void) override
    {
        return 1;
    }
    virtual HRESULT __stdcall LoadDllServer(REFCLSID Clsid) override
    {
        m_factory = new MyFactory(Clsid);
        HRESULT hr = CoRegisterClassObject(Clsid, m_factory, CLSCTX_LOCAL_SERVER, REGCLS_SURROGATE, &m_cookie);
        return hr;
    }
    virtual HRESULT __stdcall FreeSurrogate(void) override
    {
        CoRevokeClassObject(m_cookie);
        PostQuitMessage(0);
        return S_OK;
    }

    DWORD m_cookie;
    IClassFactory* m_factory;
};