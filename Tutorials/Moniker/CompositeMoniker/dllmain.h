// dllmain.h: 模块类的声明。

class CCompositeMonikerModule : public ATL::CAtlDllModuleT< CCompositeMonikerModule >
{
public :
	DECLARE_LIBID(LIBID_CompositeMonikerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMPOSITEMONIKER, "{bef82564-0609-4850-9be1-6bdfb0ee2e55}")
};

extern class CCompositeMonikerModule _AtlModule;
