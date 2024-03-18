/*** Autogenerated by WIDL 9.4 from include/napmanagement.idl - Do not edit ***/

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

#ifndef __napmanagement_h__
#define __napmanagement_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __INapClientManagement_FWD_DEFINED__
#define __INapClientManagement_FWD_DEFINED__
typedef interface INapClientManagement INapClientManagement;
#ifdef __cplusplus
interface INapClientManagement;
#endif /* __cplusplus */
#endif

#ifndef __INapClientManagement2_FWD_DEFINED__
#define __INapClientManagement2_FWD_DEFINED__
typedef interface INapClientManagement2 INapClientManagement2;
#ifdef __cplusplus
interface INapClientManagement2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <naptypes.h>
#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_NapClientManagement;
/*****************************************************************************
 * INapClientManagement interface
 */
#ifndef __INapClientManagement_INTERFACE_DEFINED__
#define __INapClientManagement_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapClientManagement, 0x432a1da5, 0x3888, 0x4b9a, 0xa7,0x34, 0xcf,0xf1,0xe4,0x48,0xc5,0xb9);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("432a1da5-3888-4b9a-a734-cff1e448c5b9")
INapClientManagement : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetNapClientInfo(
        WINBOOL *isNapEnabled,
        CountedString **clientName,
        CountedString **clientDescription,
        CountedString **protocolVersion) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSystemIsolationInfo(
        IsolationInfo **isolationInfo,
        WINBOOL *unknownConnections) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterSystemHealthAgent(
        const NapComponentRegistrationInfo *agent) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnregisterSystemHealthAgent(
        SystemHealthEntityId id) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterEnforcementClient(
        const NapComponentRegistrationInfo *enforcer) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnregisterEnforcementClient(
        EnforcementEntityId id) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRegisteredSystemHealthAgents(
        SystemHealthEntityCount *count,
        NapComponentRegistrationInfo **agents) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRegisteredEnforcementClients(
        EnforcementEntityCount *count,
        NapComponentRegistrationInfo **enforcers) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapClientManagement, 0x432a1da5, 0x3888, 0x4b9a, 0xa7,0x34, 0xcf,0xf1,0xe4,0x48,0xc5,0xb9)
#endif
#else
typedef struct INapClientManagementVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapClientManagement *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapClientManagement *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapClientManagement *This);

    /*** INapClientManagement methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNapClientInfo)(
        INapClientManagement *This,
        WINBOOL *isNapEnabled,
        CountedString **clientName,
        CountedString **clientDescription,
        CountedString **protocolVersion);

    HRESULT (STDMETHODCALLTYPE *GetSystemIsolationInfo)(
        INapClientManagement *This,
        IsolationInfo **isolationInfo,
        WINBOOL *unknownConnections);

    HRESULT (STDMETHODCALLTYPE *RegisterSystemHealthAgent)(
        INapClientManagement *This,
        const NapComponentRegistrationInfo *agent);

    HRESULT (STDMETHODCALLTYPE *UnregisterSystemHealthAgent)(
        INapClientManagement *This,
        SystemHealthEntityId id);

    HRESULT (STDMETHODCALLTYPE *RegisterEnforcementClient)(
        INapClientManagement *This,
        const NapComponentRegistrationInfo *enforcer);

    HRESULT (STDMETHODCALLTYPE *UnregisterEnforcementClient)(
        INapClientManagement *This,
        EnforcementEntityId id);

    HRESULT (STDMETHODCALLTYPE *GetRegisteredSystemHealthAgents)(
        INapClientManagement *This,
        SystemHealthEntityCount *count,
        NapComponentRegistrationInfo **agents);

    HRESULT (STDMETHODCALLTYPE *GetRegisteredEnforcementClients)(
        INapClientManagement *This,
        EnforcementEntityCount *count,
        NapComponentRegistrationInfo **enforcers);

    END_INTERFACE
} INapClientManagementVtbl;

interface INapClientManagement {
    CONST_VTBL INapClientManagementVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapClientManagement_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapClientManagement_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapClientManagement_Release(This) (This)->lpVtbl->Release(This)
/*** INapClientManagement methods ***/
#define INapClientManagement_GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion) (This)->lpVtbl->GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion)
#define INapClientManagement_GetSystemIsolationInfo(This,isolationInfo,unknownConnections) (This)->lpVtbl->GetSystemIsolationInfo(This,isolationInfo,unknownConnections)
#define INapClientManagement_RegisterSystemHealthAgent(This,agent) (This)->lpVtbl->RegisterSystemHealthAgent(This,agent)
#define INapClientManagement_UnregisterSystemHealthAgent(This,id) (This)->lpVtbl->UnregisterSystemHealthAgent(This,id)
#define INapClientManagement_RegisterEnforcementClient(This,enforcer) (This)->lpVtbl->RegisterEnforcementClient(This,enforcer)
#define INapClientManagement_UnregisterEnforcementClient(This,id) (This)->lpVtbl->UnregisterEnforcementClient(This,id)
#define INapClientManagement_GetRegisteredSystemHealthAgents(This,count,agents) (This)->lpVtbl->GetRegisteredSystemHealthAgents(This,count,agents)
#define INapClientManagement_GetRegisteredEnforcementClients(This,count,enforcers) (This)->lpVtbl->GetRegisteredEnforcementClients(This,count,enforcers)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapClientManagement_QueryInterface(INapClientManagement* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapClientManagement_AddRef(INapClientManagement* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapClientManagement_Release(INapClientManagement* This) {
    return This->lpVtbl->Release(This);
}
/*** INapClientManagement methods ***/
static __WIDL_INLINE HRESULT INapClientManagement_GetNapClientInfo(INapClientManagement* This,WINBOOL *isNapEnabled,CountedString **clientName,CountedString **clientDescription,CountedString **protocolVersion) {
    return This->lpVtbl->GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion);
}
static __WIDL_INLINE HRESULT INapClientManagement_GetSystemIsolationInfo(INapClientManagement* This,IsolationInfo **isolationInfo,WINBOOL *unknownConnections) {
    return This->lpVtbl->GetSystemIsolationInfo(This,isolationInfo,unknownConnections);
}
static __WIDL_INLINE HRESULT INapClientManagement_RegisterSystemHealthAgent(INapClientManagement* This,const NapComponentRegistrationInfo *agent) {
    return This->lpVtbl->RegisterSystemHealthAgent(This,agent);
}
static __WIDL_INLINE HRESULT INapClientManagement_UnregisterSystemHealthAgent(INapClientManagement* This,SystemHealthEntityId id) {
    return This->lpVtbl->UnregisterSystemHealthAgent(This,id);
}
static __WIDL_INLINE HRESULT INapClientManagement_RegisterEnforcementClient(INapClientManagement* This,const NapComponentRegistrationInfo *enforcer) {
    return This->lpVtbl->RegisterEnforcementClient(This,enforcer);
}
static __WIDL_INLINE HRESULT INapClientManagement_UnregisterEnforcementClient(INapClientManagement* This,EnforcementEntityId id) {
    return This->lpVtbl->UnregisterEnforcementClient(This,id);
}
static __WIDL_INLINE HRESULT INapClientManagement_GetRegisteredSystemHealthAgents(INapClientManagement* This,SystemHealthEntityCount *count,NapComponentRegistrationInfo **agents) {
    return This->lpVtbl->GetRegisteredSystemHealthAgents(This,count,agents);
}
static __WIDL_INLINE HRESULT INapClientManagement_GetRegisteredEnforcementClients(INapClientManagement* This,EnforcementEntityCount *count,NapComponentRegistrationInfo **enforcers) {
    return This->lpVtbl->GetRegisteredEnforcementClients(This,count,enforcers);
}
#endif
#endif

