#include <iostream>
#include <combaseapi.h>
#include <atlcomcli.h>
#include "../BindContext.hpp"
#include "../CompositeMoniker/CompositeMoniker_i.h"
#include "../CompositeMoniker/CompositeMoniker_i.c"

void ItemMoniker()
{
	HRESULT hr = S_OK;

	CoInitialize(NULL);
	{
		CComPtr<IBindCtx> pCtx = new MyBindContext();
		CComPtr<IMoniker> pMoniker;
		ULONG chEaten;
		hr = MkParseDisplayName(pCtx, OLESTR("clsid:60a4c02d-7c08-460f-af5e-70cc3e8a9ab7:!IMessage"), &chEaten, &pMoniker);

		CComPtr<IMessage> pMessage;
		hr = pMoniker->BindToObject(pCtx, NULL, IID_IMessage, (void**)&pMessage);

		pMessage->Print(CComBSTR(OLESTR("Hello World from composite moniker.")));
	}
	CoUninitialize();
}

int main()
{
	ItemMoniker();
}