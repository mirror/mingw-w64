/*** Autogenerated by WIDL 8.12 from include/proofofpossessioncookieinfo.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __proofofpossessioncookieinfo_h__
#define __proofofpossessioncookieinfo_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IProofOfPossessionCookieInfoManager_FWD_DEFINED__
#define __IProofOfPossessionCookieInfoManager_FWD_DEFINED__
typedef interface IProofOfPossessionCookieInfoManager IProofOfPossessionCookieInfoManager;
#ifdef __cplusplus
interface IProofOfPossessionCookieInfoManager;
#endif /* __cplusplus */
#endif

#ifndef __ProofOfPossessionCookieInfoManager_FWD_DEFINED__
#define __ProofOfPossessionCookieInfoManager_FWD_DEFINED__
#ifdef __cplusplus
typedef class ProofOfPossessionCookieInfoManager ProofOfPossessionCookieInfoManager;
#else
typedef struct ProofOfPossessionCookieInfoManager ProofOfPossessionCookieInfoManager;
#endif /* defined __cplusplus */
#endif /* defined __ProofOfPossessionCookieInfoManager_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ProofOfPossessionCookieInfo {
    LPWSTR name;
    LPWSTR data;
    DWORD flags;
    LPWSTR p3pHeader;
} ProofOfPossessionCookieInfo;
static inline void FreeProofOfPossessionCookieInfoArray(ProofOfPossessionCookieInfo *cookie_info, DWORD count)
{
    unsigned int i;
    for (i = 0; i < count; i++)
    {
        CoTaskMemFree(cookie_info[i].name);
        CoTaskMemFree(cookie_info[i].data);
        CoTaskMemFree(cookie_info[i].p3pHeader);
    }
    CoTaskMemFree(cookie_info);
}
/*****************************************************************************
 * IProofOfPossessionCookieInfoManager interface
 */
#ifndef __IProofOfPossessionCookieInfoManager_INTERFACE_DEFINED__
#define __IProofOfPossessionCookieInfoManager_INTERFACE_DEFINED__

DEFINE_GUID(IID_IProofOfPossessionCookieInfoManager, 0xcdaece56, 0x4edf, 0x43df, 0xb1,0x13, 0x88,0xe4,0x55,0x6f,0xa1,0xbb);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("cdaece56-4edf-43df-b113-88e4556fa1bb")
IProofOfPossessionCookieInfoManager : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCookieInfoForUri(
        LPCWSTR uri,
        DWORD *cookieInfoCount,
        ProofOfPossessionCookieInfo **cookieInfo) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IProofOfPossessionCookieInfoManager, 0xcdaece56, 0x4edf, 0x43df, 0xb1,0x13, 0x88,0xe4,0x55,0x6f,0xa1,0xbb)
#endif
#else
typedef struct IProofOfPossessionCookieInfoManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IProofOfPossessionCookieInfoManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IProofOfPossessionCookieInfoManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IProofOfPossessionCookieInfoManager *This);

    /*** IProofOfPossessionCookieInfoManager methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCookieInfoForUri)(
        IProofOfPossessionCookieInfoManager *This,
        LPCWSTR uri,
        DWORD *cookieInfoCount,
        ProofOfPossessionCookieInfo **cookieInfo);

    END_INTERFACE
} IProofOfPossessionCookieInfoManagerVtbl;

interface IProofOfPossessionCookieInfoManager {
    CONST_VTBL IProofOfPossessionCookieInfoManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IProofOfPossessionCookieInfoManager_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IProofOfPossessionCookieInfoManager_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IProofOfPossessionCookieInfoManager_Release(This) (This)->lpVtbl->Release(This)
/*** IProofOfPossessionCookieInfoManager methods ***/
#define IProofOfPossessionCookieInfoManager_GetCookieInfoForUri(This,uri,cookieInfoCount,cookieInfo) (This)->lpVtbl->GetCookieInfoForUri(This,uri,cookieInfoCount,cookieInfo)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IProofOfPossessionCookieInfoManager_QueryInterface(IProofOfPossessionCookieInfoManager* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IProofOfPossessionCookieInfoManager_AddRef(IProofOfPossessionCookieInfoManager* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IProofOfPossessionCookieInfoManager_Release(IProofOfPossessionCookieInfoManager* This) {
    return This->lpVtbl->Release(This);
}
/*** IProofOfPossessionCookieInfoManager methods ***/
static __WIDL_INLINE HRESULT IProofOfPossessionCookieInfoManager_GetCookieInfoForUri(IProofOfPossessionCookieInfoManager* This,LPCWSTR uri,DWORD *cookieInfoCount,ProofOfPossessionCookieInfo **cookieInfo) {
    return This->lpVtbl->GetCookieInfoForUri(This,uri,cookieInfoCount,cookieInfo);
}
#endif
#endif

#endif


#endif  /* __IProofOfPossessionCookieInfoManager_INTERFACE_DEFINED__ */

#ifndef __ProofOfPossessionCookieInfoManagerLib_LIBRARY_DEFINED__
#define __ProofOfPossessionCookieInfoManagerLib_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_ProofOfPossessionCookieInfoManagerLib, 0x7681a019, 0x8f51, 0x4594, 0x95,0x07, 0xf2,0x70,0x40,0xf7,0x1f,0x01);

/*****************************************************************************
 * ProofOfPossessionCookieInfoManager coclass
 */

DEFINE_GUID(CLSID_ProofOfPossessionCookieInfoManager, 0xa9927f85, 0xa304, 0x4390, 0x8b,0x23, 0xa7,0x5f,0x1c,0x66,0x86,0x00);

#ifdef __cplusplus
class DECLSPEC_UUID("a9927f85-a304-4390-8b23-a75f1c668600") ProofOfPossessionCookieInfoManager;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ProofOfPossessionCookieInfoManager, 0xa9927f85, 0xa304, 0x4390, 0x8b,0x23, 0xa7,0x5f,0x1c,0x66,0x86,0x00)
#endif
#endif

#endif /* __ProofOfPossessionCookieInfoManagerLib_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __proofofpossessioncookieinfo_h__ */