#endif


#endif  /* __INapClientManagement_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapClientManagement2 interface
 */
#ifndef __INapClientManagement2_INTERFACE_DEFINED__
#define __INapClientManagement2_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapClientManagement2, 0x07a1127b, 0x18cc, 0x422a, 0xb9,0x88, 0xe8,0x92,0x60,0x0f,0xcc,0x74);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("07a1127b-18cc-422a-b988-e892600fcc74")
INapClientManagement2 : public INapClientManagement
{
    virtual HRESULT STDMETHODCALLTYPE GetSystemIsolationInfoEx(
        IsolationInfoEx **isolationInfo,
        WINBOOL *unknownConnections) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapClientManagement2, 0x07a1127b, 0x18cc, 0x422a, 0xb9,0x88, 0xe8,0x92,0x60,0x0f,0xcc,0x74)
#endif
#else
typedef struct INapClientManagement2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapClientManagement2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapClientManagement2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapClientManagement2 *This);

    /*** INapClientManagement methods ***/
    HRESULT (STDMETHODCALLTYPE *GetNapClientInfo)(
        INapClientManagement2 *This,
        WINBOOL *isNapEnabled,
        CountedString **clientName,
        CountedString **clientDescription,
        CountedString **protocolVersion);

    HRESULT (STDMETHODCALLTYPE *GetSystemIsolationInfo)(
        INapClientManagement2 *This,
        IsolationInfo **isolationInfo,
        WINBOOL *unknownConnections);

    HRESULT (STDMETHODCALLTYPE *RegisterSystemHealthAgent)(
        INapClientManagement2 *This,
        const NapComponentRegistrationInfo *agent);

    HRESULT (STDMETHODCALLTYPE *UnregisterSystemHealthAgent)(
        INapClientManagement2 *This,
        SystemHealthEntityId id);

    HRESULT (STDMETHODCALLTYPE *RegisterEnforcementClient)(
        INapClientManagement2 *This,
        const NapComponentRegistrationInfo *enforcer);

    HRESULT (STDMETHODCALLTYPE *UnregisterEnforcementClient)(
        INapClientManagement2 *This,
        EnforcementEntityId id);

    HRESULT (STDMETHODCALLTYPE *GetRegisteredSystemHealthAgents)(
        INapClientManagement2 *This,
        SystemHealthEntityCount *count,
        NapComponentRegistrationInfo **agents);

    HRESULT (STDMETHODCALLTYPE *GetRegisteredEnforcementClients)(
        INapClientManagement2 *This,
        EnforcementEntityCount *count,
        NapComponentRegistrationInfo **enforcers);

    /*** INapClientManagement2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSystemIsolationInfoEx)(
        INapClientManagement2 *This,
        IsolationInfoEx **isolationInfo,
        WINBOOL *unknownConnections);

    END_INTERFACE
} INapClientManagement2Vtbl;

interface INapClientManagement2 {
    CONST_VTBL INapClientManagement2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapClientManagement2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapClientManagement2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapClientManagement2_Release(This) (This)->lpVtbl->Release(This)
/*** INapClientManagement methods ***/
#define INapClientManagement2_GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion) (This)->lpVtbl->GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion)
#define INapClientManagement2_GetSystemIsolationInfo(This,isolationInfo,unknownConnections) (This)->lpVtbl->GetSystemIsolationInfo(This,isolationInfo,unknownConnections)
#define INapClientManagement2_RegisterSystemHealthAgent(This,agent) (This)->lpVtbl->RegisterSystemHealthAgent(This,agent)
#define INapClientManagement2_UnregisterSystemHealthAgent(This,id) (This)->lpVtbl->UnregisterSystemHealthAgent(This,id)
#define INapClientManagement2_RegisterEnforcementClient(This,enforcer) (This)->lpVtbl->RegisterEnforcementClient(This,enforcer)
#define INapClientManagement2_UnregisterEnforcementClient(This,id) (This)->lpVtbl->UnregisterEnforcementClient(This,id)
#define INapClientManagement2_GetRegisteredSystemHealthAgents(This,count,agents) (This)->lpVtbl->GetRegisteredSystemHealthAgents(This,count,agents)
#define INapClientManagement2_GetRegisteredEnforcementClients(This,count,enforcers) (This)->lpVtbl->GetRegisteredEnforcementClients(This,count,enforcers)
/*** INapClientManagement2 methods ***/
#define INapClientManagement2_GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections) (This)->lpVtbl->GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapClientManagement2_QueryInterface(INapClientManagement2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapClientManagement2_AddRef(INapClientManagement2* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapClientManagement2_Release(INapClientManagement2* This) {
    return This->lpVtbl->Release(This);
}
/*** INapClientManagement methods ***/
static __WIDL_INLINE HRESULT INapClientManagement2_GetNapClientInfo(INapClientManagement2* This,WINBOOL *isNapEnabled,CountedString **clientName,CountedString **clientDescription,CountedString **protocolVersion) {
    return This->lpVtbl->GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion);
}
static __WIDL_INLINE HRESULT INapClientManagement2_GetSystemIsolationInfo(INapClientManagement2* This,IsolationInfo **isolationInfo,WINBOOL *unknownConnections) {
    return This->lpVtbl->GetSystemIsolationInfo(This,isolationInfo,unknownConnections);
}
static __WIDL_INLINE HRESULT INapClientManagement2_RegisterSystemHealthAgent(INapClientManagement2* This,const NapComponentRegistrationInfo *agent) {
    return This->lpVtbl->RegisterSystemHealthAgent(This,agent);
}
static __WIDL_INLINE HRESULT INapClientManagement2_UnregisterSystemHealthAgent(INapClientManagement2* This,SystemHealthEntityId id) {
    return This->lpVtbl->UnregisterSystemHealthAgent(This,id);
}
static __WIDL_INLINE HRESULT INapClientManagement2_RegisterEnforcementClient(INapClientManagement2* This,const NapComponentRegistrationInfo *enforcer) {
    return This->lpVtbl->RegisterEnforcementClient(This,enforcer);
}
static __WIDL_INLINE HRESULT INapClientManagement2_UnregisterEnforcementClient(INapClientManagement2* This,EnforcementEntityId id) {
    return This->lpVtbl->UnregisterEnforcementClient(This,id);
}
static __WIDL_INLINE HRESULT INapClientManagement2_GetRegisteredSystemHealthAgents(INapClientManagement2* This,SystemHealthEntityCount *count,NapComponentRegistrationInfo **agents) {
    return This->lpVtbl->GetRegisteredSystemHealthAgents(This,count,agents);
}
static __WIDL_INLINE HRESULT INapClientManagement2_GetRegisteredEnforcementClients(INapClientManagement2* This,EnforcementEntityCount *count,NapComponentRegistrationInfo **enforcers) {
    return This->lpVtbl->GetRegisteredEnforcementClients(This,count,enforcers);
}
/*** INapClientManagement2 methods ***/
static __WIDL_INLINE HRESULT INapClientManagement2_GetSystemIsolationInfoEx(INapClientManagement2* This,IsolationInfoEx **isolationInfo,WINBOOL *unknownConnections) {
    return This->lpVtbl->GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections);
}
#endif
#endif

#endif


#endif  /* __INapClientManagement2_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __napmanagement_h__ */
