// ConnectionPointATL.cpp: WinMain 的实现


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "ConnectionPointATL_i.h"


using namespace ATL;


class CConnectionPointATLModule : public ATL::CAtlExeModuleT< CConnectionPointATLModule >
{
public :
	DECLARE_LIBID(LIBID_ConnectionPointATLLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CONNECTIONPOINTATL, "{7d057893-29b8-4772-8e1e-bcdf395edfcb}")
};

CConnectionPointATLModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

