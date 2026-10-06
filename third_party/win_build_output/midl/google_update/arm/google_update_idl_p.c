

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../google_update/google_update_idl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=ARM 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "google_update_idl.h"

#define TYPE_FORMAT_STRING_SIZE   1189                              
#define PROC_FORMAT_STRING_SIZE   6619                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _google_update_idl_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } google_update_idl_MIDL_TYPE_FORMAT_STRING;

typedef struct _google_update_idl_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } google_update_idl_MIDL_PROC_FORMAT_STRING;

typedef struct _google_update_idl_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } google_update_idl_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const google_update_idl_MIDL_TYPE_FORMAT_STRING google_update_idl__MIDL_TypeFormatString;
extern const google_update_idl_MIDL_PROC_FORMAT_STRING google_update_idl__MIDL_ProcFormatString;
extern const google_update_idl_MIDL_EXPR_FORMAT_STRING google_update_idl__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IGoogleUpdate3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGoogleUpdate3_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAppBundle_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppBundle_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IApp_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IApp_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IApp2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IApp2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAppCommand_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppCommand_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAppCommand2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppCommand2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAppVersion_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppVersion_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPackage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPackage_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ICurrentState_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICurrentState_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IRegistrationUpdateHook_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRegistrationUpdateHook_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ICredentialDialog_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICredentialDialog_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPolicyStatus_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPolicyStatus_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPolicyStatusValue_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPolicyStatusValue_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPolicyStatus2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPolicyStatus2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IGoogleUpdate3Web_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGoogleUpdate3Web_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IGoogleUpdate3WebSecurity_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGoogleUpdate3WebSecurity_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAppBundleWeb_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppBundleWeb_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAppWeb_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppWeb_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAppCommandWeb_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppCommandWeb_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAppVersionWeb_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppVersionWeb_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ICoCreateAsyncStatus_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICoCreateAsyncStatus_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ICoCreateAsync_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICoCreateAsync_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IBrowserHttpRequest2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBrowserHttpRequest2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IProcessLauncher_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IProcessLauncher_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IProcessLauncher2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IProcessLauncher2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IProgressWndEvents_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IProgressWndEvents_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IJobObserver_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IJobObserver_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IJobObserver2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IJobObserver2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IGoogleUpdate_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGoogleUpdate_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IGoogleUpdateCore_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGoogleUpdateCore_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_ARM32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const google_update_idl_MIDL_PROC_FORMAT_STRING google_update_idl__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_status */


	/* Procedure get_lastCheckPeriodMinutes */


	/* Procedure get_stateValue */


	/* Procedure get_Count */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x2 ),	/* 2 */
/* 26 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 28 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppCommandWeb0000 */


	/* Parameter minutes */


	/* Parameter __MIDL__ICurrentState0000 */


	/* Parameter count */

/* 30 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 32 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 58 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x3 ),	/* 3 */
/* 68 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 70 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bundle */

/* 78 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 80 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 82 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 84 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 86 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_createdInstance */


	/* Procedure get_nextVersionWeb */


	/* Procedure createAppBundle */

/* 90 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 92 */	NdrFcLong( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x9 ),	/* 9 */
/* 98 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 106 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x2 ),	/* 2 */
/* 116 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 118 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter instance */


	/* Parameter next */


	/* Parameter app_bundle */

/* 120 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 122 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 124 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_version */


	/* Procedure get_appId */


	/* Procedure get_updaterVersion */


	/* Procedure get_source */


	/* Procedure get_version */


	/* Procedure get_displayName */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x7 ),	/* 7 */
/* 140 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 148 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x2 ),	/* 2 */
/* 158 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 160 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppVersionWeb0000 */


	/* Parameter __MIDL__IAppWeb0000 */


	/* Parameter version */


	/* Parameter __MIDL__IPolicyStatusValue0000 */


	/* Parameter __MIDL__IAppVersion0000 */


	/* Parameter __MIDL__IAppBundle0000 */

/* 162 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 164 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 166 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 170 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createInstalledApp */


	/* Procedure put_displayName */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 182 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 190 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x2 ),	/* 2 */
/* 200 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 202 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter app_id */


	/* Parameter __MIDL__IAppBundle0001 */

/* 204 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 206 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 208 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */


	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_output */


	/* Procedure get_downloadPreferenceGroupPolicy */


	/* Procedure get_filename */


	/* Procedure get_appId */


	/* Procedure get_displayLanguage */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x9 ),	/* 9 */
/* 224 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 230 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 232 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x2 ),	/* 2 */
/* 242 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 244 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppCommandWeb0002 */


	/* Parameter pref */


	/* Parameter __MIDL__IPackage0001 */


	/* Parameter __MIDL__IApp0000 */


	/* Parameter __MIDL__IAppBundle0002 */

/* 246 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 250 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 254 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_displayLanguage */

/* 258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0xa ),	/* 10 */
/* 266 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 272 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 274 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x2 ),	/* 2 */
/* 284 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 286 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppBundle0003 */

/* 288 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 290 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 292 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_conflictValue */


	/* Procedure get_output */


	/* Procedure get_installSource */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0xb ),	/* 11 */
/* 308 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 316 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x2 ),	/* 2 */
/* 326 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 328 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IPolicyStatusValue0003 */


	/* Parameter __MIDL__IAppCommand20000 */


	/* Parameter __MIDL__IAppBundle0004 */

/* 330 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 332 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 334 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_installSource */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0xc ),	/* 12 */
/* 350 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 358 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x2 ),	/* 2 */
/* 368 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 370 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppBundle0005 */

/* 372 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 374 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 376 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_originURL */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0xd ),	/* 13 */
/* 392 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 400 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x2 ),	/* 2 */
/* 410 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 412 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppBundle0006 */

/* 414 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 416 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 418 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 422 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_originURL */

/* 426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0xe ),	/* 14 */
/* 434 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 440 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 442 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x2 ),	/* 2 */
/* 452 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 454 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppBundle0007 */

/* 456 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 458 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 460 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 464 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_serverInstallDataIndex */


	/* Procedure get_offlineDirectory */

/* 468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0xf ),	/* 15 */
/* 476 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 482 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 484 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x2 ),	/* 2 */
/* 494 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 496 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppWeb0001 */


	/* Parameter offline_dir */

/* 498 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 500 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 502 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */


	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 506 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_serverInstallDataIndex */


	/* Procedure put_offlineDirectory */

/* 510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x10 ),	/* 16 */
/* 518 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 524 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 526 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x2 ),	/* 2 */
/* 536 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 538 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppWeb0002 */


	/* Parameter offline_dir */

/* 540 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 542 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 544 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */


	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 548 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sessionId */

/* 552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x11 ),	/* 17 */
/* 560 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 566 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 568 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 570 */	NdrFcShort( 0x1 ),	/* 1 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x2 ),	/* 2 */
/* 578 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 580 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter session_id */

/* 582 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 584 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 586 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 590 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_sessionId */

/* 594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x12 ),	/* 18 */
/* 602 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 608 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 610 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x2 ),	/* 2 */
/* 620 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 622 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter session_id */

/* 624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 626 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 628 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 632 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_sendPings */

/* 636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x13 ),	/* 19 */
/* 644 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x22 ),	/* 34 */
/* 650 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 652 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x2 ),	/* 2 */
/* 662 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 664 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter send_pings */

/* 666 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 668 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 670 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 674 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_sendPings */

/* 678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x14 ),	/* 20 */
/* 686 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 688 */	NdrFcShort( 0x6 ),	/* 6 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 694 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x2 ),	/* 2 */
/* 704 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 706 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter send_pings */

/* 708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 710 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 712 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_priority */

/* 720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x15 ),	/* 21 */
/* 728 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x24 ),	/* 36 */
/* 734 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 736 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x2 ),	/* 2 */
/* 746 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 748 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter priority */

/* 750 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 752 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 758 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_priority */

/* 762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x16 ),	/* 22 */
/* 770 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 778 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x2 ),	/* 2 */
/* 788 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 790 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter priority */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 800 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_postInstallAction */


	/* Procedure get_Count */

/* 804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x17 ),	/* 23 */
/* 812 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x24 ),	/* 36 */
/* 818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 820 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x2 ),	/* 2 */
/* 830 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 832 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0015 */


	/* Parameter count */

/* 834 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 836 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x18 ),	/* 24 */
/* 854 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 862 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x3 ),	/* 3 */
/* 872 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 874 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */

/* 876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 878 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter app */

/* 882 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 884 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 886 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 890 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_altTokens */

/* 894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x19 ),	/* 25 */
/* 902 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 904 */	NdrFcShort( 0x18 ),	/* 24 */
/* 906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 908 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 910 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x4 ),	/* 4 */
/* 920 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 922 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 924 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter impersonation_token */

/* 926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 928 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter primary_token */

/* 932 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 934 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter caller_proc_id */

/* 938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 940 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 946 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_parentHWND */

/* 950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x1a ),	/* 26 */
/* 958 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 964 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 966 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x2 ),	/* 2 */
/* 976 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 978 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter hwnd */

/* 980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 982 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 988 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure initialize */

/* 992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1000 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1008 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1018 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 1020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1022 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_command */


	/* Procedure createApp */

/* 1026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1034 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1040 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1042 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1052 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1054 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter command_id */


	/* Parameter app_id */

/* 1056 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1058 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1060 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter command */


	/* Parameter app */

/* 1062 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1064 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1066 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */


	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createInstalledApp */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1082 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1090 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1100 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1102 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 1104 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1106 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1108 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter app */

/* 1110 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1112 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1114 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createAllInstalledApps */

/* 1122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1130 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1136 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1138 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1148 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 1150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1152 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure checkForUpdate */

/* 1156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1164 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1172 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1182 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 1184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1186 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure download */

/* 1190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1198 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1206 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1216 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 1218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1220 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure install */

/* 1224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1232 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1238 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1240 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1250 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 1252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1254 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure updateAllApps */

/* 1258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1264 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1266 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1274 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1284 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 1286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1288 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 1292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1300 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1306 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1308 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1318 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 1320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1322 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure pause */

/* 1326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1334 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1342 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1352 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 1354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1356 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure resume */

/* 1360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1368 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1376 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1386 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 1388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1390 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isBusy */

/* 1394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1402 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1408 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1410 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1420 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1422 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter is_busy */

/* 1424 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1426 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1428 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1432 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure downloadPackage */

/* 1436 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1444 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1450 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1452 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1462 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1464 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 1466 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1468 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1470 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter package_name */

/* 1472 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1474 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1476 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 1478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1480 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentState */

/* 1484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1490 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1492 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1498 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1500 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1510 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1512 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter current_state */

/* 1514 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1516 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1518 */	NdrFcShort( 0x42c ),	/* Type Offset=1068 */

	/* Return value */

/* 1520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1522 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createAppBundleWeb */


	/* Procedure get_currentVersion */

/* 1526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1534 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1540 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1542 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1552 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1554 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter app_bundle_web */


	/* Parameter current */

/* 1556 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1558 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1560 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */


	/* Return value */

/* 1562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1564 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentVersionWeb */


	/* Procedure get_nextVersion */

/* 1568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1576 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1582 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1584 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1594 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1596 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter current */


	/* Parameter next */

/* 1598 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1600 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1602 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */


	/* Return value */

/* 1604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1606 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_displayLanguage */


	/* Procedure get_conflictSource */


	/* Procedure get_displayName */

/* 1610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0xa ),	/* 10 */
/* 1618 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1624 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1626 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1636 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1638 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppBundleWeb0000 */


	/* Parameter __MIDL__IPolicyStatusValue0002 */


	/* Parameter __MIDL__IApp0001 */

/* 1640 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1642 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1644 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1648 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_displayLanguage */


	/* Procedure put_displayName */

/* 1652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0xb ),	/* 11 */
/* 1660 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1666 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1668 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1676 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1678 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1680 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IAppBundleWeb0001 */


	/* Parameter __MIDL__IApp0002 */

/* 1682 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1684 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1686 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */


	/* Return value */

/* 1688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1690 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_language */

/* 1694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0xc ),	/* 12 */
/* 1702 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1708 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1710 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1718 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1720 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1722 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0003 */

/* 1724 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1726 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1728 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 1730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1732 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_language */

