

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AsynchronousCall_i_h__
#define __AsynchronousCall_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMessage_FWD_DEFINED__
#define __IMessage_FWD_DEFINED__
typedef interface IMessage IMessage;

#endif 	/* __IMessage_FWD_DEFINED__ */


#ifndef __AsyncIMessage_FWD_DEFINED__
#define __AsyncIMessage_FWD_DEFINED__
typedef interface AsyncIMessage AsyncIMessage;

#endif 	/* __AsyncIMessage_FWD_DEFINED__ */


#ifndef __Message_FWD_DEFINED__
#define __Message_FWD_DEFINED__

#ifdef __cplusplus
typedef class Message Message;
#else
typedef struct Message Message;
#endif /* __cplusplus */

#endif 	/* __Message_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMessage_INTERFACE_DEFINED__
#define __IMessage_INTERFACE_DEFINED__

/* interface IMessage */
/* [async_uuid][uuid][object] */ 


EXTERN_C const IID IID_IMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f39553d7-1cc7-4ca3-9295-5adbfe2b9146")
    IMessage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNumber( 
            /* [out] */ int *__MIDL__IMessage0000) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumber )( 
            IMessage * This,
            /* [out] */ int *__MIDL__IMessage0000);
        
        END_INTERFACE
    } IMessageVtbl;

    interface IMessage
    {
        CONST_VTBL struct IMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessage_GetNumber(This,__MIDL__IMessage0000)	\
    ( (This)->lpVtbl -> GetNumber(This,__MIDL__IMessage0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessage_INTERFACE_DEFINED__ */


#ifndef __AsyncIMessage_INTERFACE_DEFINED__
#define __AsyncIMessage_INTERFACE_DEFINED__

/* interface AsyncIMessage */
/* [uuid][object] */ 


EXTERN_C const IID IID_AsyncIMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f39553d7-1cc7-4ca3-9295-5adbfe2b9147")
    AsyncIMessage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Begin_GetNumber( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Finish_GetNumber( 
            /* [out] */ int *__MIDL__IMessage0000) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct AsyncIMessageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            AsyncIMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            AsyncIMessage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            AsyncIMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *Begin_GetNumber )( 
            AsyncIMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *Finish_GetNumber )( 
            AsyncIMessage * This,
            /* [out] */ int *__MIDL__IMessage0000);
        
        END_INTERFACE
    } AsyncIMessageVtbl;

    interface AsyncIMessage
    {
        CONST_VTBL struct AsyncIMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define AsyncIMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define AsyncIMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define AsyncIMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define AsyncIMessage_Begin_GetNumber(This)	\
    ( (This)->lpVtbl -> Begin_GetNumber(This) ) 

#define AsyncIMessage_Finish_GetNumber(This,__MIDL__IMessage0000)	\
    ( (This)->lpVtbl -> Finish_GetNumber(This,__MIDL__IMessage0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __AsyncIMessage_INTERFACE_DEFINED__ */



#ifndef __AsynchronousCallLib_LIBRARY_DEFINED__
#define __AsynchronousCallLib_LIBRARY_DEFINED__

/* library AsynchronousCallLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_AsynchronousCallLib;

EXTERN_C const CLSID CLSID_Message;

#ifdef __cplusplus

class DECLSPEC_UUID("3df50dd4-f6da-4553-84ff-74254b06642d")
Message;
#endif
#endif /* __AsynchronousCallLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


