#include <atlcom.h>
#include "PersistStorage_i.h"
using namespace ATL;

class MessageImpl
    : public CComObjectRoot
    , public CComCoClass<MessageImpl, &CLSID_Message>
    , public IMessage
    , public IPersistStreamInit
    , public IPersistStream
{
    BEGIN_COM_MAP(MessageImpl)
        COM_INTERFACE_ENTRY(IMessage)
        COM_INTERFACE_ENTRY(IPersistStreamInit)
        COM_INTERFACE_ENTRY(IPersistStream)
    END_COM_MAP()

    MessageImpl();
    ~MessageImpl();

public:
    DECLARE_REGISTRY_RESOURCEID(IDR_PERSISTSTORAGE);

    STDMETHODIMP_(int) Get() override;
    STDMETHODIMP Set(int) override;

private:
    // Í¨¹ý IPersistStreamInit ¼Ì³Ð
    STDMETHODIMP GetClassID(CLSID* pClassID) override;
    STDMETHODIMP IsDirty(void) override;
    STDMETHODIMP Load(LPSTREAM pStm) override;
    STDMETHODIMP Save(LPSTREAM pStm, BOOL fClearDirty) override;
    STDMETHODIMP GetSizeMax(ULARGE_INTEGER* pCbSize) override;
    STDMETHODIMP InitNew(void) override;

private:
    int m_number;
    bool m_dirty;
};

OBJECT_ENTRY_AUTO(CLSID_Message, MessageImpl);