// SimpleClient.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <objbase.h>
#include "../SimpleServer_i.h"
#include "../SimpleServer_i.c"

#include <atlcomcli.h>
using namespace ATL;

int main()
{
    HRESULT hr = CoInitialize(NULL);
    if (SUCCEEDED(hr))
    {
        {
            CComPtr<IMessageBox> cpMessage;
            hr = CoCreateInstance(CLSID_MessageBoxClass, NULL, CLSCTX_LOCAL_SERVER, IID_IMessageBox, (void**)&cpMessage);
            CComVariant var(L"HELLO");
            hr = cpMessage->Show(var);
        }
        CoUninitialize();
    }
    return hr;
}
