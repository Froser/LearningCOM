

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for AsynchronousCall.idl:
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

MIDL_DEFINE_GUID(IID, IID_IMessage,0xf39553d7,0x1cc7,0x4ca3,0x92,0x95,0x5a,0xdb,0xfe,0x2b,0x91,0x46);


MIDL_DEFINE_GUID(IID, IID_AsyncIMessage,0xf39553d7,0x1cc7,0x4ca3,0x92,0x95,0x5a,0xdb,0xfe,0x2b,0x91,0x47);


MIDL_DEFINE_GUID(IID, LIBID_AsynchronousCallLib,0x62087271,0x2fc8,0x4011,0xbf,0x3c,0x77,0xf9,0xd2,0x93,0x20,0x5d);


MIDL_DEFINE_GUID(CLSID, CLSID_Message,0x3df50dd4,0xf6da,0x4553,0x84,0xff,0x74,0x25,0x4b,0x06,0x64,0x2d);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



