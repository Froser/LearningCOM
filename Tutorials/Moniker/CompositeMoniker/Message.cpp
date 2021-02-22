// Message.cpp: CMessage 的实现

#include "pch.h"
#include "Message.h"

// CMessage


HRESULT CMessage::Print(BSTR b)
{
	MessageBoxW(NULL, b, L"Message", MB_OK);
	return S_OK;
}