/* 1736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0xd ),	/* 13 */
/* 1744 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1752 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1762 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1764 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0004 */

/* 1766 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1768 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1770 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 1772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1774 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ap */

/* 1778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0xe ),	/* 14 */
/* 1786 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1792 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1794 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1804 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1806 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0005 */

/* 1808 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1810 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1812 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 1814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1816 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ap */

/* 1820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0xf ),	/* 15 */
/* 1828 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1836 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1844 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1846 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1848 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0006 */

/* 1850 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1852 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1854 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 1856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1858 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ttToken */

/* 1862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1870 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1876 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1878 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1880 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1888 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1890 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0007 */

/* 1892 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1894 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1896 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 1898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1900 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ttToken */

/* 1904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1910 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1912 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1918 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1920 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1930 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1932 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0008 */

/* 1934 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1936 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1938 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 1940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1942 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_completionMessage */


	/* Procedure get_iid */

/* 1946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1954 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1960 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1962 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1972 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1974 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0010 */


	/* Parameter __MIDL__IApp0009 */

/* 1976 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1978 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1980 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */


	/* Return value */

/* 1982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1984 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_iid */

/* 1988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1996 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2002 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2004 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2014 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2016 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0010 */

/* 2018 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2020 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2022 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2026 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_brandCode */

/* 2030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2038 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2044 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2046 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2056 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2058 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0011 */

/* 2060 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2062 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2064 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 2066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2068 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_brandCode */

/* 2072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2080 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2086 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2088 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2098 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2100 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0012 */

/* 2102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2104 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2106 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2110 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_postInstallUrl */


	/* Procedure get_clientId */

/* 2114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2122 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2128 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2130 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2140 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2142 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0014 */


	/* Parameter __MIDL__IApp0013 */

/* 2144 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2146 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2148 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */


	/* Return value */

/* 2150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2152 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_clientId */

/* 2156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2164 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2170 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2172 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2180 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2182 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2184 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0014 */

/* 2186 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2188 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2190 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2194 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_labels */

/* 2198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2206 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2212 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2214 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2216 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2224 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2226 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0015 */

/* 2228 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2230 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2232 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 2234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2236 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_labels */

/* 2240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2248 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2254 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2256 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2266 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2268 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0016 */

/* 2270 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2272 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2274 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2278 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_referralId */

/* 2282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2290 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2296 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2298 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2308 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2310 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0017 */

/* 2312 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2314 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2316 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 2318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2320 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_referralId */

/* 2324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2332 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2338 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2340 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2348 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2350 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2352 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0018 */

/* 2354 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2356 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2358 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2362 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_browserType */

/* 2366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2374 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2380 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2382 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2390 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2392 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2394 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0019 */

/* 2396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2398 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2404 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_browserType */

/* 2408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2414 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2416 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2424 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2434 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2436 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0020 */

/* 2438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2440 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2446 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_clientInstallData */

/* 2450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2456 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2458 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2464 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2466 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2476 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2478 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0021 */

/* 2480 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2482 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2484 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 2486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2488 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_clientInstallData */

/* 2492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2500 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2506 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2508 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2516 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2518 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2520 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0022 */

/* 2522 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2524 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2526 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2530 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_serverInstallDataIndex */

/* 2534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2542 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2548 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2550 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2560 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2562 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0023 */

/* 2564 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2566 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2568 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 2570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2572 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_serverInstallDataIndex */

/* 2576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2582 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2584 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2590 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2592 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2600 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2602 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2604 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0024 */

/* 2606 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2608 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2610 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2614 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isEulaAccepted */

/* 2618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2626 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2630 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2632 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2634 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2644 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2646 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0025 */

/* 2648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2650 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2652 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2656 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_isEulaAccepted */

/* 2660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2668 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2670 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2674 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2676 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2686 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2688 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0026 */

/* 2690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2692 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2694 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2698 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_usageStatsEnable */

/* 2702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2708 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2710 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2714 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2716 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2718 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2726 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2728 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2730 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0027 */

/* 2732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2734 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2740 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_usageStatsEnable */

/* 2744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2752 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2760 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2768 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2770 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2772 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0028 */

/* 2774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2776 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2782 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_installTimeDiffSec */

/* 2786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2794 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2800 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2802 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2810 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2812 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2814 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0029 */

/* 2816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2818 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2824 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentState */

/* 2828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2834 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2836 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2842 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2844 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2854 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2856 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp0030 */

/* 2858 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2860 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2862 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 2864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2866 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_untrustedData */

/* 2870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2878 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2884 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2886 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2896 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2898 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp20000 */

/* 2900 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2902 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2904 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 2906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2908 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_untrustedData */

/* 2912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2920 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2926 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2928 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2938 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2940 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IApp20001 */

/* 2942 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2944 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2946 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 2948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2950 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isDone */


	/* Procedure get_isWebAccessible */

/* 2954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2962 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2966 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2970 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2978 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2980 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2982 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter is_done */


	/* Parameter __MIDL__IAppCommand0000 */

/* 2984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2986 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2988 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2992 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_completionHResult */


	/* Procedure get_packageCount */


	/* Procedure get_exitCode */


	/* Procedure get_packageCount */


	/* Procedure get_status */

/* 2996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3004 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3008 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3012 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3020 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3022 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3024 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter hr */


	/* Parameter count */


	/* Parameter __MIDL__IAppCommandWeb0001 */


	/* Parameter count */


	/* Parameter __MIDL__IAppCommand0001 */

/* 3026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3028 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3034 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_bytesDownloaded */


	/* Procedure get_exitCode */

/* 3038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3046 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3050 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3054 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3062 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3064 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3066 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0002 */


	/* Parameter __MIDL__IAppCommand0002 */

/* 3068 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3070 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3076 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure execute */


	/* Procedure execute */

/* 3080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3086 */	NdrFcShort( 0xa ),	/* 10 */
/* 3088 */	NdrFcShort( 0x9c ),	/* ARM Stack size/offset = 156 */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 3096 */	0x14,		/* 20 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3106 */	0x8,		/* 8 */
			0x80,		/* 128 */
/* 3108 */	0x9f,		/* 159 */
			0x82,		/* 130 */
/* 3110 */	0x83,		/* 131 */
			0x9d,		/* 157 */
/* 3112 */	0xfc,		/* 252 */
			0x22,		/* 34 */
/* 3114 */	0x0,		/* 0 */
			0x0,		/* 0 */

	/* Parameter arg1 */


	/* Parameter arg1 */

/* 3116 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3118 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3120 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Parameter arg2 */


	/* Parameter arg2 */

/* 3122 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3124 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 3126 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Parameter arg3 */


	/* Parameter arg3 */

/* 3128 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3130 */	NdrFcShort( 0x28 ),	/* ARM Stack size/offset = 40 */
/* 3132 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Parameter arg4 */


	/* Parameter arg4 */

/* 3134 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3136 */	NdrFcShort( 0x38 ),	/* ARM Stack size/offset = 56 */
/* 3138 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Parameter arg5 */


	/* Parameter arg5 */

/* 3140 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3142 */	NdrFcShort( 0x48 ),	/* ARM Stack size/offset = 72 */
/* 3144 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Parameter arg6 */


	/* Parameter arg6 */

/* 3146 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3148 */	NdrFcShort( 0x58 ),	/* ARM Stack size/offset = 88 */
/* 3150 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Parameter arg7 */


	/* Parameter arg7 */

/* 3152 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3154 */	NdrFcShort( 0x68 ),	/* ARM Stack size/offset = 104 */
/* 3156 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Parameter arg8 */


	/* Parameter arg8 */

/* 3158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3160 */	NdrFcShort( 0x78 ),	/* ARM Stack size/offset = 120 */
/* 3162 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Parameter arg9 */


	/* Parameter arg9 */

/* 3164 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3166 */	NdrFcShort( 0x88 ),	/* ARM Stack size/offset = 136 */
/* 3168 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Return value */


	/* Return value */

/* 3170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3172 */	NdrFcShort( 0x98 ),	/* ARM Stack size/offset = 152 */
/* 3174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_packageWeb */


	/* Procedure get_package */

/* 3176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3182 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3184 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3190 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3192 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3202 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3204 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */


	/* Parameter index */

/* 3206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3208 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter package */


	/* Parameter package */

/* 3212 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3214 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3216 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */


	/* Return value */

/* 3218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3220 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get */

/* 3224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3232 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3240 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3250 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3252 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter dir */

/* 3254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3256 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3258 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 3260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3262 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isAvailable */

/* 3266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3274 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3278 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3280 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3282 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3290 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3292 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3294 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IPackage0000 */

/* 3296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3298 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3300 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3304 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_value */


	/* Procedure get_availableVersion */

/* 3308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3316 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3322 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3324 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3334 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3336 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__IPolicyStatusValue0001 */


	/* Parameter __MIDL__ICurrentState0001 */

/* 3338 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3340 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3342 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */


	/* Return value */

/* 3344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3346 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_packageCacheSizeLimitMBytes */


	/* Procedure get_totalBytesToDownload */

/* 3350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3356 */	NdrFcShort( 0xa ),	/* 10 */
/* 3358 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3364 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3366 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3376 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3378 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter limit */


	/* Parameter __MIDL__ICurrentState0003 */

/* 3380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3382 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3388 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_packageCacheExpirationTimeDays */


	/* Procedure get_downloadTimeRemainingMs */

/* 3392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3398 */	NdrFcShort( 0xb ),	/* 11 */
/* 3400 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3404 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3408 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3418 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3420 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter days */


	/* Parameter __MIDL__ICurrentState0004 */

/* 3422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3424 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3430 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nextRetryTime */

/* 3434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3440 */	NdrFcShort( 0xc ),	/* 12 */
/* 3442 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3446 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3448 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3450 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3460 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3462 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0005 */

/* 3464 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3466 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3468 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3472 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_length */


	/* Procedure get_installProgress */

/* 3476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3482 */	NdrFcShort( 0xd ),	/* 13 */
/* 3484 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3488 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3490 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3492 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3500 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3502 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3504 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter index */


	/* Parameter __MIDL__ICurrentState0006 */

/* 3506 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3508 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3514 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_installTimeRemainingMs */

/* 3518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0xe ),	/* 14 */
/* 3526 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3530 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3532 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3534 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3544 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3546 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0007 */

/* 3548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3550 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3556 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isCanceled */

/* 3560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3566 */	NdrFcShort( 0xf ),	/* 15 */
/* 3568 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3576 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3584 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3586 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3588 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter is_canceled */

/* 3590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3592 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3594 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3598 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_errorCode */

/* 3602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3608 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3610 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3614 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3616 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3618 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3628 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3630 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0008 */

/* 3632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3634 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3640 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_extraCode1 */

/* 3644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3650 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3652 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3658 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3660 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3670 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3672 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0009 */

/* 3674 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3676 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3682 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_installerResultCode */

/* 3686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3692 */	NdrFcShort( 0x13 ),	/* 19 */
/* 3694 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3698 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3700 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3702 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3710 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3712 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3714 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0011 */

/* 3716 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3718 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3724 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_installerResultExtraCode1 */

/* 3728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3734 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3736 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3740 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3742 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3744 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3754 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3756 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0012 */

/* 3758 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3760 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3766 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_postInstallLaunchCommandLine */

/* 3770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3778 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3784 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3786 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3794 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3796 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3798 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __MIDL__ICurrentState0013 */

/* 3800 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3802 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3804 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 3806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3808 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateRegistry */

/* 3812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3820 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3822 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3826 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3828 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3838 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3840 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 3842 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3844 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3846 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter is_machine */

/* 3848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3850 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3852 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3856 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryUserForCredentials */

/* 3860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3868 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 3870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3874 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3876 */	0x12,		/* 18 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3880 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3886 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 3888 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3890 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 3892 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter owner_hwnd */

/* 3894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3896 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter server */

/* 3900 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3902 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3904 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter message */

/* 3906 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3908 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3910 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter username */

/* 3912 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3914 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3916 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter password */

/* 3918 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3920 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3922 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 3924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3926 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 3928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_updatesSuppressedTimes */

/* 3930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3938 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 3940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3942 */	NdrFcShort( 0x76 ),	/* 118 */
/* 3944 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 3946 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3956 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 3958 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3960 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter start_hour */

