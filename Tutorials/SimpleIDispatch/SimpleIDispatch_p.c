

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for SimpleIDispatch.idl:
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


#include "SimpleIDispatch_i.h"

#define TYPE_FORMAT_STRING_SIZE   1185                              
#define PROC_FORMAT_STRING_SIZE   37                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _SimpleIDispatch_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } SimpleIDispatch_MIDL_TYPE_FORMAT_STRING;

typedef struct _SimpleIDispatch_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } SimpleIDispatch_MIDL_PROC_FORMAT_STRING;

typedef struct _SimpleIDispatch_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } SimpleIDispatch_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const SimpleIDispatch_MIDL_TYPE_FORMAT_STRING SimpleIDispatch__MIDL_TypeFormatString;
extern const SimpleIDispatch_MIDL_PROC_FORMAT_STRING SimpleIDispatch__MIDL_ProcFormatString;
extern const SimpleIDispatch_MIDL_EXPR_FORMAT_STRING SimpleIDispatch__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDMessage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDMessage_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const SimpleIDispatch_MIDL_PROC_FORMAT_STRING SimpleIDispatch__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Show */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter szText */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const SimpleIDispatch_MIDL_TYPE_FORMAT_STRING SimpleIDispatch__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0x47e ),	/* Offset= 1150 (1154) */
/*  6 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/*  8 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 10 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 12 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 14 */	0x0 , 
			0x0,		/* 0 */
