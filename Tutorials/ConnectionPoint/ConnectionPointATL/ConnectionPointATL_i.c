

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ConnectionPointATL.idl:
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

MIDL_DEFINE_GUID(IID, IID_IMessageBoxServer,0x7c97e97b,0xec62,0x4bda,0xa3,0x09,0x63,0x09,0x01,0x97,0x11,0x4c);


MIDL_DEFINE_GUID(IID, LIBID_ConnectionPointATLLib,0x7d057893,0x29b8,0x4772,0x8e,0x1e,0xbc,0xdf,0x39,0x5e,0xdf,0xcb);


MIDL_DEFINE_GUID(IID, DIID__IMessageBoxServerEvents,0x4f5f0124,0x42d4,0x49f2,0x8f,0xe6,0xaa,0x3c,0x20,0x3d,0xe9,0x7c);


MIDL_DEFINE_GUID(CLSID, CLSID_MessageBoxServer,0x7a692afe,0x869e,0x4e9c,0x90,0xb4,0x06,0x7d,0xc2,0xe6,0xde,0xe9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