/* 3962 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3964 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter start_min */

/* 3968 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3970 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter duration_min */

/* 3974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3976 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter are_updates_suppressed */

/* 3980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3982 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3984 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3988 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_effectivePolicyForAppInstalls */

/* 3992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0xc ),	/* 12 */
/* 4000 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4004 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4008 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4016 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4018 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4020 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 4022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4024 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4026 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter policy */

/* 4028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4030 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4036 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_effectivePolicyForAppUpdates */

/* 4040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4046 */	NdrFcShort( 0xd ),	/* 13 */
/* 4048 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4052 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4054 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4056 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4060 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4066 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4068 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 4070 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4072 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4074 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter policy */

/* 4076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4078 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4084 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_targetVersionPrefix */

/* 4088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0xe ),	/* 14 */
/* 4096 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4102 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4104 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4108 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4112 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4114 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4116 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 4118 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4120 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4122 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter prefix */

/* 4124 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4126 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4128 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 4130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4132 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRollbackToTargetVersionAllowed */

/* 4136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0xf ),	/* 15 */
/* 4144 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4148 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4150 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4152 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4156 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4162 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4164 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 4166 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4168 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4170 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter rollback_allowed */

/* 4172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4174 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4176 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4180 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hasConflict */

/* 4184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4190 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4192 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4200 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4210 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4212 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter has_conflict */

/* 4214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4216 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4218 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4222 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_lastCheckedTime */

/* 4226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4234 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4238 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4242 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4250 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4252 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4254 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter last_checked */

/* 4256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4258 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4260 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 4262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4264 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInstalling */


	/* Procedure createAllInstalledApps */


	/* Procedure refreshPolicies */

/* 4268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4274 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4276 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4284 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4294 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 4296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4298 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_lastCheckPeriodMinutes */

/* 4302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0xa ),	/* 10 */
/* 4310 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4316 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4318 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4326 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4328 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4330 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 4332 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4334 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4336 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4340 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_updatesSuppressedTimes */

/* 4344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0xb ),	/* 11 */
/* 4352 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4354 */	NdrFcShort( 0x1a ),	/* 26 */
/* 4356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4358 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4360 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4368 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4370 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4372 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter value */

/* 4374 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4376 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4378 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Parameter are_updates_suppressed */

/* 4380 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 4382 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4384 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4388 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_downloadPreferenceGroupPolicy */

/* 4392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0xc ),	/* 12 */
/* 4400 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4406 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4408 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4416 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4418 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4420 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 4422 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4424 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4426 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4430 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_packageCacheSizeLimitMBytes */

/* 4434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0xd ),	/* 13 */
/* 4442 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4448 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4450 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4460 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4462 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 4464 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4466 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4468 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4472 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_packageCacheExpirationTimeDays */

/* 4476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0xe ),	/* 14 */
/* 4484 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4490 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4492 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4502 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4504 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 4506 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4508 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4510 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4514 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_proxyMode */

/* 4518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0xf ),	/* 15 */
/* 4526 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4532 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4534 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4542 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4544 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4546 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 4548 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4550 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4552 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4556 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_proxyPacUrl */

/* 4560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4568 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4574 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4576 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4584 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4586 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4588 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 4590 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4592 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4594 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4598 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_proxyServer */

/* 4602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4610 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4616 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4618 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4628 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4630 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 4632 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4634 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4636 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4640 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_effectivePolicyForAppInstalls */

/* 4644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4652 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4658 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4660 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4668 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4670 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4672 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 4674 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4676 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4678 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter value */

/* 4680 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4682 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4684 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4688 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_effectivePolicyForAppUpdates */

/* 4692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4700 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4706 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4708 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4716 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4718 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4720 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 4722 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4724 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4726 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter value */

/* 4728 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4730 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4732 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4736 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_targetVersionPrefix */

/* 4740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4746 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4748 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4754 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4756 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4766 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4768 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 4770 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4772 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4774 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter value */

/* 4776 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4778 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4780 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4784 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRollbackToTargetVersionAllowed */

/* 4788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4796 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4802 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4804 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4812 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4814 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4816 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 4818 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4820 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4822 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter value */

/* 4824 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4826 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4828 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4832 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_targetChannel */

/* 4836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4844 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4850 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4852 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4862 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4864 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 4866 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4868 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4870 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter value */

/* 4872 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4874 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4876 */	NdrFcShort( 0x44c ),	/* Type Offset=1100 */

	/* Return value */

/* 4878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4880 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setOriginURL */

/* 4884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4890 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4892 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4898 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4900 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4904 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4910 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4912 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter origin_url */

/* 4914 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4916 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4918 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 4920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4922 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createApp */

/* 4926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4934 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 4936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4940 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4942 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4950 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4952 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 4954 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4956 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter app_guid */

/* 4958 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4960 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4962 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter brand_code */

/* 4964 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4966 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4968 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter language */

/* 4970 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4972 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4974 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter ap */

/* 4976 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4978 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4980 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 4982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4984 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_parentHWND */

/* 4988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4994 */	NdrFcShort( 0xc ),	/* 12 */
/* 4996 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5002 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5004 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5012 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5014 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5016 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter hwnd */

/* 5018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5020 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5026 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_appWeb */

/* 5030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0xe ),	/* 14 */
/* 5038 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5044 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5046 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5054 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5056 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5058 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */

/* 5060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5062 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter app_web */

/* 5066 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5068 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5070 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 5072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5074 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure initialize */

/* 5078 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5084 */	NdrFcShort( 0xf ),	/* 15 */
/* 5086 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5092 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5094 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5104 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5108 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure checkForUpdate */

/* 5112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5118 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5120 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5128 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5138 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5142 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure download */

/* 5146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5152 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5154 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5162 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5172 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5176 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure install */

/* 5180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5188 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5196 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5206 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5210 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure pause */

/* 5214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5220 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5222 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5228 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5230 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5240 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5244 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure resume */

/* 5248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5254 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5256 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5262 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5264 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5272 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5274 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5278 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure cancel */

/* 5282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5288 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5290 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5296 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5298 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5308 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5312 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure downloadPackage */

/* 5316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5322 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5324 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5330 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5332 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5342 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5344 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter app_id */

/* 5346 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5348 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5350 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter package_name */

/* 5352 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5354 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5356 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Return value */

/* 5358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5360 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentState */

/* 5364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5370 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5372 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5378 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5380 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5382 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5390 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5392 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter current_state */

/* 5394 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5396 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5398 */	NdrFcShort( 0x42c ),	/* Type Offset=1068 */

	/* Return value */

/* 5400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5402 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_command */

/* 5406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5412 */	NdrFcShort( 0xa ),	/* 10 */
/* 5414 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5420 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5422 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5430 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5432 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5434 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter command_id */

/* 5436 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5438 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5440 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter command */

/* 5442 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5444 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5446 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 5448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5450 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure cancel */

/* 5454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5460 */	NdrFcShort( 0xb ),	/* 11 */
/* 5462 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5468 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5470 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5478 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5480 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5484 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentState */

/* 5488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5494 */	NdrFcShort( 0xc ),	/* 12 */
/* 5496 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5502 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5504 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5512 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5514 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5516 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter current_state */

/* 5518 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5520 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5522 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 5524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5526 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure launch */

/* 5530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5536 */	NdrFcShort( 0xd ),	/* 13 */
/* 5538 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5544 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5546 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5556 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5560 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure uninstall */

/* 5564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5570 */	NdrFcShort( 0xe ),	/* 14 */
/* 5572 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5578 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5580 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5588 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5590 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 5592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5594 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure createOmahaMachineServerAsync */

/* 5598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5604 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5606 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5612 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5614 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5624 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5626 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5628 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter origin_url */

/* 5630 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5632 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5634 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter create_elevated */

/* 5636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5638 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter status */

/* 5642 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5644 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5646 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 5648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5650 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Send */

/* 5654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5660 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5662 */	NdrFcShort( 0x30 ),	/* ARM Stack size/offset = 48 */
/* 5664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5666 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5668 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5670 */	0x14,		/* 20 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5678 */	NdrFcShort( 0xb ),	/* 11 */
/* 5680 */	0x8,		/* 8 */
			0x80,		/* 128 */
/* 5682 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5684 */	0x83,		/* 131 */
			0x9d,		/* 157 */
/* 5686 */	0xfc,		/* 252 */
			0x7,		/* 7 */
/* 5688 */	0x0,		/* 0 */
			0x0,		/* 0 */

	/* Parameter url */

/* 5690 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5692 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5694 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter post_data */

/* 5696 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5698 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5700 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter request_headers */

/* 5702 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5704 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5706 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter response_headers_needed */

/* 5708 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5710 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5712 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Parameter response_headers */

/* 5714 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 5716 */	NdrFcShort( 0x20 ),	/* ARM Stack size/offset = 32 */
/* 5718 */	NdrFcShort( 0x42c ),	/* Type Offset=1068 */

	/* Parameter response_code */

/* 5720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5722 */	NdrFcShort( 0x24 ),	/* ARM Stack size/offset = 36 */
/* 5724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cache_filename */

/* 5726 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5728 */	NdrFcShort( 0x28 ),	/* ARM Stack size/offset = 40 */
/* 5730 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 5732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5734 */	NdrFcShort( 0x2c ),	/* ARM Stack size/offset = 44 */
/* 5736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LaunchCmdLine */

/* 5738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5744 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5746 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5752 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5754 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5762 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5764 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5766 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter cmd_line */

/* 5768 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5770 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5772 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Return value */

/* 5774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5776 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LaunchBrowser */

/* 5780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5786 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5788 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5794 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5796 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5804 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5806 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5808 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter browser_type */

/* 5810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5812 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter url */

/* 5816 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5818 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5820 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Return value */

/* 5822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5824 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LaunchCmdElevated */

/* 5828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5834 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5836 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5840 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5842 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5844 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5852 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5854 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 5856 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5858 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter app_guid */

/* 5860 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5862 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5864 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter cmd_id */

/* 5866 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5868 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5870 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter caller_proc_id */

/* 5872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5874 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter proc_handle */

/* 5878 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5880 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5886 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LaunchCmdLineEx */

/* 5890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5896 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5898 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5902 */	NdrFcShort( 0x5c ),	/* 92 */
/* 5904 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5906 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5914 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5916 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 5918 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5920 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter cmd_line */

/* 5922 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5924 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5926 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter server_proc_id */

/* 5928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5930 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter proc_handle */

/* 5934 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5936 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter stdout_handle */

/* 5940 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5942 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5948 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnShow */


	/* Procedure DoClose */

/* 5952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5958 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5960 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5966 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5968 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5978 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */


	/* Return value */

/* 5980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5982 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCheckingForUpdate */


	/* Procedure DoPause */

/* 5986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5992 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5994 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6002 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6012 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */


	/* Return value */

/* 6014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6016 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoResume */

/* 6020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6026 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6028 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6034 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6036 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6046 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 6048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6050 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnWaitingToDownload */


	/* Procedure DoRestartBrowsers */

/* 6054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6060 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6062 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6068 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6070 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6080 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */


	/* Return value */

/* 6082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6084 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoReboot */

/* 6088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6094 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6096 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6104 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6114 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 6116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6118 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoLaunchBrowser */

/* 6122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6130 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6136 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6138 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6146 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6148 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6150 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter url */

/* 6152 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6154 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6156 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Return value */

/* 6158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6160 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUpdateAvailable */

/* 6164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6170 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6172 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6178 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6180 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6188 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6190 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6192 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter version_string */

/* 6194 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6196 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6198 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Return value */

/* 6200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6202 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDownloading */

/* 6206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6212 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6214 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6216 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6220 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6222 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6230 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6232 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6234 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter time_remaining_ms */

/* 6236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6238 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pos */

/* 6242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6244 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6250 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnWaitingToInstall */

/* 6254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6262 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6268 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6270 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6280 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 6282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6284 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPause */

/* 6288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6294 */	NdrFcShort( 0xa ),	/* 10 */
/* 6296 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6302 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6304 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6314 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 6316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6318 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnComplete */

/* 6322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6328 */	NdrFcShort( 0xb ),	/* 11 */
/* 6330 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6332 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6336 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6338 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6346 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6348 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6350 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter code */

