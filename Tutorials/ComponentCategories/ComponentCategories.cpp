// ComponentCategories.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <comcat.h>
#include <combaseapi.h>
#include <atlbase.h>
#include <iostream>

int main()
{
    HRESULT hr = S_OK;
    CoInitialize(NULL);
    {
        CComPtr<ICatInformation> pCatInfo;
        hr = CoCreateInstance(CLSID_StdComponentCategoriesMgr, NULL, CLSCTX_INPROC_SERVER, IID_ICatInformation, (void**)&pCatInfo);

        CComPtr<IEnumCATEGORYINFO> pEnum;
        hr = pCatInfo->EnumCategories(LOCALE_NEUTRAL, &pEnum);

        do
        {
            ULONG celtFetched;
            CATEGORYINFO ci;
            pEnum->Next(1, &ci, &celtFetched);
            if (!celtFetched)
                break;

            OLECHAR ppsz[39];
            StringFromGUID2(ci.catid, ppsz, 39);
            std::wcout << ppsz << L":" << ci.szDescription << std::endl;
        } while (true);
    }
    CoUninitialize();
    return 0;
}