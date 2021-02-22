

/* this ALWAYS GENERATED file contains the proxy stub code */


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


#include "AsynchronousCall_i.h"

#define TYPE_FORMAT_STRING_SIZE   7                                 
#define PROC_FORMAT_STRING_SIZE   103                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _AsynchronousCall_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } AsynchronousCall_MIDL_TYPE_FORMAT_STRING;

typedef struct _AsynchronousCall_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } AsynchronousCall_MIDL_PROC_FORMAT_STRING;

typedef struct _AsynchronousCall_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } AsynchronousCall_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const AsynchronousCall_MIDL_TYPE_FORMAT_STRING AsynchronousCall__MIDL_TypeFormatString;
extern const AsynchronousCall_MIDL_PROC_FORMAT_STRING AsynchronousCall__MIDL_ProcFormatString;
extern const AsynchronousCall_MIDL_EXPR_FORMAT_STRING AsynchronousCall__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMessage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMessage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO AsyncIMessage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO AsyncIMessage_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const AsynchronousCall_MIDL_PROC_FORMAT_STRING AsynchronousCall__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetNumber */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__IMessage0000 */

/* 24 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Begin_GetNumber */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x3 ),	/* 3 */
/* 44 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x64,		/* Oi2 Flags:  has return, has async uuid, has ext, */
			0x1,		/* 1 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Finish_GetNumber */

/* 66 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 68 */	NdrFcLong( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x4 ),	/* 4 */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x24 ),	/* 36 */
/* 80 */	0x64,		/* Oi2 Flags:  has return, has async uuid, has ext, */
			0x2,		/* 2 */
/* 82 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__IMessage0000 */

/* 90 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 92 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 98 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const AsynchronousCall_MIDL_TYPE_FORMAT_STRING AsynchronousCall__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMessage, ver. 0.0,
   GUID={0xf39553d7,0x1cc7,0x4ca3,{0x92,0x95,0x5a,0xdb,0xfe,0x2b,0x91,0x46}} */

#pragma code_seg(".orpc")
static const unsigned short IMessage_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IMessage_ProxyInfo =
    {
    &Object_StubDesc,
    AsynchronousCall__MIDL_ProcFormatString.Format,
    &IMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMessage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AsynchronousCall__MIDL_ProcFormatString.Format,
    &IMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IMessageProxyVtbl = 
{
    &IMessage_ProxyInfo,
    &IID_IMessage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMessage::GetNumber */
};

const CInterfaceStubVtbl _IMessageStubVtbl =
{
    &IID_IMessage,
    &IMessage_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: AsyncIMessage, ver. 0.0,
   GUID={0xf39553d7,0x1cc7,0x4ca3,{0x92,0x95,0x5a,0xdb,0xfe,0x2b,0x91,0x47}} */

#pragma code_seg(".orpc")
static const unsigned short AsyncIMessage_FormatStringOffsetTable[] =
    {
    36,
    66
    };

static const MIDL_STUBLESS_PROXY_INFO AsyncIMessage_ProxyInfo =
    {
    &Object_StubDesc,
    AsynchronousCall__MIDL_ProcFormatString.Format,
    &AsyncIMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO AsyncIMessage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AsynchronousCall__MIDL_ProcFormatString.Format,
    &AsyncIMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _AsyncIMessageProxyVtbl = 
{
    &AsyncIMessage_ProxyInfo,
    &IID_AsyncIMessage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* AsyncIMessage::Begin_GetNumber */ ,
    (void *) (INT_PTR) -1 /* AsyncIMessage::Finish_GetNumber */
};

CInterfaceStubVtbl _AsyncIMessageStubVtbl =
{
    &IID_AsyncIMessage,
    &AsyncIMessage_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdAsyncStubBuffer_METHODS
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
    AsynchronousCall__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _AsynchronousCall_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IMessageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_AsyncIMessageProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _AsynchronousCall_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IMessageStubVtbl,
    ( CInterfaceStubVtbl *) &_AsyncIMessageStubVtbl,
    0
};

PCInterfaceName const _AsynchronousCall_InterfaceNamesList[] = 
{
    "IMessage",
    "AsyncIMessage",
    0
};


#define _AsynchronousCall_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _AsynchronousCall, pIID, n)

int __stdcall _AsynchronousCall_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _AsynchronousCall, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _AsynchronousCall, 2, *pIndex )
    
}

static const IID * const _AsyncInterfaceTable[] = 
{
    (IID*) &IID_AsyncIMessage,
    (IID*)(LONG_PTR) -1,
    (IID*) 0
};

const ExtendedProxyFileInfo AsynchronousCall_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _AsynchronousCall_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _AsynchronousCall_StubVtblList,
    (const PCInterfaceName * ) & _AsynchronousCall_InterfaceNamesList,
    0, /* no delegation */
    & _AsynchronousCall_IID_Lookup, 
    2,
    6,
    (const IID**) &_AsyncInterfaceTable[0], /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

