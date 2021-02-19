#include "pch.h"
#include "MessageBox.h"

STDMETHODIMP MessageImpl::Show(VARIANT szText)
{
    MessageBoxW(NULL, szText.bstrVal, L"From Remote", MB_OK);
    return S_OK;
}
