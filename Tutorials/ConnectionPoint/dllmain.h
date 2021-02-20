// dllmain.h: 模块类的声明。

class CConnectionPointModule : public ATL::CAtlDllModuleT< CConnectionPointModule >
{
public:
    DECLARE_LIBID(LIBID_ConnectionPointLib)
    DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CONNECTIONPOINT, "{077774EA-07F6-4527-80B2-8A832A0A8CDA}")
};

extern class CConnectionPointModule _AtlModule;
