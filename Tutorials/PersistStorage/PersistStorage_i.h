

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for PersistStorage.idl:
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


#ifndef __PersistStorage_i_h__
#define __PersistStorage_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMessage_FWD_DEFINED__
#define __IMessage_FWD_DEFINED__
typedef interface IMessage IMessage;

#endif 	/* __IMessage_FWD_DEFINED__ */


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

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __PersistStorageLib_LIBRARY_DEFINED__
#define __PersistStorageLib_LIBRARY_DEFINED__

/* library PersistStorageLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_PersistStorageLib;

#ifndef __IMessage_INTERFACE_DEFINED__
#define __IMessage_INTERFACE_DEFINED__

/* interface IMessage */
/* [oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8B82ACF5-2A77-4385-B254-4BC5C6F12FB5")
    IMessage : public IUnknown
    {
    public:
        virtual int STDMETHODCALLTYPE Get( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Set( 
            int __MIDL__IMessage0000) = 0;
        
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
        
        int ( STDMETHODCALLTYPE *Get )( 
            IMessage * This);
        
        HRESULT ( STDMETHODCALLTYPE *Set )( 
            IMessage * This,
            int __MIDL__IMessage0000);
        
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


#define IMessage_Get(This)	\
    ( (This)->lpVtbl -> Get(This) ) 

#define IMessage_Set(This,__MIDL__IMessage0000)	\
    ( (This)->lpVtbl -> Set(This,__MIDL__IMessage0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessage_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Message;

#ifdef __cplusplus

class DECLSPEC_UUID("B8922344-0FD5-4630-A4D7-DD9C9321BBB1")
Message;
#endif
#endif /* __PersistStorageLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


