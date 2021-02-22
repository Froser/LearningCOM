// RunDllSurrogates.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <combaseapi.h>
#include <atlbase.h>
#include "../DllSurrogates_i.h"
#include "../DllSurrogates_i.c"

// main.cpp
using namespace ATL;

struct CoInitHelper
{
    CoInitHelper() { CoInitialize(NULL); }
    ~CoInitHelper() { CoUninitialize(); }
};

int main()
{
    CoInitHelper coInitGuard; // 自动创建/释放套间
    {
        CComPtr<IMessage> pMessage;
        HRESULT hr = CoCreateInstance(CLSID_Message, NULL, CLSCTX_LOCAL_SERVER, IID_IMessage, (void**)&pMessage);
        pMessage->Print(CComBSTR(OLESTR("Hello World")));
    }
    return 0;
}
