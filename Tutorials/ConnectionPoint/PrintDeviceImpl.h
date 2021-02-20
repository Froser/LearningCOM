#pragma once
#include "ConnectionPoint_i.h"
#include <combaseapi.h>
#include <atlcom.h>
#include <atlcomcli.h>

// 这个例子是自己实现IConnectionPoint。
// 使用ATL实现IConnectionPoint的例子，请参考ConnectionPointATL

using namespace ATL;

#define MAX_ADVISE 10
class PrintDeviceSinkCP
    : public CComObjectRoot
    , public CComCoClass<PrintDeviceSinkCP>
    , public IConnectionPoint
{
    BEGIN_COM_MAP(PrintDeviceSinkCP)
        COM_INTERFACE_ENTRY(IConnectionPoint)
    END_COM_MAP()

    PrintDeviceSinkCP();
    ~PrintDeviceSinkCP();

    // 通过 IConnectionPoint 继承
    STDMETHODIMP GetConnectionInterface(IID* pIID) override;
    STDMETHODIMP GetConnectionPointContainer(IConnectionPointContainer** ppCPC) override;
    STDMETHODIMP Advise(IUnknown* pUnkSink, DWORD* pdwCookie) override;
    STDMETHODIMP Unadvise(DWORD dwCookie) override;
    STDMETHODIMP EnumConnections(IEnumConnections** ppEnum) override;

public:
    void SetContainer(IConnectionPointContainer*);
    void Fire_Print();

private:
    int m_cookie;
    IPrintDeviceSink* m_interfaces[MAX_ADVISE];
    CComPtr<IConnectionPointContainer> m_container;
};

class PrintDeviceImpl
    : public CComObjectRoot
    , public CComCoClass<PrintDeviceImpl, &CLSID_PrintDevice>
    , public IPrintDevice
    , public IConnectionPointContainer
{
    BEGIN_COM_MAP(PrintDeviceImpl)
        COM_INTERFACE_ENTRY(IPrintDevice)
        COM_INTERFACE_ENTRY(IConnectionPointContainer)
    END_COM_MAP()

public:
    DECLARE_REGISTRY_RESOURCEID(IDR_CONNECTIONPOINT);

    STDMETHODIMP Print() override;

    // 通过 IConnectionPointContainer 继承
    STDMETHODIMP EnumConnectionPoints(IEnumConnectionPoints** ppEnum) override;
    STDMETHODIMP FindConnectionPoint(REFIID riid, IConnectionPoint** ppCP) override;

private:
    CComPtr<PrintDeviceSinkCP> m_cp;
};

OBJECT_ENTRY_AUTO(CLSID_PrintDevice, PrintDeviceImpl);