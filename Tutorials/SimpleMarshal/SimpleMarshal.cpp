// SimpleMarshal.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <windows.h>
#include <atlbase.h>
#include "../PersistStorage/PersistStorage_i.h"
#include "../PersistStorage/PersistStorage_i.c"

#define SET_NUM 100

IStream* g_stream;
HANDLE g_event;
DWORD g_threadid;

unsigned __stdcall threadStart(void* pUnk)
{
    HRESULT hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    WaitForSingleObject(g_event, INFINITE);
    IMessage* pMessage = NULL;
    hr = CoGetInterfaceAndReleaseStream(g_stream, IID_IMessage, (void**)&pMessage);
    int num = pMessage->Get();
    ATLASSERT(num == SET_NUM);
    CoUninitialize();
    PostThreadMessage(g_threadid, WM_QUIT, 0, 0);
    return 0;
}

int main()
{
    g_threadid = GetThreadId(GetCurrentThread());
    g_event = CreateEvent(NULL, FALSE, FALSE, NULL);

    unsigned int id;
    _beginthreadex(NULL, 0, threadStart, NULL, 0, &id);

    HRESULT hr = S_OK;
    hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    if (SUCCEEDED(hr))
    {
        IMessage* pMessage = NULL;
        hr = CoCreateInstance(CLSID_Message, NULL, CLSCTX_INPROC_SERVER, IID_IMessage, (void**)&pMessage);
        pMessage->Set(SET_NUM);

        if (pMessage)
            hr = CoMarshalInterThreadInterfaceInStream(IID_IMessage, pMessage, &g_stream);
        SetEvent(g_event);
    }
    MSG msg;
    while (GetMessage(&msg, 0, 0, 0) > 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    CoUninitialize();
    return 0;
}