// SimpleServer.cpp: WinMain 的实现


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "SimpleServer_i.h"


using namespace ATL;


class CSimpleServerModule : public ATL::CAtlExeModuleT< CSimpleServerModule >
{
public :
	DECLARE_LIBID(LIBID_SimpleServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SIMPLESERVER, "{5a8192d4-24c5-4160-a0c6-6c9cc8e710d7}")
};

CSimpleServerModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