/* 6352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6354 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6356 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter completion_text */

/* 6358 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6360 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6362 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Return value */

/* 6364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6366 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetEventSink */

/* 6370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6376 */	NdrFcShort( 0xc ),	/* 12 */
/* 6378 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6384 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6386 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6394 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6396 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6398 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter ui_sink */

/* 6400 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6402 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6404 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 6406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6408 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInstalling2 */

/* 6412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6418 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6420 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6422 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6428 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6436 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6438 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6440 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter time_remaining_ms */

/* 6442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6444 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pos */

/* 6448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6450 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6456 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckForUpdate */

/* 6460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6466 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6468 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6474 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6476 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6484 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6486 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6488 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter guid */

/* 6490 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6492 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6494 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter observer */

/* 6496 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6498 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6500 */	NdrFcShort( 0x492 ),	/* Type Offset=1170 */

	/* Return value */

/* 6502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6504 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Update */

/* 6508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6514 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6516 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6522 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6524 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6532 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6534 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6536 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter guid */

/* 6538 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6540 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6542 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter observer */

/* 6544 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6546 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6548 */	NdrFcShort( 0x492 ),	/* Type Offset=1170 */

	/* Return value */

/* 6550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6552 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LaunchCmdElevated */

/* 6556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6562 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6564 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 6566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6570 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6572 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6580 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6582 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 6584 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6586 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter app_guid */

/* 6588 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6590 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6592 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter cmd_id */

/* 6594 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6596 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6598 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter caller_proc_id */

/* 6600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6602 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter proc_handle */

/* 6606 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6608 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6614 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 6616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const google_update_idl_MIDL_TYPE_FORMAT_STRING google_update_idl__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 12 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 16 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 22 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 24 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 26 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 28 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 30 */	NdrFcShort( 0x1c ),	/* Offset= 28 (58) */
/* 32 */	
			0x13, 0x0,	/* FC_OP */
/* 34 */	NdrFcShort( 0xe ),	/* Offset= 14 (48) */
/* 36 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 38 */	NdrFcShort( 0x2 ),	/* 2 */
/* 40 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 42 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 44 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 46 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 48 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (36) */
/* 54 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 56 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 58 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x4 ),	/* 4 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0xffde ),	/* Offset= -34 (32) */
/* 68 */	
			0x12, 0x0,	/* FC_UP */
/* 70 */	NdrFcShort( 0xffea ),	/* Offset= -22 (48) */
/* 72 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x4 ),	/* 4 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (68) */
/* 82 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 84 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 88 */	NdrFcShort( 0x3d4 ),	/* Offset= 980 (1068) */
/* 90 */	
			0x13, 0x0,	/* FC_OP */
/* 92 */	NdrFcShort( 0x3bc ),	/* Offset= 956 (1048) */
/* 94 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 96 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 98 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 100 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (104) */
/* 104 */	NdrFcShort( 0x10 ),	/* 16 */
/* 106 */	NdrFcShort( 0x2f ),	/* 47 */
/* 108 */	NdrFcLong( 0x14 ),	/* 20 */
/* 112 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 114 */	NdrFcLong( 0x3 ),	/* 3 */
/* 118 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 120 */	NdrFcLong( 0x11 ),	/* 17 */
/* 124 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 126 */	NdrFcLong( 0x2 ),	/* 2 */
/* 130 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 132 */	NdrFcLong( 0x4 ),	/* 4 */
/* 136 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 138 */	NdrFcLong( 0x5 ),	/* 5 */
/* 142 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 144 */	NdrFcLong( 0xb ),	/* 11 */
/* 148 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 150 */	NdrFcLong( 0xa ),	/* 10 */
/* 154 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 156 */	NdrFcLong( 0x6 ),	/* 6 */
/* 160 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (392) */
/* 162 */	NdrFcLong( 0x7 ),	/* 7 */
/* 166 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 168 */	NdrFcLong( 0x8 ),	/* 8 */
/* 172 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (32) */
/* 174 */	NdrFcLong( 0xd ),	/* 13 */
/* 178 */	NdrFcShort( 0xdc ),	/* Offset= 220 (398) */
/* 180 */	NdrFcLong( 0x9 ),	/* 9 */
/* 184 */	NdrFcShort( 0xff52 ),	/* Offset= -174 (10) */
/* 186 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 190 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (416) */
/* 192 */	NdrFcLong( 0x24 ),	/* 36 */
/* 196 */	NdrFcShort( 0x30a ),	/* Offset= 778 (974) */
/* 198 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 202 */	NdrFcShort( 0x304 ),	/* Offset= 772 (974) */
/* 204 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 208 */	NdrFcShort( 0x302 ),	/* Offset= 770 (978) */
/* 210 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 214 */	NdrFcShort( 0x300 ),	/* Offset= 768 (982) */
/* 216 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 220 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (986) */
/* 222 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 226 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (990) */
/* 228 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 232 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (994) */
/* 234 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 238 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (998) */
/* 240 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 244 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (982) */
/* 246 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 250 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (986) */
/* 252 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 256 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1002) */
/* 258 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 262 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (998) */
/* 264 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 268 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1006) */
/* 270 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 274 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1010) */
/* 276 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 280 */	NdrFcShort( 0x2de ),	/* Offset= 734 (1014) */
/* 282 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 286 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (1018) */
/* 288 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 292 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1022) */
/* 294 */	NdrFcLong( 0x10 ),	/* 16 */
/* 298 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 300 */	NdrFcLong( 0x12 ),	/* 18 */
/* 304 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 306 */	NdrFcLong( 0x13 ),	/* 19 */
/* 310 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 312 */	NdrFcLong( 0x15 ),	/* 21 */
/* 316 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 318 */	NdrFcLong( 0x16 ),	/* 22 */
/* 322 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 324 */	NdrFcLong( 0x17 ),	/* 23 */
/* 328 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 330 */	NdrFcLong( 0xe ),	/* 14 */
/* 334 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (1030) */
/* 336 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 340 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1040) */
/* 342 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 346 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (1044) */
/* 348 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 352 */	NdrFcShort( 0x276 ),	/* Offset= 630 (982) */
/* 354 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 358 */	NdrFcShort( 0x274 ),	/* Offset= 628 (986) */
/* 360 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 364 */	NdrFcShort( 0x272 ),	/* Offset= 626 (990) */
/* 366 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 370 */	NdrFcShort( 0x268 ),	/* Offset= 616 (986) */
/* 372 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 376 */	NdrFcShort( 0x262 ),	/* Offset= 610 (986) */
/* 378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* Offset= 0 (382) */
/* 384 */	NdrFcLong( 0x1 ),	/* 1 */
/* 388 */	NdrFcShort( 0x0 ),	/* Offset= 0 (388) */
/* 390 */	NdrFcShort( 0xffff ),	/* Offset= -1 (389) */
/* 392 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 396 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 398 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 410 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 412 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 414 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 416 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 418 */	NdrFcShort( 0x2 ),	/* Offset= 2 (420) */
/* 420 */	
			0x13, 0x0,	/* FC_OP */
/* 422 */	NdrFcShort( 0x216 ),	/* Offset= 534 (956) */
/* 424 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 426 */	NdrFcShort( 0x18 ),	/* 24 */
/* 428 */	NdrFcShort( 0xa ),	/* 10 */
/* 430 */	NdrFcLong( 0x8 ),	/* 8 */
/* 434 */	NdrFcShort( 0x5a ),	/* Offset= 90 (524) */
/* 436 */	NdrFcLong( 0xd ),	/* 13 */
/* 440 */	NdrFcShort( 0x7e ),	/* Offset= 126 (566) */
/* 442 */	NdrFcLong( 0x9 ),	/* 9 */
/* 446 */	NdrFcShort( 0x9e ),	/* Offset= 158 (604) */
/* 448 */	NdrFcLong( 0xc ),	/* 12 */
/* 452 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (652) */
/* 454 */	NdrFcLong( 0x24 ),	/* 36 */
/* 458 */	NdrFcShort( 0x124 ),	/* Offset= 292 (750) */
/* 460 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 464 */	NdrFcShort( 0x140 ),	/* Offset= 320 (784) */
/* 466 */	NdrFcLong( 0x10 ),	/* 16 */
/* 470 */	NdrFcShort( 0x15a ),	/* Offset= 346 (816) */
/* 472 */	NdrFcLong( 0x2 ),	/* 2 */
/* 476 */	NdrFcShort( 0x174 ),	/* Offset= 372 (848) */
/* 478 */	NdrFcLong( 0x3 ),	/* 3 */
/* 482 */	NdrFcShort( 0x18e ),	/* Offset= 398 (880) */
/* 484 */	NdrFcLong( 0x14 ),	/* 20 */
/* 488 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (912) */
/* 490 */	NdrFcShort( 0xffff ),	/* Offset= -1 (489) */
/* 492 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 494 */	NdrFcShort( 0x4 ),	/* 4 */
/* 496 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 502 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 504 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 506 */	NdrFcShort( 0x4 ),	/* 4 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	0x13, 0x0,	/* FC_OP */
/* 518 */	NdrFcShort( 0xfe2a ),	/* Offset= -470 (48) */
/* 520 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 522 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 524 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 528 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 530 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 532 */	NdrFcShort( 0x4 ),	/* 4 */
/* 534 */	NdrFcShort( 0x4 ),	/* 4 */
/* 536 */	0x11, 0x0,	/* FC_RP */
/* 538 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (492) */
/* 540 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 542 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 544 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 554 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 558 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 560 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 562 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (398) */
/* 564 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 566 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x6 ),	/* Offset= 6 (578) */
/* 574 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 576 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 578 */	
			0x11, 0x0,	/* FC_RP */
/* 580 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (544) */
/* 582 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 592 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 596 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 598 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 600 */	NdrFcShort( 0xfdb2 ),	/* Offset= -590 (10) */
/* 602 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 604 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x6 ),	/* Offset= 6 (616) */
/* 612 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 614 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 616 */	
			0x11, 0x0,	/* FC_RP */
/* 618 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (582) */
/* 620 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 622 */	NdrFcShort( 0x4 ),	/* 4 */
/* 624 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 630 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 632 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 634 */	NdrFcShort( 0x4 ),	/* 4 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	0x13, 0x0,	/* FC_OP */
/* 646 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1048) */
/* 648 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 650 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 652 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x6 ),	/* Offset= 6 (664) */
/* 660 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 662 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 664 */	
			0x11, 0x0,	/* FC_RP */
/* 666 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (620) */
/* 668 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 670 */	NdrFcLong( 0x2f ),	/* 47 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 680 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 682 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 684 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 686 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 690 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 692 */	NdrFcShort( 0x4 ),	/* 4 */
/* 694 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 696 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 698 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 700 */	NdrFcShort( 0x10 ),	/* 16 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0xa ),	/* Offset= 10 (714) */
/* 706 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 708 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 710 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (668) */
/* 712 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 714 */	
			0x13, 0x0,	/* FC_OP */
/* 716 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (686) */
/* 718 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x4 ),	/* 4 */
/* 722 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 728 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 730 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 732 */	NdrFcShort( 0x4 ),	/* 4 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	0x13, 0x0,	/* FC_OP */
/* 744 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (698) */
/* 746 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 748 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 750 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x6 ),	/* Offset= 6 (762) */
/* 758 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 760 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 762 */	
			0x11, 0x0,	/* FC_RP */
/* 764 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (718) */
/* 766 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 772 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 774 */	NdrFcShort( 0x10 ),	/* 16 */
/* 776 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 778 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 780 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (766) */
			0x5b,		/* FC_END */
/* 784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 786 */	NdrFcShort( 0x18 ),	/* 24 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0xa ),	/* Offset= 10 (800) */
/* 792 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 794 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 796 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (772) */
/* 798 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 800 */	
			0x11, 0x0,	/* FC_RP */
