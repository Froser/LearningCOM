#include "Surrogate.hpp"

int main(int argc, char** argv)
{
    // 初始化套间
    CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

    // 注册
    MySurrogate surrogate;
    CoRegisterSurrogate(&surrogate);

    // 从argv中解析clsid
    if (argc >= 2)
    {
        OLECHAR wszCLSID[39];
        size_t converted;
        mbstowcs_s(&converted, wszCLSID, argv[1], 39);
        CLSID clsid;
        CLSIDFromString(wszCLSID, &clsid);

        surrogate.LoadDllServer(clsid);
    }

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
};