

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __ConnectionPoint_i_h__
#define __ConnectionPoint_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPrintDevice_FWD_DEFINED__
#define __IPrintDevice_FWD_DEFINED__
typedef interface IPrintDevice IPrintDevice;

#endif 	/* __IPrintDevice_FWD_DEFINED__ */


#ifndef __IPrintDeviceSink_FWD_DEFINED__
#define __IPrintDeviceSink_FWD_DEFINED__
typedef interface IPrintDeviceSink IPrintDeviceSink;

#endif 	/* __IPrintDeviceSink_FWD_DEFINED__ */


#ifndef __PrintDevice_FWD_DEFINED__
#define __PrintDevice_FWD_DEFINED__

#ifdef __cplusplus
typedef class PrintDevice PrintDevice;
#else
typedef struct PrintDevice PrintDevice;
#endif /* __cplusplus */

#endif 	/* __PrintDevice_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IPrintDevice_INTERFACE_DEFINED__
#define __IPrintDevice_INTERFACE_DEFINED__

/* interface IPrintDevice */
/* [oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IPrintDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8B82ACF5-2A77-4385-B254-4BC5C6F12FB5")
    IPrintDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Print( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPrintDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPrintDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPrintDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPrintDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *Print )( 
            IPrintDevice * This);
        
        END_INTERFACE
    } IPrintDeviceVtbl;

    interface IPrintDevice
    {
        CONST_VTBL struct IPrintDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrintDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPrintDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPrintDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPrintDevice_Print(This)	\
    ( (This)->lpVtbl -> Print(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPrintDevice_INTERFACE_DEFINED__ */


#ifndef __IPrintDeviceSink_INTERFACE_DEFINED__
#define __IPrintDeviceSink_INTERFACE_DEFINED__

/* interface IPrintDeviceSink */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPrintDeviceSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EEE2C0BB-B761-48FC-B2E2-768AF81CB668")
    IPrintDeviceSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnPrint( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPrintDeviceSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPrintDeviceSink * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPrintDeviceSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPrintDeviceSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnPrint )( 
            IPrintDeviceSink * This);
        
        END_INTERFACE
    } IPrintDeviceSinkVtbl;

    interface IPrintDeviceSink
    {
        CONST_VTBL struct IPrintDeviceSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrintDeviceSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPrintDeviceSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPrintDeviceSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPrintDeviceSink_OnPrint(This)	\
    ( (This)->lpVtbl -> OnPrint(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPrintDeviceSink_INTERFACE_DEFINED__ */



#ifndef __ConnectionPointLib_LIBRARY_DEFINED__
#define __ConnectionPointLib_LIBRARY_DEFINED__

/* library ConnectionPointLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ConnectionPointLib;

EXTERN_C const CLSID CLSID_PrintDevice;

#ifdef __cplusplus

class DECLSPEC_UUID("36D4ADBC-B43F-491D-A609-19A54284AD80")
PrintDevice;
#endif
#endif /* __ConnectionPointLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


