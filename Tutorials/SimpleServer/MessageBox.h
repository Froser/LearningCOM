#pragma once
#include "SimpleServer_i.h"
#include <atlcom.h>

using namespace ATL;

class MessageImpl
    : public IMessageBox
    , public CComObjectRoot
    , public CComCoClass<MessageImpl, &CLSID_MessageBoxClass>
{
public:
    DECLARE_REGISTRY_RESOURCEID(IDR_SIMPLESERVER);
    BEGIN_COM_MAP(MessageImpl)
        COM_INTERFACE_ENTRY(IMessageBox)
    END_COM_MAP()

    STDMETHODIMP Show(VARIANT szText) override;
};

OBJECT_ENTRY_AUTO(CLSID_MessageBoxClass, MessageImpl);
