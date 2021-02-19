// PersistStorageClient.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <atlbase.h>
#include <atlcom.h>
#include <objbase.h>
#include <combaseapi.h>
#include "../PersistStorage_i.h"
#include "../PersistStorage_i.c"

int main()
{
    HRESULT hr = S_OK;
    hr = CoInitializeEx(NULL, COINIT_MULTITHREADED);
    if (SUCCEEDED(hr))
    {
        // 创建一个IMessage
        CComPtr<IMessage> pMsg;
        hr = CoCreateInstance(CLSID_Message, NULL, CLSCTX_INPROC_SERVER, IID_IMessage, (void**)&pMsg);

        // 设置一个初值10
        pMsg->Set(10);

        // 获取其持久化接口
        CComPtr<IPersistStreamInit> pPersist;
        pPersist = pMsg;

        // 创建一个流
        CComPtr<IStream> pStream;
        CreateStreamOnHGlobal(NULL, TRUE, &pStream);

        // 保存流
        pPersist->Save(pStream, TRUE);

        // 重置流
        LARGE_INTEGER pos;
        pos.QuadPart = 0;
        pStream->Seek(pos, STREAM_SEEK_SET, NULL);

        // 创建另外一个对象
        CLSID clsid;
        pStream->Read(&clsid, sizeof(clsid), NULL);

        CComPtr<IUnknown> pAnother;
        hr = CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, IID_IUnknown, (void**)&pAnother);

        // 从流中还原此对象
        CComPtr<IPersistStreamInit> pAnotherStream;
        pAnotherStream = pAnother;
        pAnotherStream->InitNew();
        pAnotherStream->Load(pStream);

        // 打印对象
        CComPtr<IMessage> pAnotherMsg;
        pAnotherMsg = pAnotherStream;
        pAnotherMsg->Print();
    }

    CoUninitialize();
    return 0;
}