/* 802 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (544) */
/* 804 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 808 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 814 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 816 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 820 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 822 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 824 */	NdrFcShort( 0x4 ),	/* 4 */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	0x13, 0x0,	/* FC_OP */
/* 830 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (804) */
/* 832 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 834 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 836 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 838 */	NdrFcShort( 0x2 ),	/* 2 */
/* 840 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 846 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 848 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 852 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 854 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 856 */	NdrFcShort( 0x4 ),	/* 4 */
/* 858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 860 */	0x13, 0x0,	/* FC_OP */
/* 862 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (836) */
/* 864 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 866 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 868 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x4 ),	/* 4 */
/* 872 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 878 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 880 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 886 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 888 */	NdrFcShort( 0x4 ),	/* 4 */
/* 890 */	NdrFcShort( 0x4 ),	/* 4 */
/* 892 */	0x13, 0x0,	/* FC_OP */
/* 894 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (868) */
/* 896 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 898 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 900 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 904 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 910 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 912 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 916 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 918 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 920 */	NdrFcShort( 0x4 ),	/* 4 */
/* 922 */	NdrFcShort( 0x4 ),	/* 4 */
/* 924 */	0x13, 0x0,	/* FC_OP */
/* 926 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (900) */
/* 928 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 930 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 932 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 936 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 938 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 940 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 946 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 948 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 950 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 952 */	NdrFcShort( 0xffec ),	/* Offset= -20 (932) */
/* 954 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 956 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 958 */	NdrFcShort( 0x28 ),	/* 40 */
/* 960 */	NdrFcShort( 0xffec ),	/* Offset= -20 (940) */
/* 962 */	NdrFcShort( 0x0 ),	/* Offset= 0 (962) */
/* 964 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 966 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 968 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 970 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (424) */
/* 972 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 974 */	
			0x13, 0x0,	/* FC_OP */
/* 976 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (698) */
/* 978 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 980 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 982 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 984 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 988 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 990 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 992 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 994 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 996 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 998 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1000 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1002 */	
			0x13, 0x0,	/* FC_OP */
/* 1004 */	NdrFcShort( 0xfd9c ),	/* Offset= -612 (392) */
/* 1006 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1008 */	NdrFcShort( 0xfc30 ),	/* Offset= -976 (32) */
/* 1010 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1012 */	NdrFcShort( 0xfd9a ),	/* Offset= -614 (398) */
/* 1014 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1016 */	NdrFcShort( 0xfc12 ),	/* Offset= -1006 (10) */
/* 1018 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1020 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (416) */
/* 1022 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1024 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1026) */
/* 1026 */	
			0x13, 0x0,	/* FC_OP */
/* 1028 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1048) */
/* 1030 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1032 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1034 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1036 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1038 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1040 */	
			0x13, 0x0,	/* FC_OP */
/* 1042 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1030) */
/* 1044 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1046 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1048 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1050 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1054) */
/* 1056 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1058 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1060 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1062 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1064 */	NdrFcShort( 0xfc36 ),	/* Offset= -970 (94) */
/* 1066 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1068 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1072 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0xfc26 ),	/* Offset= -986 (90) */
/* 1078 */	
			0x12, 0x0,	/* FC_UP */
/* 1080 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1048) */
/* 1082 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1086 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1078) */
/* 1092 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1094 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1098 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1100 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1104) */
/* 1104 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1106 */	NdrFcLong( 0x27634814 ),	/* 660817940 */
/* 1110 */	NdrFcShort( 0x8e41 ),	/* -29119 */
/* 1112 */	NdrFcShort( 0x4c35 ),	/* 19509 */
/* 1114 */	0x85,		/* 133 */
			0x77,		/* 119 */
/* 1116 */	0x98,		/* 152 */
			0x1,		/* 1 */
/* 1118 */	0x34,		/* 52 */
			0xa9,		/* 169 */
/* 1120 */	0x65,		/* 101 */
			0x44,		/* 68 */
/* 1122 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1124 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1126 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1128 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1130) */
/* 1130 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1132 */	NdrFcLong( 0x2e629606 ),	/* 778212870 */
/* 1136 */	NdrFcShort( 0x312a ),	/* 12586 */
/* 1138 */	NdrFcShort( 0x482f ),	/* 18479 */
/* 1140 */	0x9b,		/* 155 */
			0x12,		/* 18 */
/* 1142 */	0x2c,		/* 44 */
			0x4a,		/* 74 */
/* 1144 */	0xbf,		/* 191 */
			0x6f,		/* 111 */
/* 1146 */	0xb,		/* 11 */
			0x6d,		/* 109 */
/* 1148 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1150 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1152 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1154 */	NdrFcLong( 0x1c642ced ),	/* 476327149 */
/* 1158 */	NdrFcShort( 0xca3b ),	/* -13765 */
/* 1160 */	NdrFcShort( 0x4013 ),	/* 16403 */
/* 1162 */	0xa9,		/* 169 */
			0xdf,		/* 223 */
/* 1164 */	0xca,		/* 202 */
			0x6c,		/* 108 */
/* 1166 */	0xe5,		/* 229 */
			0xff,		/* 255 */
/* 1168 */	0x65,		/* 101 */
			0x3,		/* 3 */
/* 1170 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1172 */	NdrFcLong( 0x49d7563b ),	/* 1238849083 */
/* 1176 */	NdrFcShort( 0x2ddb ),	/* 11739 */
/* 1178 */	NdrFcShort( 0x4831 ),	/* 18481 */
/* 1180 */	0x88,		/* 136 */
			0xc8,		/* 200 */
/* 1182 */	0x76,		/* 118 */
			0x8a,		/* 138 */
/* 1184 */	0x53,		/* 83 */
			0x83,		/* 131 */
/* 1186 */	0x38,		/* 56 */
			0x37,		/* 55 */

			0x0
        }
    };

XFG_TRAMPOLINES(BSTR)
XFG_TRAMPOLINES(VARIANT)

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserFree)
            
            }
            ,
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserFree)
            
            }
            

        };



/* Standard interface: __MIDL_itf_google_update_idl_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IGoogleUpdate3, ver. 0.0,
   GUID={0x6DB17455,0x4E85,0x46e7,{0x9D,0x23,0xE5,0x55,0xE4,0xB0,0x05,0xAF}} */

#pragma code_seg(".orpc")
static const unsigned short IGoogleUpdate3_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    42,
    90
    };

