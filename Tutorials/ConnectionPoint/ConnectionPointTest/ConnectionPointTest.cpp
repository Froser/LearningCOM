// ConnectionPointTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <combaseapi.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>
#include "../ConnectionPoint_i.h"
#include "../ConnectionPoint_i.c"

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

int main()
{
    SimpleConnectionPoint();
    return 0;
}
