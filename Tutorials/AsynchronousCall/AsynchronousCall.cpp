// AsynchronousCall.cpp: WinMain 的实现


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "AsynchronousCall_i.h"


using namespace ATL;


class CAsynchronousCallModule : public ATL::CAtlExeModuleT< CAsynchronousCallModule >
{
public :
	DECLARE_LIBID(LIBID_AsynchronousCallLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ASYNCHRONOUSCALL, "{62087271-2fc8-4011-bf3c-77f9d293205d}")
};

CAsynchronousCallModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

