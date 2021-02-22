

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __ConnectionPointATL_i_h__
#define __ConnectionPointATL_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMessageBoxServer_FWD_DEFINED__
#define __IMessageBoxServer_FWD_DEFINED__
typedef interface IMessageBoxServer IMessageBoxServer;

#endif 	/* __IMessageBoxServer_FWD_DEFINED__ */


#ifndef ___IMessageBoxServerEvents_FWD_DEFINED__
#define ___IMessageBoxServerEvents_FWD_DEFINED__
typedef interface _IMessageBoxServerEvents _IMessageBoxServerEvents;

#endif 	/* ___IMessageBoxServerEvents_FWD_DEFINED__ */


#ifndef __MessageBoxServer_FWD_DEFINED__
#define __MessageBoxServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessageBoxServer MessageBoxServer;
#else
typedef struct MessageBoxServer MessageBoxServer;
#endif /* __cplusplus */

#endif 	/* __MessageBoxServer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMessageBoxServer_INTERFACE_DEFINED__
#define __IMessageBoxServer_INTERFACE_DEFINED__

/* interface IMessageBoxServer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMessageBoxServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7c97e97b-ec62-4bda-a309-63090197114c")
    IMessageBoxServer : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ShowMessageBox( 
            /* [in] */ BSTR __MIDL__IMessageBoxServer0000) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageBoxServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageBoxServer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageBoxServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageBoxServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMessageBoxServer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMessageBoxServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMessageBoxServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMessageBoxServer * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ShowMessageBox )( 
            IMessageBoxServer * This,
            /* [in] */ BSTR __MIDL__IMessageBoxServer0000);
        
        END_INTERFACE
    } IMessageBoxServerVtbl;

    interface IMessageBoxServer
    {
        CONST_VTBL struct IMessageBoxServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageBoxServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageBoxServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageBoxServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageBoxServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMessageBoxServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMessageBoxServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMessageBoxServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMessageBoxServer_ShowMessageBox(This,__MIDL__IMessageBoxServer0000)	\
    ( (This)->lpVtbl -> ShowMessageBox(This,__MIDL__IMessageBoxServer0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageBoxServer_INTERFACE_DEFINED__ */



#ifndef __ConnectionPointATLLib_LIBRARY_DEFINED__
#define __ConnectionPointATLLib_LIBRARY_DEFINED__

/* library ConnectionPointATLLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ConnectionPointATLLib;

#ifndef ___IMessageBoxServerEvents_DISPINTERFACE_DEFINED__
#define ___IMessageBoxServerEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IMessageBoxServerEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IMessageBoxServerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("4f5f0124-42d4-49f2-8fe6-aa3c203de97c")
    _IMessageBoxServerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IMessageBoxServerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IMessageBoxServerEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IMessageBoxServerEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IMessageBoxServerEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IMessageBoxServerEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IMessageBoxServerEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IMessageBoxServerEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IMessageBoxServerEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IMessageBoxServerEventsVtbl;

    interface _IMessageBoxServerEvents
    {
        CONST_VTBL struct _IMessageBoxServerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IMessageBoxServerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IMessageBoxServerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IMessageBoxServerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IMessageBoxServerEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IMessageBoxServerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IMessageBoxServerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IMessageBoxServerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IMessageBoxServerEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MessageBoxServer;

#ifdef __cplusplus

class DECLSPEC_UUID("7a692afe-869e-4e9c-90b4-067dc2e6dee9")
MessageBoxServer;
#endif
#endif /* __ConnectionPointATLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


