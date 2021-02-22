#include <combaseapi.h>

// 简单起见，不适用ATL
class MyBindContext : public IBindCtx
{
public:
    MyBindContext()
        : ref_(0)
    {
        CreateBindCtx(0, &ctx_);
    }

    // 通过 IBindCtx 继承
    virtual HRESULT __stdcall QueryInterface(REFIID riid, void** ppvObject) override
    {
        return ctx_->QueryInterface(riid, ppvObject);
    }
    virtual ULONG __stdcall AddRef(void) override
    {
        ctx_->AddRef();
        return ++ref_;
    }
    virtual ULONG __stdcall Release(void) override
    {
        ctx_->Release();
        ULONG cache = --ref_;
        if (cache == 0)
            delete this;
        return cache;
    }
    virtual HRESULT __stdcall RegisterObjectBound(IUnknown* punk) override
    {
        return ctx_->RegisterObjectBound(punk);
    }
    virtual HRESULT __stdcall RevokeObjectBound(IUnknown* punk) override
    {
        return ctx_->RevokeObjectBound(punk);
    }
    virtual HRESULT __stdcall ReleaseBoundObjects(void) override
    {
        return ctx_->ReleaseBoundObjects();
    }
    virtual HRESULT __stdcall SetBindOptions(BIND_OPTS* pbindopts) override
    {
        return ctx_->SetBindOptions(pbindopts);
    }
    virtual HRESULT __stdcall GetBindOptions(BIND_OPTS* pbindopts) override
    {
        return ctx_->GetBindOptions(pbindopts);
    }
    virtual HRESULT __stdcall GetRunningObjectTable(IRunningObjectTable** pprot) override
    {
        return ctx_->GetRunningObjectTable(pprot);
    }
    virtual HRESULT __stdcall RegisterObjectParam(LPOLESTR pszKey, IUnknown* punk) override
    {
        return ctx_->RegisterObjectParam(pszKey, punk);
    }
    virtual HRESULT __stdcall GetObjectParam(LPOLESTR pszKey, IUnknown** ppunk) override
    {
        return ctx_->GetObjectParam(pszKey, ppunk);
    }
    virtual HRESULT __stdcall EnumObjectParam(IEnumString** ppenum) override
    {
        return ctx_->EnumObjectParam(ppenum);
    }
    virtual HRESULT __stdcall RevokeObjectParam(LPOLESTR pszKey) override
    {
        return ctx_->RevokeObjectParam(pszKey);
    }

    IBindCtx* ctx_;
    int ref_;
};