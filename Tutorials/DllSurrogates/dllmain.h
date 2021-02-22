// dllmain.h: 模块类的声明。

class CDllSurrogatesModule : public ATL::CAtlDllModuleT< CDllSurrogatesModule >
{
public :
	DECLARE_LIBID(LIBID_DllSurrogatesLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DLLSURROGATES, "{6c6592db-7ebb-4e30-badd-22d26305eca5}")
};

extern class CDllSurrogatesModule _AtlModule;
