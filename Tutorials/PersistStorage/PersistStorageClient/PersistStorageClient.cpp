// PersistStorageClient.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <atlbase.h>
#include <atlcom.h>
#include <objbase.h>
#include <combaseapi.h>
#include "../PersistStorage_i.h"
#include "../PersistStorage_i.c"

void PersistStreamDemo()
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
        hr = CreateStreamOnHGlobal(NULL, TRUE, &pStream);

        // 保存流
        pPersist->Save(pStream, TRUE);

        // 重置流
        LARGE_INTEGER pos;
        pos.QuadPart = 0;
        pStream->Seek(pos, STREAM_SEEK_SET, NULL);

        // 创建另外一个对象
        CLSID clsid;
#if 0
        pStream->Read(&clsid, sizeof(clsid), NULL);
#else
        ReadClassStm(pStream, &clsid);
#endif

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
        int result = pAnotherMsg->Get();

        // 确保值是正确的
        ATLASSERT(result == 10);
    }

    CoUninitialize();
}

void PersistStreamByOleFunctionsDemo()
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
        CComPtr<IPersistStream> pPersistStream;
        pPersistStream = pPersist;
        OleSaveToStream(pPersistStream, pStream);

        // 重置流
        LARGE_INTEGER pos;
        pos.QuadPart = 0;
        pStream->Seek(pos, STREAM_SEEK_SET, NULL);

        // 创建另外一个对象
        CComPtr<IUnknown> pAnother;
        OleLoadFromStream(pStream, IID_IUnknown, (void**)&pAnother);

        // 打印对象
        CComPtr<IMessage> pAnotherMsg;
        pAnotherMsg = pAnother;
        int result = pAnotherMsg->Get();

        // 确保值是正确的
        ATLASSERT(result == 10);
    }

    CoUninitialize();
}

void IStorageTest()
{
    HRESULT hr = S_OK;

    char str[] = "hello world";
    {
        /* 创建一个stg文件 */
        CComPtr<IStorage> pStorage;
        hr = StgCreateStorageEx(L"D:\\test.stg",
            STGM_DIRECT | STGM_CREATE | STGM_READWRITE | STGM_SHARE_EXCLUSIVE,
            STGFMT_STORAGE, 0, 0, 0, IID_IStorage, (void**)&pStorage);

        /* 创建一个叫MyFile的流结点 */
        CComPtr<IStream> pStream;
        pStorage->CreateStream(OLESTR("MyFile"), STGM_DIRECT | STGM_CREATE | STGM_WRITE | STGM_SHARE_EXCLUSIVE,
            0, 0, &pStream);

        /* 写入数据 */
        size_t sz = sizeof(str);
        pStream->Write(&sz, sizeof(size_t), NULL);
        pStream->Write(str, sz, NULL);
    }

    {
        /* 测试读取 */
        CComPtr<IStorage> pStorage;
        hr = StgOpenStorageEx(L"D:\\test.stg",
            STGM_DIRECT | STGM_READWRITE | STGM_SHARE_EXCLUSIVE,
            STGFMT_STORAGE, 0, 0, 0, IID_IStorage, (void**)&pStorage);

        /* 获取MyFile流结点 */
        CComPtr<IStream> pStream;
        hr = pStorage->OpenStream(OLESTR("MyFile"), NULL, STGM_DIRECT | STGM_READ | STGM_SHARE_EXCLUSIVE,
            0, &pStream);

        /* 读取数据 */
        size_t sz;
        pStream->Read(&sz, sizeof(size_t), NULL);
        char* buffer = (char*)_alloca(sz);
        pStream->Read(buffer, sz, NULL);

        // 确保值是正确的
        ATLASSERT(strcmp(buffer, str) == 0);
    }
}

void PropertyStorageTest()
{
    HRESULT hr = S_OK;

    {
        /* 创建一个stg文件 */
        CComPtr<IStorage> pStorage;
        hr = StgCreateStorageEx(L"D:\\test.stg",
            STGM_DIRECT | STGM_CREATE | STGM_READWRITE | STGM_SHARE_EXCLUSIVE,
            STGFMT_STORAGE, 0, 0, 0, IID_IStorage, (void**)&pStorage);

        /* 创建一个叫MyFile的流结点 */
        CComPtr<IStream> pStream;
        pStorage->CreateStream(OLESTR("MyFile"), STGM_DIRECT | STGM_CREATE | STGM_WRITE | STGM_SHARE_EXCLUSIVE,
            0, 0, &pStream);

        /* 写入数据 */
        char str[] = "hello world";
        size_t sz = sizeof(str);
        pStream->Write(&sz, sizeof(size_t), NULL);
        pStream->Write(str, sz, NULL);

        /* 获取属性集 */
        CComPtr<IPropertySetStorage> pPropertySetStorage;
        pPropertySetStorage = pStorage;

        /* 打开Summary属性 */
        CComPtr<IPropertyStorage> pPropertyStorage;
        hr = pPropertySetStorage->Create(FMTID_SummaryInformation, NULL, PROPSETFLAG_DEFAULT,
            STGM_CREATE | STGM_READWRITE | STGM_SHARE_EXCLUSIVE,
            &pPropertyStorage);

        /* 写入属性 */
        PROPSPEC ps;
        ps.ulKind = PRSPEC_PROPID;
        ps.propid = PIDSI_TITLE;

        PROPVARIANT pv;
        pv.vt = VT_LPSTR;
        char szTitle[] = "My Title";
        pv.pszVal = szTitle;
        hr = pPropertyStorage->WriteMultiple(1, &ps, &pv, PID_FIRST_USABLE);
    }
}

int main() {
#if 0
    PersistStreamDemo();
#endif
    PersistStreamByOleFunctionsDemo();
    IStorageTest();
    PropertyStorageTest();
    return 0;
}