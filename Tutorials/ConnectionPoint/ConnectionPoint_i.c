

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ConnectionPoint.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IPrintDevice,0x8B82ACF5,0x2A77,0x4385,0xB2,0x54,0x4B,0xC5,0xC6,0xF1,0x2F,0xB5);


MIDL_DEFINE_GUID(IID, IID_IPrintDeviceSink,0xEEE2C0BB,0xB761,0x48FC,0xB2,0xE2,0x76,0x8A,0xF8,0x1C,0xB6,0x68);


MIDL_DEFINE_GUID(IID, LIBID_ConnectionPointLib,0xa723b01d,0xc627,0x487b,0xbe,0xc2,0x35,0xfb,0x40,0x2d,0xee,0x12);


MIDL_DEFINE_GUID(CLSID, CLSID_PrintDevice,0x36D4ADBC,0xB43F,0x491D,0xA6,0x09,0x19,0xA5,0x42,0x84,0xAD,0x80);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



