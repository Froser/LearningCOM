

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ConnectionPoint_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   31                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ConnectionPoint_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ConnectionPoint_MIDL_TYPE_FORMAT_STRING;

typedef struct _ConnectionPoint_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ConnectionPoint_MIDL_PROC_FORMAT_STRING;

typedef struct _ConnectionPoint_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ConnectionPoint_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ConnectionPoint_MIDL_TYPE_FORMAT_STRING ConnectionPoint__MIDL_TypeFormatString;
extern const ConnectionPoint_MIDL_PROC_FORMAT_STRING ConnectionPoint__MIDL_ProcFormatString;
extern const ConnectionPoint_MIDL_EXPR_FORMAT_STRING ConnectionPoint__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPrintDevice_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPrintDevice_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPrintDeviceSink_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPrintDeviceSink_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ConnectionPoint_MIDL_PROC_FORMAT_STRING ConnectionPoint__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure OnPrint */


	/* Procedure Print */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ConnectionPoint_MIDL_TYPE_FORMAT_STRING ConnectionPoint__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IPrintDevice, ver. 0.0,
   GUID={0x8B82ACF5,0x2A77,0x4385,{0xB2,0x54,0x4B,0xC5,0xC6,0xF1,0x2F,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short IPrintDevice_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPrintDevice_ProxyInfo =
    {
    &Object_StubDesc,
    ConnectionPoint__MIDL_ProcFormatString.Format,
    &IPrintDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPrintDevice_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ConnectionPoint__MIDL_ProcFormatString.Format,
    &IPrintDevice_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IPrintDeviceProxyVtbl = 
{
    &IPrintDevice_ProxyInfo,
    &IID_IPrintDevice,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IPrintDevice::Print */
};

const CInterfaceStubVtbl _IPrintDeviceStubVtbl =
{
    &IID_IPrintDevice,
    &IPrintDevice_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPrintDeviceSink, ver. 0.0,
   GUID={0xEEE2C0BB,0xB761,0x48FC,{0xB2,0xE2,0x76,0x8A,0xF8,0x1C,0xB6,0x68}} */

#pragma code_seg(".orpc")
static const unsigned short IPrintDeviceSink_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPrintDeviceSink_ProxyInfo =
    {
    &Object_StubDesc,
    ConnectionPoint__MIDL_ProcFormatString.Format,
    &IPrintDeviceSink_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPrintDeviceSink_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ConnectionPoint__MIDL_ProcFormatString.Format,
    &IPrintDeviceSink_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IPrintDeviceSinkProxyVtbl = 
{
    &IPrintDeviceSink_ProxyInfo,
    &IID_IPrintDeviceSink,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IPrintDeviceSink::OnPrint */
};

const CInterfaceStubVtbl _IPrintDeviceSinkStubVtbl =
{
    &IID_IPrintDeviceSink,
    &IPrintDeviceSink_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ConnectionPoint__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ConnectionPoint_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IPrintDeviceSinkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPrintDeviceProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ConnectionPoint_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IPrintDeviceSinkStubVtbl,
    ( CInterfaceStubVtbl *) &_IPrintDeviceStubVtbl,
    0
};

PCInterfaceName const _ConnectionPoint_InterfaceNamesList[] = 
{
    "IPrintDeviceSink",
    "IPrintDevice",
    0
};


#define _ConnectionPoint_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ConnectionPoint, pIID, n)

int __stdcall _ConnectionPoint_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ConnectionPoint, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ConnectionPoint, 2, *pIndex )
    
}

const ExtendedProxyFileInfo ConnectionPoint_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ConnectionPoint_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ConnectionPoint_StubVtblList,
    (const PCInterfaceName * ) & _ConnectionPoint_InterfaceNamesList,
    0, /* no delegation */
    & _ConnectionPoint_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