static const MIDL_STUBLESS_PROXY_INFO IGoogleUpdate3_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdate3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGoogleUpdate3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdate3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IGoogleUpdate3ProxyVtbl = 
{
    &IGoogleUpdate3_ProxyInfo,
    &IID_IGoogleUpdate3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IGoogleUpdate3::get_Count */ ,
    (void *) (INT_PTR) -1 /* IGoogleUpdate3::get_Item */ ,
    (void *) (INT_PTR) -1 /* IGoogleUpdate3::createAppBundle */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IGoogleUpdate3_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IGoogleUpdate3StubVtbl =
{
    &IID_IGoogleUpdate3,
    &IGoogleUpdate3_ServerInfo,
    10,
    &IGoogleUpdate3_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppBundle, ver. 0.0,
   GUID={0xfe908cdd,0x22bb,0x472a,{0x98,0x70,0x1a,0x03,0x90,0xe4,0x2f,0x36}} */

#pragma code_seg(".orpc")
static const unsigned short IAppBundle_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    132,
    174,
    216,
    258,
    300,
    342,
    384,
    426,
    468,
    510,
    552,
    594,
    636,
    678,
    720,
    762,
    804,
    846,
    894,
    950,
    992,
    1026,
    1074,
    1122,
    1156,
    1190,
    1224,
    1258,
    1292,
    1326,
    1360,
    1394,
    1436,
    1484
    };

static const MIDL_STUBLESS_PROXY_INFO IAppBundle_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppBundle_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppBundle_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppBundle_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(41) _IAppBundleProxyVtbl = 
{
    &IAppBundle_ProxyInfo,
    &IID_IAppBundle,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_displayName */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_displayName */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_displayLanguage */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_displayLanguage */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_installSource */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_installSource */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_originURL */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_originURL */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_offlineDirectory */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_offlineDirectory */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_sessionId */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_sessionId */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_sendPings */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_sendPings */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_priority */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_priority */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_Count */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_Item */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_altTokens */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::put_parentHWND */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::initialize */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::createApp */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::createInstalledApp */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::createAllInstalledApps */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::checkForUpdate */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::download */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::install */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::updateAllApps */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::stop */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::pause */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::resume */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::isBusy */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::downloadPackage */ ,
    (void *) (INT_PTR) -1 /* IAppBundle::get_currentState */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAppBundle_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppBundleStubVtbl =
{
    &IID_IAppBundle,
    &IAppBundle_ServerInfo,
    41,
    &IAppBundle_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IApp, ver. 0.0,
   GUID={0x76F7B787,0xA67C,0x4c73,{0x82,0xC7,0x31,0xF5,0xE3,0xAA,0xBC,0x5C}} */

#pragma code_seg(".orpc")
static const unsigned short IApp_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1526,
    1568,
    216,
    1610,
    1652,
    1694,
    1736,
    1778,
    1820,
    1862,
    1904,
    1946,
    1988,
    2030,
    2072,
    2114,
    2156,
    2198,
    2240,
    2282,
    2324,
    1026,
    2366,
    2408,
    2450,
    2492,
    2534,
    2576,
    2618,
    2660,
    2702,
    2744,
    2786,
    2828
    };

static const MIDL_STUBLESS_PROXY_INFO IApp_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IApp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IApp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IApp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(41) _IAppProxyVtbl = 
{
    &IApp_ProxyInfo,
    &IID_IApp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IApp::get_currentVersion */ ,
    (void *) (INT_PTR) -1 /* IApp::get_nextVersion */ ,
    (void *) (INT_PTR) -1 /* IApp::get_appId */ ,
    (void *) (INT_PTR) -1 /* IApp::get_displayName */ ,
    (void *) (INT_PTR) -1 /* IApp::put_displayName */ ,
    (void *) (INT_PTR) -1 /* IApp::get_language */ ,
    (void *) (INT_PTR) -1 /* IApp::put_language */ ,
    (void *) (INT_PTR) -1 /* IApp::get_ap */ ,
    (void *) (INT_PTR) -1 /* IApp::put_ap */ ,
    (void *) (INT_PTR) -1 /* IApp::get_ttToken */ ,
    (void *) (INT_PTR) -1 /* IApp::put_ttToken */ ,
    (void *) (INT_PTR) -1 /* IApp::get_iid */ ,
    (void *) (INT_PTR) -1 /* IApp::put_iid */ ,
    (void *) (INT_PTR) -1 /* IApp::get_brandCode */ ,
    (void *) (INT_PTR) -1 /* IApp::put_brandCode */ ,
    (void *) (INT_PTR) -1 /* IApp::get_clientId */ ,
    (void *) (INT_PTR) -1 /* IApp::put_clientId */ ,
    (void *) (INT_PTR) -1 /* IApp::get_labels */ ,
    (void *) (INT_PTR) -1 /* IApp::put_labels */ ,
    (void *) (INT_PTR) -1 /* IApp::get_referralId */ ,
    (void *) (INT_PTR) -1 /* IApp::put_referralId */ ,
    (void *) (INT_PTR) -1 /* IApp::get_command */ ,
    (void *) (INT_PTR) -1 /* IApp::get_browserType */ ,
    (void *) (INT_PTR) -1 /* IApp::put_browserType */ ,
    (void *) (INT_PTR) -1 /* IApp::get_clientInstallData */ ,
    (void *) (INT_PTR) -1 /* IApp::put_clientInstallData */ ,
    (void *) (INT_PTR) -1 /* IApp::get_serverInstallDataIndex */ ,
    (void *) (INT_PTR) -1 /* IApp::put_serverInstallDataIndex */ ,
    (void *) (INT_PTR) -1 /* IApp::get_isEulaAccepted */ ,
    (void *) (INT_PTR) -1 /* IApp::put_isEulaAccepted */ ,
    (void *) (INT_PTR) -1 /* IApp::get_usageStatsEnable */ ,
    (void *) (INT_PTR) -1 /* IApp::put_usageStatsEnable */ ,
    (void *) (INT_PTR) -1 /* IApp::get_installTimeDiffSec */ ,
    (void *) (INT_PTR) -1 /* IApp::get_currentState */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IApp_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppStubVtbl =
{
    &IID_IApp,
    &IApp_ServerInfo,
    41,
    &IApp_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IApp2, ver. 0.0,
   GUID={0x084D78A8,0xB084,0x4E14,{0xA6,0x29,0xA2,0xC4,0x19,0xB0,0xE3,0xD9}} */

#pragma code_seg(".orpc")
static const unsigned short IApp2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1526,
    1568,
    216,
    1610,
    1652,
    1694,
    1736,
    1778,
    1820,
    1862,
    1904,
    1946,
    1988,
    2030,
    2072,
    2114,
    2156,
    2198,
    2240,
    2282,
    2324,
    1026,
    2366,
    2408,
    2450,
    2492,
    2534,
    2576,
    2618,
    2660,
    2702,
    2744,
    2786,
    2828,
    2870,
    2912
    };

static const MIDL_STUBLESS_PROXY_INFO IApp2_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IApp2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IApp2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IApp2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(43) _IApp2ProxyVtbl = 
{
    &IApp2_ProxyInfo,
    &IID_IApp2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IApp::get_currentVersion */ ,
    (void *) (INT_PTR) -1 /* IApp::get_nextVersion */ ,
    (void *) (INT_PTR) -1 /* IApp::get_appId */ ,
    (void *) (INT_PTR) -1 /* IApp::get_displayName */ ,
    (void *) (INT_PTR) -1 /* IApp::put_displayName */ ,
    (void *) (INT_PTR) -1 /* IApp::get_language */ ,
    (void *) (INT_PTR) -1 /* IApp::put_language */ ,
    (void *) (INT_PTR) -1 /* IApp::get_ap */ ,
    (void *) (INT_PTR) -1 /* IApp::put_ap */ ,
    (void *) (INT_PTR) -1 /* IApp::get_ttToken */ ,
    (void *) (INT_PTR) -1 /* IApp::put_ttToken */ ,
    (void *) (INT_PTR) -1 /* IApp::get_iid */ ,
    (void *) (INT_PTR) -1 /* IApp::put_iid */ ,
    (void *) (INT_PTR) -1 /* IApp::get_brandCode */ ,
    (void *) (INT_PTR) -1 /* IApp::put_brandCode */ ,
    (void *) (INT_PTR) -1 /* IApp::get_clientId */ ,
    (void *) (INT_PTR) -1 /* IApp::put_clientId */ ,
    (void *) (INT_PTR) -1 /* IApp::get_labels */ ,
    (void *) (INT_PTR) -1 /* IApp::put_labels */ ,
    (void *) (INT_PTR) -1 /* IApp::get_referralId */ ,
    (void *) (INT_PTR) -1 /* IApp::put_referralId */ ,
    (void *) (INT_PTR) -1 /* IApp::get_command */ ,
    (void *) (INT_PTR) -1 /* IApp::get_browserType */ ,
    (void *) (INT_PTR) -1 /* IApp::put_browserType */ ,
    (void *) (INT_PTR) -1 /* IApp::get_clientInstallData */ ,
    (void *) (INT_PTR) -1 /* IApp::put_clientInstallData */ ,
    (void *) (INT_PTR) -1 /* IApp::get_serverInstallDataIndex */ ,
    (void *) (INT_PTR) -1 /* IApp::put_serverInstallDataIndex */ ,
    (void *) (INT_PTR) -1 /* IApp::get_isEulaAccepted */ ,
    (void *) (INT_PTR) -1 /* IApp::put_isEulaAccepted */ ,
    (void *) (INT_PTR) -1 /* IApp::get_usageStatsEnable */ ,
    (void *) (INT_PTR) -1 /* IApp::put_usageStatsEnable */ ,
    (void *) (INT_PTR) -1 /* IApp::get_installTimeDiffSec */ ,
    (void *) (INT_PTR) -1 /* IApp::get_currentState */ ,
    (void *) (INT_PTR) -1 /* IApp2::get_untrustedData */ ,
    (void *) (INT_PTR) -1 /* IApp2::put_untrustedData */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IApp2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IApp2StubVtbl =
{
    &IID_IApp2,
    &IApp2_ServerInfo,
    43,
    &IApp2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppCommand, ver. 0.0,
   GUID={0x4DE778FE,0xF195,0x4ee3,{0x9D,0xAB,0xFE,0x44,0x6C,0x23,0x92,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short IAppCommand_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2954,
    2996,
    3038,
    3080
    };

static const MIDL_STUBLESS_PROXY_INFO IAppCommand_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppCommand_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppCommand_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppCommand_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IAppCommandProxyVtbl = 
{
    &IAppCommand_ProxyInfo,
    &IID_IAppCommand,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppCommand::get_isWebAccessible */ ,
    (void *) (INT_PTR) -1 /* IAppCommand::get_status */ ,
    (void *) (INT_PTR) -1 /* IAppCommand::get_exitCode */ ,
    (void *) (INT_PTR) -1 /* IAppCommand::execute */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAppCommand_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppCommandStubVtbl =
{
    &IID_IAppCommand,
    &IAppCommand_ServerInfo,
    11,
    &IAppCommand_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppCommand2, ver. 0.0,
   GUID={0x3D05F64F,0x71E3,0x48A5,{0xBF,0x6B,0x83,0x31,0x5B,0xC8,0xAE,0x1F}} */

#pragma code_seg(".orpc")
static const unsigned short IAppCommand2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2954,
    2996,
    3038,
    3080,
    300
    };

static const MIDL_STUBLESS_PROXY_INFO IAppCommand2_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppCommand2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppCommand2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppCommand2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IAppCommand2ProxyVtbl = 
{
    &IAppCommand2_ProxyInfo,
    &IID_IAppCommand2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppCommand::get_isWebAccessible */ ,
    (void *) (INT_PTR) -1 /* IAppCommand::get_status */ ,
    (void *) (INT_PTR) -1 /* IAppCommand::get_exitCode */ ,
    (void *) (INT_PTR) -1 /* IAppCommand::execute */ ,
    (void *) (INT_PTR) -1 /* IAppCommand2::get_output */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAppCommand2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppCommand2StubVtbl =
{
    &IID_IAppCommand2,
    &IAppCommand2_ServerInfo,
    12,
    &IAppCommand2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppVersion, ver. 0.0,
   GUID={0xBCDCB538,0x01C0,0x46d1,{0xA6,0xA7,0x52,0xF4,0xD0,0x21,0xC2,0x72}} */

#pragma code_seg(".orpc")
static const unsigned short IAppVersion_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    132,
    2996,
    3176
    };

static const MIDL_STUBLESS_PROXY_INFO IAppVersion_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppVersion_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppVersion_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppVersion_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IAppVersionProxyVtbl = 
{
    &IAppVersion_ProxyInfo,
    &IID_IAppVersion,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppVersion::get_version */ ,
    (void *) (INT_PTR) -1 /* IAppVersion::get_packageCount */ ,
    (void *) (INT_PTR) -1 /* IAppVersion::get_package */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAppVersion_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppVersionStubVtbl =
{
    &IID_IAppVersion,
    &IAppVersion_ServerInfo,
    10,
    &IAppVersion_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPackage, ver. 0.0,
   GUID={0xDCAB8386,0x4F03,0x4dbd,{0xA3,0x66,0xD9,0x0B,0xC9,0xF6,0x8D,0xE6}} */

#pragma code_seg(".orpc")
static const unsigned short IPackage_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3224,
    3266,
    216
    };

static const MIDL_STUBLESS_PROXY_INFO IPackage_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IPackage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPackage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IPackage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IPackageProxyVtbl = 
{
    &IPackage_ProxyInfo,
    &IID_IPackage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPackage::get */ ,
    (void *) (INT_PTR) -1 /* IPackage::get_isAvailable */ ,
    (void *) (INT_PTR) -1 /* IPackage::get_filename */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPackage_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPackageStubVtbl =
{
    &IID_IPackage,
    &IPackage_ServerInfo,
    10,
    &IPackage_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ICurrentState, ver. 0.0,
   GUID={0x247954F9,0x9EDC,0x4E68,{0x8C,0xC3,0x15,0x0C,0x2B,0x89,0xEA,0xDF}} */

#pragma code_seg(".orpc")
static const unsigned short ICurrentState_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    3308,
    3038,
    3350,
    3392,
    3434,
    3476,
    3518,
    3560,
    3602,
    3644,
    1946,
    3686,
    3728,
    3770,
    2114,
    804
    };

static const MIDL_STUBLESS_PROXY_INFO ICurrentState_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &ICurrentState_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICurrentState_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &ICurrentState_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _ICurrentStateProxyVtbl = 
{
    &ICurrentState_ProxyInfo,
    &IID_ICurrentState,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_stateValue */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_availableVersion */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_bytesDownloaded */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_totalBytesToDownload */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_downloadTimeRemainingMs */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_nextRetryTime */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_installProgress */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_installTimeRemainingMs */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_isCanceled */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_errorCode */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_extraCode1 */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_completionMessage */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_installerResultCode */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_installerResultExtraCode1 */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_postInstallLaunchCommandLine */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_postInstallUrl */ ,
    (void *) (INT_PTR) -1 /* ICurrentState::get_postInstallAction */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION ICurrentState_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICurrentStateStubVtbl =
{
    &IID_ICurrentState,
    &ICurrentState_ServerInfo,
    24,
    &ICurrentState_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IRegistrationUpdateHook, ver. 0.0,
   GUID={0x4E223325,0xC16B,0x4eeb,{0xAE,0xDC,0x19,0xAA,0x99,0xA2,0x37,0xFA}} */

#pragma code_seg(".orpc")
static const unsigned short IRegistrationUpdateHook_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3812
    };

static const MIDL_STUBLESS_PROXY_INFO IRegistrationUpdateHook_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IRegistrationUpdateHook_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IRegistrationUpdateHook_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IRegistrationUpdateHook_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IRegistrationUpdateHookProxyVtbl = 
{
    &IRegistrationUpdateHook_ProxyInfo,
    &IID_IRegistrationUpdateHook,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IRegistrationUpdateHook::UpdateRegistry */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IRegistrationUpdateHook_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IRegistrationUpdateHookStubVtbl =
{
    &IID_IRegistrationUpdateHook,
    &IRegistrationUpdateHook_ServerInfo,
    8,
    &IRegistrationUpdateHook_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ICredentialDialog, ver. 0.0,
   GUID={0xb3a47570,0x0a85,0x4aea,{0x82,0x70,0x52,0x9d,0x47,0x89,0x96,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short ICredentialDialog_FormatStringOffsetTable[] =
    {
    3860
    };

static const MIDL_STUBLESS_PROXY_INFO ICredentialDialog_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &ICredentialDialog_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICredentialDialog_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &ICredentialDialog_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ICredentialDialogProxyVtbl = 
{
    &ICredentialDialog_ProxyInfo,
    &IID_ICredentialDialog,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ICredentialDialog::QueryUserForCredentials */
};

const CInterfaceStubVtbl _ICredentialDialogStubVtbl =
{
    &IID_ICredentialDialog,
    &ICredentialDialog_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPolicyStatus, ver. 0.0,
   GUID={0xF63F6F8B,0xACD5,0x413C,{0xA4,0x4B,0x04,0x09,0x13,0x6D,0x26,0xCB}} */

#pragma code_seg(".orpc")
static const unsigned short IPolicyStatus_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    3930,
    216,
    3350,
    3392,
    3992,
    4040,
    4088,
    4136
    };

static const MIDL_STUBLESS_PROXY_INFO IPolicyStatus_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IPolicyStatus_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPolicyStatus_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IPolicyStatus_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) _IPolicyStatusProxyVtbl = 
{
    &IPolicyStatus_ProxyInfo,
    &IID_IPolicyStatus,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus::get_lastCheckPeriodMinutes */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus::get_updatesSuppressedTimes */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus::get_downloadPreferenceGroupPolicy */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus::get_packageCacheSizeLimitMBytes */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus::get_packageCacheExpirationTimeDays */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus::get_effectivePolicyForAppInstalls */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus::get_effectivePolicyForAppUpdates */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus::get_targetVersionPrefix */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus::get_isRollbackToTargetVersionAllowed */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPolicyStatus_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPolicyStatusStubVtbl =
{
    &IID_IPolicyStatus,
    &IPolicyStatus_ServerInfo,
    16,
    &IPolicyStatus_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPolicyStatusValue, ver. 0.0,
   GUID={0x27634814,0x8E41,0x4C35,{0x85,0x77,0x98,0x01,0x34,0xA9,0x65,0x44}} */

#pragma code_seg(".orpc")
static const unsigned short IPolicyStatusValue_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    132,
    3308,
    4184,
    1610,
    300
    };

static const MIDL_STUBLESS_PROXY_INFO IPolicyStatusValue_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IPolicyStatusValue_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPolicyStatusValue_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IPolicyStatusValue_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IPolicyStatusValueProxyVtbl = 
{
    &IPolicyStatusValue_ProxyInfo,
    &IID_IPolicyStatusValue,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatusValue::get_source */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatusValue::get_value */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatusValue::get_hasConflict */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatusValue::get_conflictSource */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatusValue::get_conflictValue */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPolicyStatusValue_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPolicyStatusValueStubVtbl =
{
    &IID_IPolicyStatusValue,
    &IPolicyStatusValue_ServerInfo,
    12,
    &IPolicyStatusValue_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPolicyStatus2, ver. 0.0,
   GUID={0x34527502,0xD3DB,0x4205,{0xA6,0x9B,0x78,0x9B,0x27,0xEE,0x04,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short IPolicyStatus2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    132,
    4226,
    4268,
    4302,
    4344,
    4392,
    4434,
    4476,
    4518,
    4560,
    4602,
    4644,
    4692,
    4740,
    4788,
    4836
    };

static const MIDL_STUBLESS_PROXY_INFO IPolicyStatus2_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IPolicyStatus2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPolicyStatus2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IPolicyStatus2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IPolicyStatus2ProxyVtbl = 
{
    &IPolicyStatus2_ProxyInfo,
    &IID_IPolicyStatus2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_updaterVersion */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_lastCheckedTime */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::refreshPolicies */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_lastCheckPeriodMinutes */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_updatesSuppressedTimes */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_downloadPreferenceGroupPolicy */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_packageCacheSizeLimitMBytes */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_packageCacheExpirationTimeDays */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_proxyMode */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_proxyPacUrl */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_proxyServer */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_effectivePolicyForAppInstalls */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_effectivePolicyForAppUpdates */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_targetVersionPrefix */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_isRollbackToTargetVersionAllowed */ ,
    (void *) (INT_PTR) -1 /* IPolicyStatus2::get_targetChannel */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPolicyStatus2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPolicyStatus2StubVtbl =
{
    &IID_IPolicyStatus2,
    &IPolicyStatus2_ServerInfo,
    23,
    &IPolicyStatus2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IGoogleUpdate3Web, ver. 0.0,
   GUID={0x494B20CF,0x282E,0x4BDD,{0x9F,0x5D,0xB7,0x0C,0xB0,0x9D,0x35,0x1E}} */

#pragma code_seg(".orpc")
static const unsigned short IGoogleUpdate3Web_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1526
    };

static const MIDL_STUBLESS_PROXY_INFO IGoogleUpdate3Web_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdate3Web_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGoogleUpdate3Web_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdate3Web_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IGoogleUpdate3WebProxyVtbl = 
{
    &IGoogleUpdate3Web_ProxyInfo,
    &IID_IGoogleUpdate3Web,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IGoogleUpdate3Web::createAppBundleWeb */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IGoogleUpdate3Web_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IGoogleUpdate3WebStubVtbl =
{
    &IID_IGoogleUpdate3Web,
    &IGoogleUpdate3Web_ServerInfo,
    8,
    &IGoogleUpdate3Web_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IGoogleUpdate3WebSecurity, ver. 0.0,
   GUID={0x2D363682,0x561D,0x4c3a,{0x81,0xC6,0xF2,0xF8,0x21,0x07,0x56,0x2A}} */

#pragma code_seg(".orpc")
static const unsigned short IGoogleUpdate3WebSecurity_FormatStringOffsetTable[] =
    {
    4884
    };

static const MIDL_STUBLESS_PROXY_INFO IGoogleUpdate3WebSecurity_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdate3WebSecurity_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGoogleUpdate3WebSecurity_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdate3WebSecurity_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IGoogleUpdate3WebSecurityProxyVtbl = 
{
    &IGoogleUpdate3WebSecurity_ProxyInfo,
    &IID_IGoogleUpdate3WebSecurity,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IGoogleUpdate3WebSecurity::setOriginURL */
};

const CInterfaceStubVtbl _IGoogleUpdate3WebSecurityStubVtbl =
{
    &IID_IGoogleUpdate3WebSecurity,
    &IGoogleUpdate3WebSecurity_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAppBundleWeb, ver. 0.0,
   GUID={0xDD42475D,0x6D46,0x496a,{0x92,0x4E,0xBD,0x56,0x30,0xB4,0xCB,0xBA}} */

#pragma code_seg(".orpc")
static const unsigned short IAppBundleWeb_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4926,
    174,
    4268,
    1610,
    1652,
    4988,
    3476,
    5030,
    5078,
    5112,
    5146,
    5180,
    5214,
    5248,
    5282,
    5316,
    5364
    };

static const MIDL_STUBLESS_PROXY_INFO IAppBundleWeb_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppBundleWeb_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppBundleWeb_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppBundleWeb_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _IAppBundleWebProxyVtbl = 
{
    &IAppBundleWeb_ProxyInfo,
    &IID_IAppBundleWeb,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::createApp */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::createInstalledApp */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::createAllInstalledApps */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::get_displayLanguage */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::put_displayLanguage */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::put_parentHWND */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::get_length */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::get_appWeb */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::initialize */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::checkForUpdate */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::download */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::install */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::pause */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::resume */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::cancel */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::downloadPackage */ ,
    (void *) (INT_PTR) -1 /* IAppBundleWeb::get_currentState */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAppBundleWeb_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppBundleWebStubVtbl =
{
    &IID_IAppBundleWeb,
    &IAppBundleWeb_ServerInfo,
    24,
    &IAppBundleWeb_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppWeb, ver. 0.0,
   GUID={0x18D0F672,0x18B4,0x48e6,{0xAD,0x36,0x6E,0x6B,0xF0,0x1D,0xBB,0xC4}} */

#pragma code_seg(".orpc")
static const unsigned short IAppWeb_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    132,
    1568,
    90,
    5406,
    5454,
    5488,
    5530,
    5564,
    468,
    510
    };

static const MIDL_STUBLESS_PROXY_INFO IAppWeb_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppWeb_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppWeb_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppWeb_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _IAppWebProxyVtbl = 
{
    &IAppWeb_ProxyInfo,
    &IID_IAppWeb,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::get_appId */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::get_currentVersionWeb */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::get_nextVersionWeb */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::get_command */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::cancel */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::get_currentState */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::launch */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::uninstall */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::get_serverInstallDataIndex */ ,
    (void *) (INT_PTR) -1 /* IAppWeb::put_serverInstallDataIndex */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAppWeb_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppWebStubVtbl =
{
    &IID_IAppWeb,
    &IAppWeb_ServerInfo,
    17,
    &IAppWeb_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppCommandWeb, ver. 0.0,
   GUID={0x8476CE12,0xAE1F,0x4198,{0x80,0x5C,0xBA,0x0F,0x9B,0x78,0x3F,0x57}} */

#pragma code_seg(".orpc")
static const unsigned short IAppCommandWeb_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    2996,
    216,
    3080
    };

static const MIDL_STUBLESS_PROXY_INFO IAppCommandWeb_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppCommandWeb_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppCommandWeb_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppCommandWeb_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IAppCommandWebProxyVtbl = 
{
    &IAppCommandWeb_ProxyInfo,
    &IID_IAppCommandWeb,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppCommandWeb::get_status */ ,
    (void *) (INT_PTR) -1 /* IAppCommandWeb::get_exitCode */ ,
    (void *) (INT_PTR) -1 /* IAppCommandWeb::get_output */ ,
    (void *) (INT_PTR) -1 /* IAppCommandWeb::execute */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAppCommandWeb_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppCommandWebStubVtbl =
{
    &IID_IAppCommandWeb,
    &IAppCommandWeb_ServerInfo,
    11,
    &IAppCommandWeb_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppVersionWeb, ver. 0.0,
   GUID={0x0CD01D1E,0x4A1C,0x489d,{0x93,0xB9,0x9B,0x66,0x72,0x87,0x7C,0x57}} */

#pragma code_seg(".orpc")
static const unsigned short IAppVersionWeb_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    132,
    2996,
    3176
    };

static const MIDL_STUBLESS_PROXY_INFO IAppVersionWeb_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppVersionWeb_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppVersionWeb_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IAppVersionWeb_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IAppVersionWebProxyVtbl = 
{
    &IAppVersionWeb_ProxyInfo,
    &IID_IAppVersionWeb,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppVersionWeb::get_version */ ,
    (void *) (INT_PTR) -1 /* IAppVersionWeb::get_packageCount */ ,
    (void *) (INT_PTR) -1 /* IAppVersionWeb::get_packageWeb */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAppVersionWeb_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppVersionWebStubVtbl =
{
    &IID_IAppVersionWeb,
    &IAppVersionWeb_ServerInfo,
    10,
    &IAppVersionWeb_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ICoCreateAsyncStatus, ver. 0.0,
   GUID={0x2E629606,0x312A,0x482f,{0x9B,0x12,0x2C,0x4A,0xBF,0x6F,0x0B,0x6D}} */

#pragma code_seg(".orpc")
static const unsigned short ICoCreateAsyncStatus_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2954,
    2996,
    90
    };

static const MIDL_STUBLESS_PROXY_INFO ICoCreateAsyncStatus_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &ICoCreateAsyncStatus_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICoCreateAsyncStatus_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &ICoCreateAsyncStatus_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _ICoCreateAsyncStatusProxyVtbl = 
{
    &ICoCreateAsyncStatus_ProxyInfo,
    &IID_ICoCreateAsyncStatus,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ICoCreateAsyncStatus::get_isDone */ ,
    (void *) (INT_PTR) -1 /* ICoCreateAsyncStatus::get_completionHResult */ ,
    (void *) (INT_PTR) -1 /* ICoCreateAsyncStatus::get_createdInstance */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION ICoCreateAsyncStatus_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICoCreateAsyncStatusStubVtbl =
{
    &IID_ICoCreateAsyncStatus,
    &ICoCreateAsyncStatus_ServerInfo,
    10,
    &ICoCreateAsyncStatus_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ICoCreateAsync, ver. 0.0,
   GUID={0xDAB1D343,0x1B2A,0x47f9,{0xB4,0x45,0x93,0xDC,0x50,0x70,0x4B,0xFE}} */

#pragma code_seg(".orpc")
static const unsigned short ICoCreateAsync_FormatStringOffsetTable[] =
    {
    5598
    };

static const MIDL_STUBLESS_PROXY_INFO ICoCreateAsync_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &ICoCreateAsync_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICoCreateAsync_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &ICoCreateAsync_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ICoCreateAsyncProxyVtbl = 
{
    &ICoCreateAsync_ProxyInfo,
    &IID_ICoCreateAsync,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ICoCreateAsync::createOmahaMachineServerAsync */
};

const CInterfaceStubVtbl _ICoCreateAsyncStubVtbl =
{
    &IID_ICoCreateAsync,
    &ICoCreateAsync_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IBrowserHttpRequest2, ver. 0.0,
   GUID={0x5B25A8DC,0x1780,0x4178,{0xA6,0x29,0x6B,0xE8,0xB8,0xDE,0xFA,0xA2}} */

#pragma code_seg(".orpc")
static const unsigned short IBrowserHttpRequest2_FormatStringOffsetTable[] =
    {
    5654
    };

static const MIDL_STUBLESS_PROXY_INFO IBrowserHttpRequest2_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IBrowserHttpRequest2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IBrowserHttpRequest2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IBrowserHttpRequest2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IBrowserHttpRequest2ProxyVtbl = 
{
    &IBrowserHttpRequest2_ProxyInfo,
    &IID_IBrowserHttpRequest2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IBrowserHttpRequest2::Send */
};

const CInterfaceStubVtbl _IBrowserHttpRequest2StubVtbl =
{
    &IID_IBrowserHttpRequest2,
    &IBrowserHttpRequest2_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IProcessLauncher, ver. 0.0,
   GUID={0x128C2DA6,0x2BC0,0x44c0,{0xB3,0xF6,0x4E,0xC2,0x2E,0x64,0x79,0x64}} */

#pragma code_seg(".orpc")
static const unsigned short IProcessLauncher_FormatStringOffsetTable[] =
    {
    5738,
    5780,
    5828
    };

static const MIDL_STUBLESS_PROXY_INFO IProcessLauncher_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IProcessLauncher_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IProcessLauncher_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IProcessLauncher_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IProcessLauncherProxyVtbl = 
{
    &IProcessLauncher_ProxyInfo,
    &IID_IProcessLauncher,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IProcessLauncher::LaunchCmdLine */ ,
    (void *) (INT_PTR) -1 /* IProcessLauncher::LaunchBrowser */ ,
    (void *) (INT_PTR) -1 /* IProcessLauncher::LaunchCmdElevated */
};

const CInterfaceStubVtbl _IProcessLauncherStubVtbl =
{
    &IID_IProcessLauncher,
    &IProcessLauncher_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IProcessLauncher2, ver. 0.0,
   GUID={0xD106AB5F,0xA70E,0x400E,{0xA2,0x1B,0x96,0x20,0x8C,0x1D,0x8D,0xBB}} */

#pragma code_seg(".orpc")
static const unsigned short IProcessLauncher2_FormatStringOffsetTable[] =
    {
    5738,
    5780,
    5828,
    5890
    };

static const MIDL_STUBLESS_PROXY_INFO IProcessLauncher2_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IProcessLauncher2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IProcessLauncher2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IProcessLauncher2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IProcessLauncher2ProxyVtbl = 
{
    &IProcessLauncher2_ProxyInfo,
    &IID_IProcessLauncher2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IProcessLauncher::LaunchCmdLine */ ,
    (void *) (INT_PTR) -1 /* IProcessLauncher::LaunchBrowser */ ,
    (void *) (INT_PTR) -1 /* IProcessLauncher::LaunchCmdElevated */ ,
    (void *) (INT_PTR) -1 /* IProcessLauncher2::LaunchCmdLineEx */
};

const CInterfaceStubVtbl _IProcessLauncher2StubVtbl =
{
    &IID_IProcessLauncher2,
    &IProcessLauncher2_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_google_update_idl_0000_0025, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IProgressWndEvents, ver. 0.0,
   GUID={0x1C642CED,0xCA3B,0x4013,{0xA9,0xDF,0xCA,0x6C,0xE5,0xFF,0x65,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short IProgressWndEvents_FormatStringOffsetTable[] =
    {
    5952,
    5986,
    6020,
    6054,
    6088,
    6122
    };

static const MIDL_STUBLESS_PROXY_INFO IProgressWndEvents_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IProgressWndEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IProgressWndEvents_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IProgressWndEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IProgressWndEventsProxyVtbl = 
{
    &IProgressWndEvents_ProxyInfo,
    &IID_IProgressWndEvents,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IProgressWndEvents::DoClose */ ,
    (void *) (INT_PTR) -1 /* IProgressWndEvents::DoPause */ ,
    (void *) (INT_PTR) -1 /* IProgressWndEvents::DoResume */ ,
    (void *) (INT_PTR) -1 /* IProgressWndEvents::DoRestartBrowsers */ ,
    (void *) (INT_PTR) -1 /* IProgressWndEvents::DoReboot */ ,
    (void *) (INT_PTR) -1 /* IProgressWndEvents::DoLaunchBrowser */
};

const CInterfaceStubVtbl _IProgressWndEventsStubVtbl =
{
    &IID_IProgressWndEvents,
    &IProgressWndEvents_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IJobObserver, ver. 0.0,
   GUID={0x49D7563B,0x2DDB,0x4831,{0x88,0xC8,0x76,0x8A,0x53,0x83,0x38,0x37}} */

#pragma code_seg(".orpc")
static const unsigned short IJobObserver_FormatStringOffsetTable[] =
    {
    5952,
    5986,
    6164,
    6054,
    6206,
    6254,
    4268,
    6288,
    6322,
    6370
    };

static const MIDL_STUBLESS_PROXY_INFO IJobObserver_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IJobObserver_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IJobObserver_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IJobObserver_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IJobObserverProxyVtbl = 
{
    &IJobObserver_ProxyInfo,
    &IID_IJobObserver,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IJobObserver::OnShow */ ,
    (void *) (INT_PTR) -1 /* IJobObserver::OnCheckingForUpdate */ ,
    (void *) (INT_PTR) -1 /* IJobObserver::OnUpdateAvailable */ ,
    (void *) (INT_PTR) -1 /* IJobObserver::OnWaitingToDownload */ ,
    (void *) (INT_PTR) -1 /* IJobObserver::OnDownloading */ ,
    (void *) (INT_PTR) -1 /* IJobObserver::OnWaitingToInstall */ ,
    (void *) (INT_PTR) -1 /* IJobObserver::OnInstalling */ ,
    (void *) (INT_PTR) -1 /* IJobObserver::OnPause */ ,
    (void *) (INT_PTR) -1 /* IJobObserver::OnComplete */ ,
    (void *) (INT_PTR) -1 /* IJobObserver::SetEventSink */
};

const CInterfaceStubVtbl _IJobObserverStubVtbl =
{
    &IID_IJobObserver,
    &IJobObserver_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IJobObserver2, ver. 0.0,
   GUID={0x19692F10,0xADD2,0x4EFF,{0xBE,0x54,0xE6,0x1C,0x62,0xE4,0x0D,0x13}} */

#pragma code_seg(".orpc")
static const unsigned short IJobObserver2_FormatStringOffsetTable[] =
    {
    6412
    };

static const MIDL_STUBLESS_PROXY_INFO IJobObserver2_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IJobObserver2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IJobObserver2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IJobObserver2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IJobObserver2ProxyVtbl = 
{
    &IJobObserver2_ProxyInfo,
    &IID_IJobObserver2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IJobObserver2::OnInstalling2 */
};

const CInterfaceStubVtbl _IJobObserver2StubVtbl =
{
    &IID_IJobObserver2,
    &IJobObserver2_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IGoogleUpdate, ver. 0.0,
   GUID={0x31AC3F11,0xE5EA,0x4a85,{0x8A,0x3D,0x8E,0x09,0x5A,0x39,0xC2,0x7B}} */

#pragma code_seg(".orpc")
static const unsigned short IGoogleUpdate_FormatStringOffsetTable[] =
    {
    6460,
    6508
    };

static const MIDL_STUBLESS_PROXY_INFO IGoogleUpdate_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdate_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGoogleUpdate_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdate_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IGoogleUpdateProxyVtbl = 
{
    &IGoogleUpdate_ProxyInfo,
    &IID_IGoogleUpdate,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IGoogleUpdate::CheckForUpdate */ ,
    (void *) (INT_PTR) -1 /* IGoogleUpdate::Update */
};

const CInterfaceStubVtbl _IGoogleUpdateStubVtbl =
{
    &IID_IGoogleUpdate,
    &IGoogleUpdate_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IGoogleUpdateCore, ver. 0.0,
   GUID={0x909489C2,0x85A6,0x4322,{0xAA,0x56,0xD2,0x52,0x78,0x64,0x9D,0x67}} */

#pragma code_seg(".orpc")
static const unsigned short IGoogleUpdateCore_FormatStringOffsetTable[] =
    {
    6556
    };

static const MIDL_STUBLESS_PROXY_INFO IGoogleUpdateCore_ProxyInfo =
    {
    &Object_StubDesc,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdateCore_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGoogleUpdateCore_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    google_update_idl__MIDL_ProcFormatString.Format,
    &IGoogleUpdateCore_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IGoogleUpdateCoreProxyVtbl = 
{
    &IGoogleUpdateCore_ProxyInfo,
    &IID_IGoogleUpdateCore,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IGoogleUpdateCore::LaunchCmdElevated */
};

const CInterfaceStubVtbl _IGoogleUpdateCoreStubVtbl =
{
    &IID_IGoogleUpdateCore,
    &IGoogleUpdateCore_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#ifdef __cplusplus
namespace {
#endif
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
    google_update_idl__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _google_update_idl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IPolicyStatus2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICoCreateAsyncStatusProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IJobObserver2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGoogleUpdateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppCommandWebProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPolicyStatusValueProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppVersionWebProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRegistrationUpdateHookProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppVersionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IJobObserverProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICoCreateAsyncProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppCommand2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGoogleUpdate3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppBundleWebProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IProcessLauncher2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICredentialDialogProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppWebProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGoogleUpdate3WebSecurityProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPackageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPolicyStatusProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IProcessLauncherProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IApp2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGoogleUpdateCoreProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGoogleUpdate3WebProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBrowserHttpRequest2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppBundleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IProgressWndEventsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICurrentStateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppCommandProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _google_update_idl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IPolicyStatus2StubVtbl,
    ( CInterfaceStubVtbl *) &_ICoCreateAsyncStatusStubVtbl,
    ( CInterfaceStubVtbl *) &_IJobObserver2StubVtbl,
    ( CInterfaceStubVtbl *) &_IGoogleUpdateStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppCommandWebStubVtbl,
    ( CInterfaceStubVtbl *) &_IPolicyStatusValueStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppVersionWebStubVtbl,
    ( CInterfaceStubVtbl *) &_IRegistrationUpdateHookStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppVersionStubVtbl,
    ( CInterfaceStubVtbl *) &_IJobObserverStubVtbl,
    ( CInterfaceStubVtbl *) &_ICoCreateAsyncStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppCommand2StubVtbl,
    ( CInterfaceStubVtbl *) &_IGoogleUpdate3StubVtbl,
    ( CInterfaceStubVtbl *) &_IAppBundleWebStubVtbl,
    ( CInterfaceStubVtbl *) &_IProcessLauncher2StubVtbl,
    ( CInterfaceStubVtbl *) &_ICredentialDialogStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppWebStubVtbl,
    ( CInterfaceStubVtbl *) &_IGoogleUpdate3WebSecurityStubVtbl,
    ( CInterfaceStubVtbl *) &_IPackageStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppStubVtbl,
    ( CInterfaceStubVtbl *) &_IPolicyStatusStubVtbl,
    ( CInterfaceStubVtbl *) &_IProcessLauncherStubVtbl,
    ( CInterfaceStubVtbl *) &_IApp2StubVtbl,
    ( CInterfaceStubVtbl *) &_IGoogleUpdateCoreStubVtbl,
    ( CInterfaceStubVtbl *) &_IGoogleUpdate3WebStubVtbl,
    ( CInterfaceStubVtbl *) &_IBrowserHttpRequest2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAppBundleStubVtbl,
    ( CInterfaceStubVtbl *) &_IProgressWndEventsStubVtbl,
    ( CInterfaceStubVtbl *) &_ICurrentStateStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppCommandStubVtbl,
    0
};

PCInterfaceName const _google_update_idl_InterfaceNamesList[] = 
{
    "IPolicyStatus2",
    "ICoCreateAsyncStatus",
    "IJobObserver2",
    "IGoogleUpdate",
    "IAppCommandWeb",
    "IPolicyStatusValue",
    "IAppVersionWeb",
    "IRegistrationUpdateHook",
    "IAppVersion",
    "IJobObserver",
    "ICoCreateAsync",
    "IAppCommand2",
    "IGoogleUpdate3",
    "IAppBundleWeb",
    "IProcessLauncher2",
    "ICredentialDialog",
    "IAppWeb",
    "IGoogleUpdate3WebSecurity",
    "IPackage",
    "IApp",
    "IPolicyStatus",
    "IProcessLauncher",
    "IApp2",
    "IGoogleUpdateCore",
    "IGoogleUpdate3Web",
    "IBrowserHttpRequest2",
    "IAppBundle",
    "IProgressWndEvents",
    "ICurrentState",
    "IAppCommand",
    0
};

const IID *  const _google_update_idl_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0,
    0,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0,
    0,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0,
    0,
    &IID_IDispatch,
    0,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0,
    &IID_IDispatch,
    0,
    &IID_IDispatch,
    0,
    &IID_IDispatch,
    0,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _google_update_idl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _google_update_idl, pIID, n)

int __stdcall _google_update_idl_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _google_update_idl, 30, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _google_update_idl, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _google_update_idl, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _google_update_idl, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _google_update_idl, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _google_update_idl, 30, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo google_update_idl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _google_update_idl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _google_update_idl_StubVtblList,
    (const PCInterfaceName * ) & _google_update_idl_InterfaceNamesList,
    (const IID ** ) & _google_update_idl_BaseIIDList,
    & _google_update_idl_IID_Lookup, 
    30,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* if defined(_ARM_) */

