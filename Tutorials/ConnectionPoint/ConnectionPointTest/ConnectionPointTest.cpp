// ConnectionPointTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <combaseapi.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>
#include "../ConnectionPoint_i.h"
#include "../ConnectionPoint_i.c"
#include "../ConnectionPointATL/ConnectionPointATL_i.h"
#include "../ConnectionPointATL/ConnectionPointATL_i.c"

using namespace ATL;
class MessageSink
    : public IPrintDeviceSink
{
    /* 假的AddRef和Release */
    STDMETHODIMP_(ULONG) AddRef() override { return 2; }
    STDMETHODIMP_(ULONG) Release() override { return 1; }
    STDMETHODIMP_(HRESULT) QueryInterface(REFIID iid, void** pp)
    {
        if (IsEqualIID(IID_IPrintDeviceSink, iid))
        {
            *pp = (IPrintDeviceSink*)this;
            return S_OK;
        }
        return E_NOINTERFACE;
    }

    STDMETHODIMP OnPrint() override
    {
        std::cout << "Callback OnPrint is invoked!" << std::endl;
        return S_OK;
    }
};

struct EventSink : _IMessageBoxServerEvents
{
    virtual HRESULT STDMETHODCALLTYPE GetTypeInfoCount(__RPC__out UINT* pctinfo)
    {
        return E_NOTIMPL;
    }

    virtual HRESULT STDMETHODCALLTYPE GetTypeInfo(UINT iTInfo, LCID lcid, __RPC__deref_out_opt ITypeInfo** ppTInfo)
    {
        return E_NOTIMPL;
    }


    virtual HRESULT STDMETHODCALLTYPE GetIDsOfNames(__RPC__in REFIID riid, __RPC__in_ecount_full(cNames) LPOLESTR* rgszNames, __RPC__in_range(0, 16384) UINT cNames, LCID lcid, __RPC__out_ecount_full(cNames) DISPID* rgDispId)
    {
        return E_NOTIMPL;
    }


    virtual HRESULT STDMETHODCALLTYPE Invoke(_In_ DISPID dispIdMember, _In_ REFIID riid, _In_ LCID lcid, _In_ WORD wFlags, _In_ DISPPARAMS* pDispParams, _Out_opt_ VARIANT* pVarResult, _Out_opt_ EXCEPINFO* pExcepInfo, _Out_opt_ UINT* puArgErr)
    {
        return S_OK;
    }

    virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject)
    {
        if (!ppvObject)
            return E_POINTER;

        if (IsEqualIID(riid, IID_IUnknown))
            *ppvObject = (IUnknown*)this;
        else if (IsEqualIID(riid, DIID__IMessageBoxServerEvents))
            *ppvObject = (_IMessageBoxServerEvents*)this;
        else
            return E_NOTIMPL;

        ((IUnknown*)(*ppvObject))->AddRef();
        return S_OK;
    }

    virtual ULONG STDMETHODCALLTYPE AddRef(void)
    {
        return 2;
    }

    virtual ULONG STDMETHODCALLTYPE Release(void)
    {
        return 1;
    }
};

void SimpleConnectionPoint() {
    CoInitialize(NULL);

    {
        CComPtr<IPrintDevice> pPrintDevice;
        CoCreateInstance(CLSID_PrintDevice, NULL, CLSCTX_INPROC_SERVER, IID_IPrintDevice, (void**)&pPrintDevice);

        CComPtr<IConnectionPointContainer> pContainer;
        pContainer = pPrintDevice;

        CComPtr<IConnectionPoint> pConnectionPoint;
        pContainer->FindConnectionPoint(IID_IPrintDeviceSink, &pConnectionPoint);

        MessageSink es;
        DWORD cookie;
        HRESULT hr = pConnectionPoint->Advise(&es, &cookie);
        ATLASSERT(SUCCEEDED(hr));
        pPrintDevice->Print();
    }

    CoUninitialize();
}

void ATLConnectionPoint()
{
    CoInitialize(NULL);

    {
        CComPtr<IDispatch> pDisp;
        CoCreateInstance(CLSID_MessageBoxServer, NULL, CLSCTX_LOCAL_SERVER, IID_IDispatch, (void**)&pDisp);

        CComPtr<IConnectionPointContainer> pContainer;
        pContainer = pDisp;

        CComPtr<IConnectionPoint> pConnectionPoint;
        pContainer->FindConnectionPoint(DIID__IMessageBoxServerEvents, &pConnectionPoint);

        EventSink es;
        DWORD cookie;
        pConnectionPoint->Advise(&es, &cookie);

        CComBSTR bstr = SysAllocString(L"Hello World!");
        CComVariant v(bstr);
        DISPPARAMS args = { &v, NULL, 1, 0 };
        HRESULT hr = pDisp->Invoke(1, IID_NULL, NULL, DISPATCH_METHOD, &args, NULL, NULL, NULL);
    }

    CoUninitialize();
}

int main()
{
    SimpleConnectionPoint();
    ATLConnectionPoint();
    return 0;
}
