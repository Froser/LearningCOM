// dllmain.h: 模块类的声明。

class CProjectExampleModule : public ATL::CAtlDllModuleT< CProjectExampleModule >
{
public :
	DECLARE_LIBID(LIBID_ProjectExampleLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_PROJECTEXAMPLE, "{151751b1-0829-48fd-91e6-b4327d5a0526}")
};

extern class CProjectExampleModule _AtlModule;
