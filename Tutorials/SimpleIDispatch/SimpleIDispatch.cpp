// SimpleIDispatch.cpp: WinMain 的实现


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "SimpleIDispatch_i.h"


using namespace ATL;


class CSimpleIDispatchModule : public ATL::CAtlExeModuleT< CSimpleIDispatchModule >
{
public :
	DECLARE_LIBID(LIBID_SimpleIDispatchLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SIMPLEIDISPATCH, "{8438c34c-853e-44e8-894b-d510cd356684}")
};

CSimpleIDispatchModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

