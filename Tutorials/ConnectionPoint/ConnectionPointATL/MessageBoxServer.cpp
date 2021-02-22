// MessageBoxServer.cpp: CMessageBoxServer 的实现

#include "pch.h"
#include "MessageBoxServer.h"


// CMessageBoxServer

STDMETHODIMP CMessageBoxServer::ShowMessageBox(BSTR b)
{
    MessageBoxW(NULL, b, L"SimpleObject", MB_OK);
    Fire_OnMessageBoxShowed();
    return S_OK;
}
