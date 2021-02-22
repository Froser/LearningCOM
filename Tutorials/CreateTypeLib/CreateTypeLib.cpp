#include <windows.h>
#include <combaseapi.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>

using namespace ATL;

struct CoInitHelper
{
	CoInitHelper() { CoInitialize(NULL); }
	~CoInitHelper() { CoUninitialize(); }
};

int main()
{
	CoInitHelper coInitGuard; // 自动创建/释放套间

	HRESULT hr = S_OK;
	OLECHAR szPath[] = L"D:\\MyProject.tlb";
	CComPtr<ICreateTypeLib2> pCreateTypeLib2;
	hr = CreateTypeLib2(SYS_WIN32, szPath, &pCreateTypeLib2);

	OLECHAR szName[] = L"MyProject";
	OLECHAR szHelpString[] = L"This is a demo library";

	/*
		[
			uuid(dfa98c1f-2f81-4115-8dd5-692d91ee7342),
			version(1.0),
			helpstring("This is a demo library")
		]
		library ATLProject1Lib
	*/
	GUID LIBID_ATLProject1Lib = { 0xdfa98c1f, 0x2f81, 0x4115, 0x8d, 0xd5, 0x69, 0x2d, 0x91, 0xee, 0x73, 0x42 };
	hr = pCreateTypeLib2->SetGuid(LIBID_ATLProject1Lib);
	hr = pCreateTypeLib2->SetName(szName);
	hr = pCreateTypeLib2->SetVersion(1, 0);
	hr = pCreateTypeLib2->SetDocString(szHelpString);
	hr = pCreateTypeLib2->SetLcid(LANG_NEUTRAL); // 区域无关

	/*
		[object, uuid(8B82ACF5-2A77-4385-B254-4BC5C6F12FB5)]
		interface IMessage : IUnknown
		{
			HRESULT Print([in] BSTR strMsg);
		};
	*/
	OLECHAR szIMessage[] = L"IMessage";
	CComPtr<ICreateTypeInfo> pIMessageCreateTypeInfo;
	hr = pCreateTypeLib2->CreateTypeInfo(szIMessage, TKIND_INTERFACE, &pIMessageCreateTypeInfo);
	GUID IID_IMessage = { 0x8B82ACF5,0x2A77,0x4385,0xB2,0x54,0x4B,0xC5,0xC6,0xF1,0x2F,0xB5 };
	hr = pIMessageCreateTypeInfo->SetGuid(IID_IMessage);

	// 下面的代码描述一个方法virtual HRESULT __stdcall Print([in] BSTR strMsg) = 0;
	{
		FUNCDESC funcDescPrint = { 0 };
		funcDescPrint.funckind = FUNC_PUREVIRTUAL; // 纯虚函数
		funcDescPrint.invkind = INVOKE_FUNC; // 普通方法（不是propertyget也不是propertyput）
		funcDescPrint.callconv = CC_STDCALL; // stdcall调用约定

		TYPEDESC tdescParams = { 0 }; // 参数类型
		tdescParams.vt = VT_INT;
		ELEMDESC paramDesc = { 0 };
		paramDesc.tdesc.vt = VT_BSTR;
		paramDesc.tdesc.lptdesc = &tdescParams;
		paramDesc.paramdesc.wParamFlags = PARAMFLAG_FIN; // [in]
		funcDescPrint.cParams = 1; // 接受1个参数
		funcDescPrint.lprgelemdescParam = &paramDesc; // 参数的描述

		TYPEDESC tDesc = { 0 };
		tDesc.vt = VT_INT;
		funcDescPrint.elemdescFunc.tdesc.vt = VT_HRESULT; // 返回值描述
		funcDescPrint.elemdescFunc.tdesc.lptdesc = &tDesc;
		hr = pIMessageCreateTypeInfo->AddFuncDesc(0, &funcDescPrint); // 添加这个方法到IMessage

		OLECHAR szFuncName[] = L"Print";
		OLECHAR szParam1Name[] = L"strMsg";
		LPOLESTR szParamNames[] = { szFuncName, szParam1Name };
		hr = pIMessageCreateTypeInfo->SetFuncAndParamNames(0, szParamNames, _countof(szParamNames)); // 将Imessage中描述的方法名字、参数1(BSTR)命名
	}

	// 描述ISum继承自IUnknown
	// ICreateTypeInfo::AddImplType可以表示一个类型实现了某一个接口，它接受一个HREFTYPE索引表示所实现的接口，通过ICreateTypeInfo::AddRefTypeInfo得到
	// 我们的思路是拿到IUnknown接口的HREFTYPE，作为pIMessageCreateTypeInfo->AddImplType的参数，表明IMessage继承了IUnknown
	CComPtr<ITypeLib> pStdOleLib;
	hr = LoadRegTypeLib(IID_StdOle, STDOLE2_MAJORVERNUM, STDOLE2_MINORVERNUM, STDOLE2_LCID, &pStdOleLib);
	CComPtr<ITypeInfo> pIUnknownInfo;
	hr = pStdOleLib->GetTypeInfoOfGuid(IID_IUnknown, &pIUnknownInfo);
	HREFTYPE refIUnknown;
	hr = pIMessageCreateTypeInfo->AddRefTypeInfo(pIUnknownInfo, &refIUnknown);
	hr = pIMessageCreateTypeInfo->AddImplType(0, refIUnknown);

	/*
		[uuid(B8922344-0FD5-4630-A4D7-DD9C9321BBB1)]
		coclass Message
		{
			interface IMessage;
		};
	*/
	CComPtr<ICreateTypeInfo> pCoClassMessageCreateTypeInfo;
	OLECHAR szMessage[] = L"Message";
	hr = pCreateTypeLib2->CreateTypeInfo(szMessage, TKIND_COCLASS, &pCoClassMessageCreateTypeInfo);
	GUID CLSID_Message = { 0xB8922344,0x0FD5,0x4630,0xA4,0xD7,0xDD,0x9C,0x93,0x21,0xBB,0xB1 };
	hr = pCoClassMessageCreateTypeInfo->SetGuid(CLSID_Message);
	// 一定要设置下面这个标记，这样它能自动实现ITypeInfo::CreateInstance
	// MIDL.exe中自动生成了这个标记，我们自己创建的时候，需要手动设置上。
	hr = pCoClassMessageCreateTypeInfo->SetTypeFlags(TYPEFLAG_FCANCREATE);
	// 在coclassMessage中加入interface IMessage。
	// 和上面类似，使用ICreateTypeInfo::AddImplType表明实现关系
	CComPtr<ITypeInfo> pIMessageTypeInfo;
	pIMessageTypeInfo = pIMessageCreateTypeInfo;
	HREFTYPE refIMessage;
	hr = pCoClassMessageCreateTypeInfo->AddRefTypeInfo(pIMessageTypeInfo, &refIMessage);
	hr = pCoClassMessageCreateTypeInfo->AddImplType(0, refIMessage); // 将interface IMessage添加到coclass Message，表明coclass Message实现了IMessage
	// 如果这个interface前面带有[source, default, ...]等标记，则调用
	// pCoClassMessageCreateTypeInfo->SetImplTypeFlags(0, IMPLTYPEFLAG_FDEFAULT | IMPLTYPEFLAG_FSOURCE);

	/*
		最终，设置虚函数索引，并保存
	*/
	hr = pIMessageCreateTypeInfo->LayOut();
	hr = pCreateTypeLib2->SaveAllChanges();

	return 0;
}