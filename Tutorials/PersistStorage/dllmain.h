// dllmain.h: 模块类的声明。

class CPersistStorageModule : public ATL::CAtlDllModuleT< CPersistStorageModule >
{
public :
	DECLARE_LIBID(LIBID_PersistStorageLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_PERSISTSTORAGE, "{1978d83c-29f7-4ce9-8f2f-ac765decbdfd}")
};

extern class CPersistStorageModule _AtlModule;
