// dllmain.cpp: DllMain ��ʵ�֡�

#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "ConnectionPoint_i.h"
#include "dllmain.h"

CConnectionPointModule _AtlModule;

// DLL ��ڵ�
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    hInstance;
    return _AtlModule.DllMain(dwReason, lpReserved);
}
