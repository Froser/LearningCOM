#include <windows.h>
#include "AsynchronousCall_i.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>

using namespace ATL;
class CIMessage :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CIMessage, &CLSID_Message>,
	public IMessage
{
public:
	DECLARE_NO_REGISTRY()
	BEGIN_COM_MAP(CIMessage)
		COM_INTERFACE_ENTRY(IMessage)
	END_COM_MAP()

public:
	// 通过 IMessage 继承
	virtual HRESULT __stdcall GetNumber(int* in) override
	{
		Sleep(5000);
		if (in)
			*in = 10; // 结果
		return S_OK;
	}
};

OBJECT_ENTRY_AUTO(CLSID_Message, CIMessage)
