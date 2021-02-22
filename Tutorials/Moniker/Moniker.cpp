// Moniker.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <combaseapi.h>
#include <atlcomcli.h>
#include "../DllSurrogates/DllSurrogates_i.h"
#include "../DllSurrogates/DllSurrogates_i.c"
#include "BindContext.hpp"

void ClassWithoutMoniker()
{
	HRESULT hr = S_OK;

	CoInitialize(NULL);

	{
		/* 创建实例 */
		CComPtr<IMessage> pMessage;
		CoCreateInstance(CLSID_Message, NULL, CLSCTX_INPROC_SERVER, IID_IMessage, (void**)&pMessage);
		hr = pMessage->Print(CComBSTR(OLESTR("Hello World!")));
	}

	CoUninitialize();
}

void MonikerFromStream()
{
	HRESULT hr = S_OK;

	CoInitialize(NULL);

	{
		/* 创建一个Class Moniker */
		CComPtr<IMoniker> pMoniker;
		hr = CreateClassMoniker(CLSID_Message, &pMoniker);

		/* 绑定 */
		CComPtr<IClassFactory> pFactory;
		hr = BindMoniker(pMoniker, 0, IID_IClassFactory, (void**)&pFactory);

		/* 创建实例 */
		CComPtr<IMessage> pMessage;
		hr = pFactory->CreateInstance(NULL, IID_IMessage, (void**)&pMessage);

		/* 保存到流中 */
		CComPtr<IStream> pStream;
		hr = CreateStreamOnHGlobal(NULL, TRUE, &pStream);
		hr = OleSaveToStream(pMoniker, pStream);

		/* 重置一下流 */
		LARGE_INTEGER pos = { 0 };
		hr = pStream->Seek(pos, STREAM_SEEK_SET, NULL);

		/* 从流中创建一个IMoniker */
		CComPtr<IMoniker> pAnotherMoniker;
		hr = OleLoadFromStream(pStream, IID_IMoniker, (void**)&pAnotherMoniker);

		/* 绑定 */
		CComPtr<IClassFactory> pAnotherFactory;
		hr = BindMoniker(pAnotherMoniker, 0, IID_IClassFactory, (void**)&pAnotherFactory);

		/* 创建实例 */
		CComPtr<IMessage> pAnotherMessage;
		hr = pAnotherFactory->CreateInstance(NULL, IID_IMessage, (void**)&pAnotherMessage);
		hr = pAnotherMessage->Print(CComBSTR(OLESTR("Hello World!")));
	}

	CoUninitialize();
}

void ClassMoniker()
{
	HRESULT hr = S_OK;
	CoInitialize(NULL);

	{
		/* 创建一个Class Moniker */
		CComPtr<IMoniker> pMoniker;
		hr = CreateClassMoniker(CLSID_Message, &pMoniker);

		/* 创建绑定上下文 */
		CComPtr<IBindCtx> pCtx;
		hr = CreateBindCtx(0, &pCtx);

		/* 拿到IClassFactory接口 */
		CComPtr<IClassFactory> pFactory;
		hr = pMoniker->BindToObject(pCtx, NULL, IID_IClassFactory, (void**)&pFactory);

		/* 创建实例 */
		CComPtr<IMessage> pMessage;
		hr = pFactory->CreateInstance(NULL, IID_IMessage, (void**)&pMessage);
		hr = pMessage->Print(CComBSTR(OLESTR("Hello World!")));
	}

	CoUninitialize();
}

void EnumRunningObjects()
{
	HRESULT hr = S_OK;

	CoInitialize(NULL);
	{
		CComPtr<IBindCtx> pCtx = new MyBindContext();
		CComPtr<IRunningObjectTable> pROT;
		pCtx->GetRunningObjectTable(&pROT);
		CComPtr<IEnumMoniker> pEnumMoniker;
		pROT->EnumRunning(&pEnumMoniker);

		CComPtr<IMalloc> pMalloc;
		CoGetMalloc(1, &pMalloc);
		pEnumMoniker->Reset();
		while (true)
		{
			CComPtr<IMoniker> pMoniker;
			if (S_FALSE == pEnumMoniker->Next(1, &pMoniker, NULL))
				break;

			LPOLESTR szDisplayName;
			pMoniker->GetDisplayName(pCtx, NULL, &szDisplayName);
			std::wcout << szDisplayName << std::endl;
			pMalloc->Free(szDisplayName);
		}
	}
	CoUninitialize();
}

void ParseClsidMoniker()
{
	HRESULT hr = S_OK;

	CoInitialize(NULL);
	{
		CComPtr<IBindCtx> pCtx = new MyBindContext();
		CComPtr<IMoniker> pMoniker;
		ULONG chEaten;
		hr = MkParseDisplayName(pCtx, OLESTR("clsid:064468a5-f878-4a10-8e2e-d70bdfd00b23"), &chEaten, &pMoniker);

		CComPtr<IClassFactory> pFactory;
		hr = pMoniker->BindToObject(pCtx, NULL, IID_IClassFactory, (void**)&pFactory);

		CComPtr<IMessage> pMessage;
		hr = pFactory->CreateInstance(NULL, IID_IMessage, (void**)&pMessage);
		pMessage->Print(CComBSTR(OLESTR("Hello World from clsid:MkParseDisplayName.")));
	}
	CoUninitialize();
}

void ParseNewMoniker()
{
	HRESULT hr = S_OK;

	CoInitialize(NULL);
	{
		CComPtr<IBindCtx> pCtx = new MyBindContext();
		CComPtr<IMoniker> pMoniker;
		ULONG chEaten;
		hr = MkParseDisplayName(pCtx, OLESTR("new:064468a5-f878-4a10-8e2e-d70bdfd00b23"), &chEaten, &pMoniker);

		CComPtr<IMessage> pMessage;
		hr = pMoniker->BindToObject(pCtx, NULL, IID_IMessage, (void**)&pMessage);
		pMessage->Print(CComBSTR(OLESTR("Hello World from new:MkParseDisplayName.")));
	}
	CoUninitialize();
}

int main()
{
	ClassWithoutMoniker();
	ClassMoniker();
	MonikerFromStream();
	EnumRunningObjects();
	ParseClsidMoniker();
	ParseNewMoniker();
}
