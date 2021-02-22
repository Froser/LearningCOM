// AsynchronousCallTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <windows.h>
#include "../AsynchronousCall_i.h"
#include "../AsynchronousCall_i.c"
#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>

void AsyncCall()
{
    CoInitialize(NULL);
    {
        CComPtr<IMessage> pMsg;
        HRESULT hr = CoCreateInstance(CLSID_Message, NULL, CLSCTX_LOCAL_SERVER, IID_IMessage, (void**)&pMsg);
        CComPtr<ICallFactory> pCallFactory;
        pCallFactory = pMsg;

        CComPtr<IUnknown> pAsyncUnknown;
        hr = pCallFactory->CreateCall(IID_AsyncIMessage, NULL, IID_AsyncIMessage, &pAsyncUnknown);
        CComPtr<AsyncIMessage> pAsync;
        pAsync = pAsyncUnknown;

        hr = pAsync->Begin_GetNumber(); // 开始异步调用

        std::cout << "Client is doing its work..." << std::endl;
        int result = 0;
        pAsync->Finish_GetNumber(&result); // 在这里阻塞一会儿
        ATLASSERT(result == 10);
    }
    CoUninitialize();
}

int main()
{
    AsyncCall();
}
