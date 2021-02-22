#pragma once

template<class T>
class CProxy_IMessageBoxServerEvents :
	public ATL::IConnectionPointImpl<T, &__uuidof(_IMessageBoxServerEvents)>
{
public:
	HRESULT Fire_OnMessageBoxShowed()
	{
		HRESULT hr = E_FAIL;
		T* pT = static_cast<T*>(this);
		int nConnectionIndex;
		int nConnections = m_vec.GetSize();

		for (nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++)
		{
			pT->Lock();
			CComPtr<IUnknown> sp = m_vec.GetAt(nConnectionIndex);
			pT->Unlock();
			IDispatch* pDispatch = reinterpret_cast<IDispatch*>(sp.p);
			if (pDispatch != NULL)
			{
				DISPPARAMS disp = { NULL, NULL, 0, 0 };
				hr = pDispatch->Invoke(0x1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &disp, NULL, NULL, NULL);
			}
		}
		return hr;
	}
};
