#pragma once

#include <combaseapi.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>

using namespace ATL;

class MessageFactory :
	public IClassFactory,
	public IOleItemContainer,
	public CComObjectRootEx<CComGlobalsThreadModel>
{
public:
	BEGIN_COM_MAP(MessageFactory)
		COM_INTERFACE_ENTRY(IClassFactory)
		COM_INTERFACE_ENTRY(IParseDisplayName)
		COM_INTERFACE_ENTRY(IOleContainer)
		COM_INTERFACE_ENTRY(IOleItemContainer)
	END_COM_MAP()

	virtual ~MessageFactory()
	{
	}

	// IClassFactory
	STDMETHOD(CreateInstance)(
		_Inout_opt_ LPUNKNOWN pUnkOuter,
		_In_ REFIID riid,
		_COM_Outptr_ void** ppvObj)
	{
		ATLASSUME(m_pfnCreateInstance != NULL);
		HRESULT hRes = E_POINTER;
		if (ppvObj != NULL)
		{
			*ppvObj = NULL;
			// can't ask for anything other than IUnknown when aggregating

			if ((pUnkOuter != NULL) && !InlineIsEqualUnknown(riid))
			{
				ATLTRACE(atlTraceCOM, 0, _T("CComClassFactory: asked for non IUnknown interface while creating an aggregated object"));
				hRes = CLASS_E_NOAGGREGATION;
			}
			else
				hRes = m_pfnCreateInstance(pUnkOuter, riid, ppvObj);
		}
		return hRes;
	}

	STDMETHOD(LockServer)(_In_ BOOL fLock)
	{
		if (fLock)
			_pAtlModule->Lock();
		else
			_pAtlModule->Unlock();
		return S_OK;
	}
	// helper
	void SetVoid(_In_opt_ void* pv)
	{
		m_pfnCreateInstance = (_ATL_CREATORFUNC*)pv;
	}
	_ATL_CREATORFUNC* m_pfnCreateInstance;

	STDMETHODIMP ParseDisplayName(__RPC__in_opt IBindCtx* pbc, __RPC__in LPOLESTR pszDisplayName, __RPC__out ULONG* pchEaten, __RPC__deref_out_opt IMoniker** ppmkOut)
	{
		HRESULT hr = CreateItemMoniker(OLESTR("!"), pszDisplayName + 1, ppmkOut);
		if (SUCCEEDED(hr))
			*pchEaten = wcslen(pszDisplayName);
		else
			*pchEaten = 0;

		return hr;
	}

	// Í¨¹ý IOleItemContainer ¼Ì³Ð
	virtual HRESULT __stdcall EnumObjects(DWORD grfFlags, IEnumUnknown** ppenum) override
	{
		return E_NOTIMPL;
	}

	virtual HRESULT __stdcall LockContainer(BOOL fLock) override
	{
		return E_NOTIMPL;
	}

	virtual HRESULT __stdcall GetObjectStorage(LPOLESTR pszItem, IBindCtx* pbc, REFIID riid, void** ppvStorage) override
	{
		return E_NOTIMPL;
	}

	virtual HRESULT __stdcall IsRunning(LPOLESTR pszItem) override
	{
		return E_NOTIMPL;
	}

	virtual HRESULT __stdcall GetObject(LPOLESTR pszItem, DWORD dwSpeedNeeded, IBindCtx* pbc, const IID& riid, void** ppvObject);
};