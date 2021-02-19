

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for SimpleServer.idl:
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

#ifndef __SimpleServer_i_h__
#define __SimpleServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMessageBox_FWD_DEFINED__
#define __IMessageBox_FWD_DEFINED__
typedef interface IMessageBox IMessageBox;

#endif 	/* __IMessageBox_FWD_DEFINED__ */


#ifndef __MessageBoxClass_FWD_DEFINED__
#define __MessageBoxClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessageBoxClass MessageBoxClass;
#else
typedef struct MessageBoxClass MessageBoxClass;
#endif /* __cplusplus */

#endif 	/* __MessageBoxClass_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMessageBox_INTERFACE_DEFINED__
#define __IMessageBox_INTERFACE_DEFINED__

/* interface IMessageBox */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMessageBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59371D05-3025-4E52-AF88-977B219F0E97")
    IMessageBox : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ VARIANT szText) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageBox * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            IMessageBox * This,
            /* [in] */ VARIANT szText);
        
        END_INTERFACE
    } IMessageBoxVtbl;

    interface IMessageBox
    {
        CONST_VTBL struct IMessageBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageBox_Show(This,szText)	\
    ( (This)->lpVtbl -> Show(This,szText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageBox_INTERFACE_DEFINED__ */



#ifndef __SimpleServerLib_LIBRARY_DEFINED__
#define __SimpleServerLib_LIBRARY_DEFINED__

/* library SimpleServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SimpleServerLib;

EXTERN_C const CLSID CLSID_MessageBoxClass;

#ifdef __cplusplus

class DECLSPEC_UUID("3A68BEBC-3A60-46A5-8CA1-508C1406B73D")
MessageBoxClass;
#endif
#endif /* __SimpleServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