/* 16 */	NdrFcLong( 0x0 ),	/* 0 */
/* 20 */	NdrFcLong( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	NdrFcShort( 0x10 ),	/* 16 */
/* 28 */	NdrFcShort( 0x2f ),	/* 47 */
/* 30 */	NdrFcLong( 0x14 ),	/* 20 */
/* 34 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 36 */	NdrFcLong( 0x3 ),	/* 3 */
/* 40 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 42 */	NdrFcLong( 0x11 ),	/* 17 */
/* 46 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 48 */	NdrFcLong( 0x2 ),	/* 2 */
/* 52 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 54 */	NdrFcLong( 0x4 ),	/* 4 */
/* 58 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 60 */	NdrFcLong( 0x5 ),	/* 5 */
/* 64 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 66 */	NdrFcLong( 0xb ),	/* 11 */
/* 70 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 72 */	NdrFcLong( 0xa ),	/* 10 */
/* 76 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 78 */	NdrFcLong( 0x6 ),	/* 6 */
/* 82 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (314) */
/* 84 */	NdrFcLong( 0x7 ),	/* 7 */
/* 88 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 90 */	NdrFcLong( 0x8 ),	/* 8 */
/* 94 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (320) */
/* 96 */	NdrFcLong( 0xd ),	/* 13 */
/* 100 */	NdrFcShort( 0x100 ),	/* Offset= 256 (356) */
/* 102 */	NdrFcLong( 0x9 ),	/* 9 */
/* 106 */	NdrFcShort( 0x10c ),	/* Offset= 268 (374) */
/* 108 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 112 */	NdrFcShort( 0x118 ),	/* Offset= 280 (392) */
/* 114 */	NdrFcLong( 0x24 ),	/* 36 */
/* 118 */	NdrFcShort( 0x3c2 ),	/* Offset= 962 (1080) */
/* 120 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 124 */	NdrFcShort( 0x3bc ),	/* Offset= 956 (1080) */
/* 126 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 130 */	NdrFcShort( 0x3ba ),	/* Offset= 954 (1084) */
/* 132 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 136 */	NdrFcShort( 0x3b8 ),	/* Offset= 952 (1088) */
/* 138 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 142 */	NdrFcShort( 0x3b6 ),	/* Offset= 950 (1092) */
/* 144 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 148 */	NdrFcShort( 0x3b4 ),	/* Offset= 948 (1096) */
/* 150 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 154 */	NdrFcShort( 0x3b2 ),	/* Offset= 946 (1100) */
/* 156 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 160 */	NdrFcShort( 0x3b0 ),	/* Offset= 944 (1104) */
/* 162 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 166 */	NdrFcShort( 0x39a ),	/* Offset= 922 (1088) */
/* 168 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 172 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1092) */
/* 174 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 178 */	NdrFcShort( 0x3a2 ),	/* Offset= 930 (1108) */
/* 180 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 184 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1104) */
/* 186 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 190 */	NdrFcShort( 0x39a ),	/* Offset= 922 (1112) */
/* 192 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 196 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1116) */
/* 198 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 202 */	NdrFcShort( 0x396 ),	/* Offset= 918 (1120) */
/* 204 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 208 */	NdrFcShort( 0x394 ),	/* Offset= 916 (1124) */
/* 210 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 214 */	NdrFcShort( 0x392 ),	/* Offset= 914 (1128) */
/* 216 */	NdrFcLong( 0x10 ),	/* 16 */
/* 220 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 222 */	NdrFcLong( 0x12 ),	/* 18 */
/* 226 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 228 */	NdrFcLong( 0x13 ),	/* 19 */
/* 232 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 234 */	NdrFcLong( 0x15 ),	/* 21 */
/* 238 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 240 */	NdrFcLong( 0x16 ),	/* 22 */
/* 244 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 246 */	NdrFcLong( 0x17 ),	/* 23 */
/* 250 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 252 */	NdrFcLong( 0xe ),	/* 14 */
/* 256 */	NdrFcShort( 0x370 ),	/* Offset= 880 (1136) */
/* 258 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 262 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1146) */
/* 264 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 268 */	NdrFcShort( 0x372 ),	/* Offset= 882 (1150) */
/* 270 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 274 */	NdrFcShort( 0x32e ),	/* Offset= 814 (1088) */
/* 276 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 280 */	NdrFcShort( 0x32c ),	/* Offset= 812 (1092) */
/* 282 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 286 */	NdrFcShort( 0x32a ),	/* Offset= 810 (1096) */
/* 288 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 292 */	NdrFcShort( 0x320 ),	/* Offset= 800 (1092) */
/* 294 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 298 */	NdrFcShort( 0x31a ),	/* Offset= 794 (1092) */
/* 300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* Offset= 0 (304) */
/* 306 */	NdrFcLong( 0x1 ),	/* 1 */
/* 310 */	NdrFcShort( 0x0 ),	/* Offset= 0 (310) */
/* 312 */	NdrFcShort( 0xffff ),	/* Offset= -1 (311) */
/* 314 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 318 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 320 */	
			0x12, 0x0,	/* FC_UP */
/* 322 */	NdrFcShort( 0x18 ),	/* Offset= 24 (346) */
/* 324 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 326 */	NdrFcShort( 0x2 ),	/* 2 */
/* 328 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 330 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 332 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 334 */	0x0 , 
			0x0,		/* 0 */
/* 336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 344 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 346 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (324) */
/* 352 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 354 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 356 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 368 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 370 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 372 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 374 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 376 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 386 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 388 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 390 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 392 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 394 */	NdrFcShort( 0x2 ),	/* Offset= 2 (396) */
/* 396 */	
			0x12, 0x0,	/* FC_UP */
/* 398 */	NdrFcShort( 0x298 ),	/* Offset= 664 (1062) */
/* 400 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 402 */	NdrFcShort( 0x18 ),	/* 24 */
/* 404 */	NdrFcShort( 0xa ),	/* 10 */
/* 406 */	NdrFcLong( 0x8 ),	/* 8 */
/* 410 */	NdrFcShort( 0x64 ),	/* Offset= 100 (510) */
/* 412 */	NdrFcLong( 0xd ),	/* 13 */
/* 416 */	NdrFcShort( 0x9c ),	/* Offset= 156 (572) */
/* 418 */	NdrFcLong( 0x9 ),	/* 9 */
/* 422 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (630) */
/* 424 */	NdrFcLong( 0xc ),	/* 12 */
/* 428 */	NdrFcShort( 0x104 ),	/* Offset= 260 (688) */
/* 430 */	NdrFcLong( 0x24 ),	/* 36 */
/* 434 */	NdrFcShort( 0x174 ),	/* Offset= 372 (806) */
/* 436 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 440 */	NdrFcShort( 0x190 ),	/* Offset= 400 (840) */
/* 442 */	NdrFcLong( 0x10 ),	/* 16 */
/* 446 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (882) */
/* 448 */	NdrFcLong( 0x2 ),	/* 2 */
/* 452 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (924) */
/* 454 */	NdrFcLong( 0x3 ),	/* 3 */
/* 458 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (966) */
/* 460 */	NdrFcLong( 0x14 ),	/* 20 */
/* 464 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1008) */
/* 466 */	NdrFcShort( 0xffff ),	/* Offset= -1 (465) */
/* 468 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 470 */	NdrFcShort( 0x4 ),	/* 4 */
/* 472 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 478 */	0x0 , 
			0x0,		/* 0 */
/* 480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 490 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 492 */	NdrFcShort( 0x4 ),	/* 4 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	0x12, 0x0,	/* FC_UP */
/* 504 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (346) */
/* 506 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 508 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 510 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 514 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 516 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 518 */	NdrFcShort( 0x4 ),	/* 4 */
/* 520 */	NdrFcShort( 0x4 ),	/* 4 */
/* 522 */	0x11, 0x0,	/* FC_RP */
/* 524 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (468) */
/* 526 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 528 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 530 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 540 */	0x0 , 
			0x0,		/* 0 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 550 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 554 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 556 */	0x0 , 
			0x0,		/* 0 */
/* 558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 566 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 568 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (356) */
/* 570 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 572 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x6 ),	/* Offset= 6 (584) */
/* 580 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 582 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 584 */	
			0x11, 0x0,	/* FC_RP */
/* 586 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (530) */
/* 588 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 598 */	0x0 , 
			0x0,		/* 0 */
/* 600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 608 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 612 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 614 */	0x0 , 
			0x0,		/* 0 */
/* 616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 626 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (374) */
/* 628 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 630 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x6 ),	/* Offset= 6 (642) */
/* 638 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 640 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 642 */	
			0x11, 0x0,	/* FC_RP */
/* 644 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (588) */
/* 646 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 648 */	NdrFcShort( 0x4 ),	/* 4 */
/* 650 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 656 */	0x0 , 
			0x0,		/* 0 */
/* 658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 666 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 668 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 670 */	NdrFcShort( 0x4 ),	/* 4 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	0x12, 0x0,	/* FC_UP */
/* 682 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1154) */
/* 684 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 686 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 688 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x6 ),	/* Offset= 6 (700) */
/* 696 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 698 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 700 */	
			0x11, 0x0,	/* FC_RP */
/* 702 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (646) */
/* 704 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 706 */	NdrFcLong( 0x2f ),	/* 47 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 716 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 718 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 720 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 722 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 726 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 728 */	NdrFcShort( 0x4 ),	/* 4 */
/* 730 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 732 */	0x0 , 
			0x0,		/* 0 */
/* 734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 742 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 744 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 746 */	NdrFcShort( 0x10 ),	/* 16 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0xa ),	/* Offset= 10 (760) */
/* 752 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 754 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 756 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (704) */
/* 758 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 760 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 762 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (722) */
/* 764 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 766 */	NdrFcShort( 0x4 ),	/* 4 */
/* 768 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 774 */	0x0 , 
			0x0,		/* 0 */
/* 776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 784 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 786 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x1 ),	/* 1 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	0x12, 0x0,	/* FC_UP */
/* 800 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (744) */
/* 802 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 804 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x6 ),	/* Offset= 6 (818) */
/* 814 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 816 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 818 */	
			0x11, 0x0,	/* FC_RP */
/* 820 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (764) */
/* 822 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 826 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 828 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 830 */	NdrFcShort( 0x10 ),	/* 16 */
/* 832 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 834 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 836 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (822) */
			0x5b,		/* FC_END */
/* 840 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 842 */	NdrFcShort( 0x18 ),	/* 24 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0xa ),	/* Offset= 10 (856) */
/* 848 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 850 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 852 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (828) */
/* 854 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 856 */	
			0x11, 0x0,	/* FC_RP */
/* 858 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (530) */
/* 860 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 864 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 870 */	0x0 , 
			0x0,		/* 0 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 880 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 882 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 886 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 888 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 890 */	NdrFcShort( 0x4 ),	/* 4 */
/* 892 */	NdrFcShort( 0x4 ),	/* 4 */
/* 894 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 896 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (860) */
/* 898 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 900 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 902 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 904 */	NdrFcShort( 0x2 ),	/* 2 */
/* 906 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 912 */	0x0 , 
			0x0,		/* 0 */
/* 914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 922 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 924 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 930 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 932 */	NdrFcShort( 0x4 ),	/* 4 */
/* 934 */	NdrFcShort( 0x4 ),	/* 4 */
/* 936 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 938 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (902) */
/* 940 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 942 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 944 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 946 */	NdrFcShort( 0x4 ),	/* 4 */
/* 948 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 954 */	0x0 , 
			0x0,		/* 0 */
/* 956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 966 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 970 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 972 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 974 */	NdrFcShort( 0x4 ),	/* 4 */
/* 976 */	NdrFcShort( 0x4 ),	/* 4 */
/* 978 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 980 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (944) */
/* 982 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 984 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 986 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 990 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 996 */	0x0 , 
			0x0,		/* 0 */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1006 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1008 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1012 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1014 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1016 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1018 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1020 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1022 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (986) */
/* 1024 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1026 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1028 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1032 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1034 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1036 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1040 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1042 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1044 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1046 */	0x0 , 
			0x0,		/* 0 */
/* 1048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1058 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1028) */
/* 1060 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1066 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1036) */
/* 1068 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1068) */
/* 1070 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1072 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1074 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1076 */	NdrFcShort( 0xfd5c ),	/* Offset= -676 (400) */
/* 1078 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1080 */	
			0x12, 0x0,	/* FC_UP */
/* 1082 */	NdrFcShort( 0xfeae ),	/* Offset= -338 (744) */
/* 1084 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1086 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1088 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1090 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1092 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1094 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1098 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1100 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1102 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1106 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1108 */	
			0x12, 0x0,	/* FC_UP */
/* 1110 */	NdrFcShort( 0xfce4 ),	/* Offset= -796 (314) */
/* 1112 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1114 */	NdrFcShort( 0xfce6 ),	/* Offset= -794 (320) */
/* 1116 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1118 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (356) */
/* 1120 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1122 */	NdrFcShort( 0xfd14 ),	/* Offset= -748 (374) */
/* 1124 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1126 */	NdrFcShort( 0xfd22 ),	/* Offset= -734 (392) */
/* 1128 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1132) */
/* 1132 */	
			0x12, 0x0,	/* FC_UP */
/* 1134 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1154) */
/* 1136 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1138 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1140 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1142 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1144 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1146 */	
			0x12, 0x0,	/* FC_UP */
/* 1148 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1136) */
/* 1150 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1152 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1154 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1156 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1160) */
/* 1162 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1164 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1166 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1168 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1170 */	NdrFcShort( 0xfb74 ),	/* Offset= -1164 (6) */
/* 1172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1174 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0xfb64 ),	/* Offset= -1180 (2) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDMessage, ver. 0.0,
   GUID={0x28F54187,0x9D26,0x46DE,{0x98,0x09,0x4C,0xAD,0xCB,0x1F,0x84,0xD7}} */

#pragma code_seg(".orpc")
static const unsigned short IDMessage_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDMessage_ProxyInfo =
    {
    &Object_StubDesc,
    SimpleIDispatch__MIDL_ProcFormatString.Format,
    &IDMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDMessage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SimpleIDispatch__MIDL_ProcFormatString.Format,
    &IDMessage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IDMessageProxyVtbl = 
{
    &IDMessage_ProxyInfo,
    &IID_IDMessage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDMessage::Show */
};


static const PRPC_STUB_FUNCTION IDMessage_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IDMessageStubVtbl =
{
    &IID_IDMessage,
    &IDMessage_ServerInfo,
    8,
    &IDMessage_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
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
    SimpleIDispatch__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _SimpleIDispatch_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDMessageProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _SimpleIDispatch_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDMessageStubVtbl,
    0
};

PCInterfaceName const _SimpleIDispatch_InterfaceNamesList[] = 
{
    "IDMessage",
    0
};

const IID *  const _SimpleIDispatch_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _SimpleIDispatch_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _SimpleIDispatch, pIID, n)

int __stdcall _SimpleIDispatch_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_SimpleIDispatch_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo SimpleIDispatch_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _SimpleIDispatch_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _SimpleIDispatch_StubVtblList,
    (const PCInterfaceName * ) & _SimpleIDispatch_InterfaceNamesList,
    (const IID ** ) & _SimpleIDispatch_BaseIIDList,
    & _SimpleIDispatch_IID_Lookup, 
    1,
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

