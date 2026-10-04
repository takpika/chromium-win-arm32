

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../third_party/iaccessible2/ia2_api_all.idl:
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


#include "ia2_api_all.h"

#define TYPE_FORMAT_STRING_SIZE   1685                              
#define PROC_FORMAT_STRING_SIZE   6219                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   3            

typedef struct _ia2_api_all_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_TYPE_FORMAT_STRING;

typedef struct _ia2_api_all_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_PROC_FORMAT_STRING;

typedef struct _ia2_api_all_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_EXPR_FORMAT_STRING;


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


extern const ia2_api_all_MIDL_TYPE_FORMAT_STRING ia2_api_all__MIDL_TypeFormatString;
extern const ia2_api_all_MIDL_PROC_FORMAT_STRING ia2_api_all__MIDL_ProcFormatString;
extern const ia2_api_all_MIDL_EXPR_FORMAT_STRING ia2_api_all__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleRelation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleRelation_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleAction_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleAction_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessible2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessible2_2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessible2_3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_3_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessible2_4_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_4_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleComponent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleComponent_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleValue_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleValue_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleText_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleText_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleText2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleText2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleTextSelectionContainer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTextSelectionContainer_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleEditableText_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleEditableText_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleHyperlink_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHyperlink_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleHypertext_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleHypertext2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleTable_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTable_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleTable2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTable2_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleTableCell_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTableCell_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleImage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleImage_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleApplication_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleApplication_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAccessibleDocument_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleDocument_ProxyInfo;


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


static const ia2_api_all_MIDL_PROC_FORMAT_STRING ia2_api_all__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_appName */


	/* Procedure get_description */


	/* Procedure get_relationType */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x2 ),	/* 2 */
/* 26 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 28 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter name */


	/* Parameter description */


	/* Parameter relationType */

/* 30 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 32 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 34 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_appVersion */


	/* Procedure get_localizedRelationType */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 58 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x2 ),	/* 2 */
/* 68 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 70 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter version */


	/* Parameter localizedRelationType */

/* 72 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 76 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnIndex */


	/* Procedure get_caretOffset */


	/* Procedure get_background */


	/* Procedure get_nTargets */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x5 ),	/* 5 */
/* 92 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x24 ),	/* 36 */
/* 98 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 100 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x2 ),	/* 2 */
/* 110 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 112 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter columnIndex */


	/* Parameter offset */


	/* Parameter background */


	/* Parameter nTargets */

/* 114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_target */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x6 ),	/* 6 */
/* 134 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 142 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x3 ),	/* 3 */
/* 152 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 154 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter targetIndex */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter target */

/* 162 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 164 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 166 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 170 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_targets */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x7 ),	/* 7 */
/* 182 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 186 */	NdrFcShort( 0x24 ),	/* 36 */
/* 188 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 190 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 202 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 204 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxTargets */

/* 206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 208 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter targets */

/* 212 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 214 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 216 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter nTargets */

/* 218 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 220 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 226 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnExtent */


	/* Procedure nActions */

/* 230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x3 ),	/* 3 */
/* 238 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x24 ),	/* 36 */
/* 244 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 246 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x2 ),	/* 2 */
/* 256 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 258 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nColumnsSpanned */


	/* Parameter nActions */

/* 260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 262 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 268 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure doAction */

/* 272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x4 ),	/* 4 */
/* 280 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 288 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x2 ),	/* 2 */
/* 298 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 300 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter actionIndex */

/* 302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 304 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 310 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnDescription */


	/* Procedure get_description */

/* 314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x5 ),	/* 5 */
/* 322 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 330 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x3 ),	/* 3 */
/* 340 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 342 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter column */


	/* Parameter actionIndex */

/* 344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 346 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 350 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 352 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 354 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */


	/* Return value */

/* 356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 358 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_keyBinding */

/* 362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x6 ),	/* 6 */
/* 370 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 372 */	NdrFcShort( 0x10 ),	/* 16 */
/* 374 */	NdrFcShort( 0x24 ),	/* 36 */
/* 376 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 378 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 380 */	NdrFcShort( 0x1 ),	/* 1 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x5 ),	/* 5 */
/* 388 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 390 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 392 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter actionIndex */

/* 394 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 396 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nMaxBindings */

/* 400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 402 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter keyBindings */

/* 406 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 408 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 410 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter nBindings */

/* 412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 414 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 420 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_name */

/* 424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x7 ),	/* 7 */
/* 432 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 438 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 440 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x3 ),	/* 3 */
/* 450 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 452 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter actionIndex */

/* 454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 456 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 460 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 462 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 464 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 468 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedName */

/* 472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 480 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 486 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 488 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x3 ),	/* 3 */
/* 498 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 500 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter actionIndex */

/* 502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 504 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localizedName */

/* 508 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 510 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 512 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 516 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRelations */

/* 520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x1c ),	/* 28 */
/* 528 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 534 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 536 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x2 ),	/* 2 */
/* 546 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 548 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nRelations */

/* 550 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 552 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 558 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relation */

/* 562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x1d ),	/* 29 */
/* 570 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 576 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 578 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x3 ),	/* 3 */
/* 588 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 590 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter relationIndex */

/* 592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 594 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter relation */

/* 598 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 600 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 602 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 606 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relations */

/* 610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x1e ),	/* 30 */
/* 618 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 622 */	NdrFcShort( 0x24 ),	/* 36 */
/* 624 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 626 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x4 ),	/* 4 */
/* 636 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 638 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 640 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxRelations */

/* 642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 644 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter relations */

/* 648 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 650 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 652 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter nRelations */

/* 654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure role */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x1f ),	/* 31 */
/* 674 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x24 ),	/* 36 */
/* 680 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 682 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x2 ),	/* 2 */
/* 692 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 694 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter role */

/* 696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 698 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 704 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollTo */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x20 ),	/* 32 */
/* 716 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 718 */	NdrFcShort( 0x6 ),	/* 6 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 724 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x2 ),	/* 2 */
/* 734 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 736 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter scrollType */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 742 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollToPoint */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x21 ),	/* 33 */
/* 758 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 760 */	NdrFcShort( 0x16 ),	/* 22 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 766 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x4 ),	/* 4 */
/* 776 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 778 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 780 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter coordinateType */

/* 782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 784 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 786 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 790 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 796 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 802 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_groupPosition */

/* 806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x22 ),	/* 34 */
/* 814 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x5c ),	/* 92 */
/* 820 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 822 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x4 ),	/* 4 */
/* 832 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 834 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 836 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter groupLevel */

/* 838 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 840 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter similarItemsInGroup */

/* 844 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 846 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter positionInGroup */

/* 850 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 852 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 858 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_states */

/* 862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x23 ),	/* 35 */
/* 870 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x24 ),	/* 36 */
/* 876 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 878 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x2 ),	/* 2 */
/* 888 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 890 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter states */

/* 892 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 894 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 900 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_extendedRole */

/* 904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x24 ),	/* 36 */
/* 912 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 918 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 920 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x2 ),	/* 2 */
/* 930 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 932 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter extendedRole */

/* 934 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 936 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 938 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 942 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedExtendedRole */

/* 946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x25 ),	/* 37 */
/* 954 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 960 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 962 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x2 ),	/* 2 */
/* 972 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 974 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter localizedExtendedRole */

/* 976 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 978 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 980 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 984 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nExtendedStates */

/* 988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x26 ),	/* 38 */
/* 996 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1002 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1004 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1014 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1016 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nExtendedStates */

/* 1018 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1020 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1026 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_extendedStates */

/* 1030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1038 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 1040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1042 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1044 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1046 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1056 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 1058 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1060 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxExtendedStates */

/* 1062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1064 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter extendedStates */

/* 1068 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1070 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1072 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Parameter nExtendedStates */

/* 1074 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1076 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedExtendedStates */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1094 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 1096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1098 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1100 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1102 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1112 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 1114 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1116 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxLocalizedExtendedStates */

/* 1118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1120 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localizedExtendedStates */

/* 1124 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1126 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1128 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Parameter nLocalizedExtendedStates */

/* 1130 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1132 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1138 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_uniqueID */

/* 1142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1150 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1156 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1158 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1168 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1170 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter uniqueID */

/* 1172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1174 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1180 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_windowHandle */

/* 1184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1192 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1198 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1200 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1210 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1212 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter windowHandle */

/* 1214 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1216 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1218 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 1220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1222 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_indexInParent */

/* 1226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1234 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1242 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1252 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1254 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter indexInParent */

/* 1256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1258 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1264 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_locale */

/* 1268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1276 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1282 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1284 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1294 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1296 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter locale */

/* 1298 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1300 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1302 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 1304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1306 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributes */

/* 1310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1318 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1324 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1326 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1336 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1338 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter attributes */

/* 1340 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1342 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1344 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1348 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attribute */

/* 1352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1360 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1366 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1368 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1378 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1380 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 1382 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1384 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1386 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter attribute */

/* 1388 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1390 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1392 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 1394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1396 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_accessibleWithCaret */

/* 1400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1408 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1414 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1416 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1426 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1428 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter accessible */

/* 1430 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1432 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1434 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caretOffset */

/* 1436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1438 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1444 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relationTargetsOfType */

/* 1448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1456 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1460 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1462 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1464 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1474 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 1476 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1478 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter type */

/* 1480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1482 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1484 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter maxTargets */

/* 1486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1488 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter targets */

/* 1492 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1494 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1496 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Parameter nTargets */

/* 1498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1500 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1506 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 1508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectionRanges */

/* 1510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1518 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1524 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1526 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1536 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1538 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter ranges */

/* 1540 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1542 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1544 */	NdrFcShort( 0x516 ),	/* Type Offset=1302 */

	/* Parameter nRanges */

/* 1546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1548 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1554 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSelectionRanges */

/* 1558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1564 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1566 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1572 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1574 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1584 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1586 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter nRanges */

/* 1588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1590 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ranges */

/* 1594 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1596 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1598 */	NdrFcShort( 0x54c ),	/* Type Offset=1356 */

	/* Return value */

/* 1600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1602 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_locationInParent */

/* 1606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1614 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1620 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1622 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1632 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1634 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter x */

/* 1636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1638 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 1642 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1644 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1650 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_foreground */

/* 1654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1660 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1662 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1668 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1670 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1678 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1680 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1682 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter foreground */

/* 1684 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1686 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1692 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentValue */

/* 1696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1704 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1710 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1712 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1722 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1724 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter currentValue */

/* 1726 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1728 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1730 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 1732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1734 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCurrentValue */

/* 1738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1746 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1752 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1754 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1764 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 1766 */	0x9f,		/* 159 */
			0x82,		/* 130 */
/* 1768 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 1770 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter value */

/* 1772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1774 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1776 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Return value */

/* 1778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1780 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_maximumValue */

/* 1784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1792 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1798 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1800 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1810 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1812 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter maximumValue */

/* 1814 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1816 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1818 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 1820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1822 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_minimumValue */

/* 1826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1834 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1840 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1842 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1844 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1852 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1854 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter minimumValue */

/* 1856 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1858 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1860 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 1862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1864 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure copyText */


	/* Procedure addSelection */

/* 1868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1876 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1878 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1882 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1884 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1894 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1896 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter startOffset */


	/* Parameter startOffset */

/* 1898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1900 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */


	/* Parameter endOffset */

/* 1904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1906 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1912 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributes */

/* 1916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1924 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1928 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1930 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1932 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1942 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 1944 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1946 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter offset */

/* 1948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1950 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 1954 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1956 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1962 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter textAttributes */

/* 1966 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1968 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1970 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 1972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1974 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 1976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_characterExtents */

/* 1978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1986 */	NdrFcShort( 0x20 ),	/* ARM Stack size/offset = 32 */
/* 1988 */	NdrFcShort( 0xe ),	/* 14 */
/* 1990 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 1994 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2002 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2004 */	0x7,		/* 7 */
			0x80,		/* 128 */
/* 2006 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2008 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 2010 */	0xfc,		/* 252 */
			0xfc,		/* 252 */

	/* Parameter offset */

/* 2012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2014 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordType */

/* 2018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2020 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2022 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 2024 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2026 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2030 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2032 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 2036 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2038 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 2042 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2044 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 2046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2050 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 2052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRows */


	/* Procedure get_nSelections */

/* 2054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2062 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2068 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2070 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2080 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2082 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowCount */


	/* Parameter nSelections */

/* 2084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2086 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2092 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_offsetAtPoint */

/* 2096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2104 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 2106 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2108 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2110 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 2112 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2122 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 2124 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2126 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter x */

/* 2128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2130 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2136 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordType */

/* 2140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2142 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2144 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2148 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2154 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selection */

/* 2158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2164 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2166 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2170 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2174 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2182 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2184 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2186 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2188 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter selectionIndex */

/* 2190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2192 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2198 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2202 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2204 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2210 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_text */

/* 2214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0xa ),	/* 10 */
/* 2222 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2224 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2228 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2230 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2240 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2242 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2244 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2248 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2254 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2258 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2260 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2262 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2266 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textBeforeOffset */

/* 2270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0xb ),	/* 11 */
/* 2278 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 2280 */	NdrFcShort( 0xe ),	/* 14 */
/* 2282 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2286 */	0x12,		/* 18 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2296 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2298 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2300 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 2302 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2306 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2312 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2314 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2316 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2318 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2322 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2324 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2328 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2330 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2332 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2336 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 2338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textAfterOffset */

/* 2340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0xc ),	/* 12 */
/* 2348 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 2350 */	NdrFcShort( 0xe ),	/* 14 */
/* 2352 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2354 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2356 */	0x12,		/* 18 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2366 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2368 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2370 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 2372 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2376 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2382 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2384 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2388 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2394 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2398 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2400 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2402 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2406 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 2408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textAtOffset */

/* 2410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0xd ),	/* 13 */
/* 2418 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 2420 */	NdrFcShort( 0xe ),	/* 14 */
/* 2422 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2424 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2426 */	0x12,		/* 18 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2436 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2438 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2440 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 2442 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2446 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2452 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2454 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2458 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2464 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2468 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2470 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2472 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2476 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 2478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSelection */

/* 2480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0xe ),	/* 14 */
/* 2488 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2496 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2506 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2508 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter selectionIndex */

/* 2510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2512 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2518 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCaretOffset */

/* 2522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0xf ),	/* 15 */
/* 2530 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2536 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2538 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2548 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2550 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2554 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2560 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSelection */

/* 2564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2570 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2572 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2574 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2578 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2580 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2590 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2592 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2594 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter selectionIndex */

/* 2596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2598 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2602 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2604 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2610 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2616 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nCharacters */

/* 2620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2628 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2632 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2634 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2636 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2644 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2646 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2648 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nCharacters */

/* 2650 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2652 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2658 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollSubstringTo */

/* 2662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2668 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2670 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2672 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2676 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2678 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2686 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2688 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2690 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2692 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter startIndex */

/* 2694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2696 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endIndex */

/* 2700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2702 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter scrollType */

/* 2706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2708 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2710 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 2712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2714 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollSubstringToPoint */

/* 2718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2724 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2726 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 2728 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2732 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 2734 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2744 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2746 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2748 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 2750 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter startIndex */

/* 2752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2754 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endIndex */

/* 2758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2760 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordinateType */

/* 2764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2766 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2768 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 2770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2772 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2778 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2784 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 2786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_newText */

/* 2788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2796 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2802 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2804 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2812 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2814 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2816 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newText */

/* 2818 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2820 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2822 */	NdrFcShort( 0x574 ),	/* Type Offset=1396 */

	/* Return value */

/* 2824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2826 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_oldText */

/* 2830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2836 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2838 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2844 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2846 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2854 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2856 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2858 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter oldText */

/* 2860 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2862 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2864 */	NdrFcShort( 0x574 ),	/* Type Offset=1396 */

	/* Return value */

/* 2866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2868 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributeRange */

/* 2872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2878 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2880 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 2882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2884 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2886 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2888 */	0x12,		/* 18 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2896 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2898 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2900 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2902 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 2904 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 2906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2908 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter filter */

/* 2912 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2914 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2916 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter startOffset */

/* 2918 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2920 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2926 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attributeValues */

/* 2930 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2932 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2934 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 2936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2938 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 2940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selections */

/* 2942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2948 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2950 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2956 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2958 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2966 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2968 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2970 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter selections */

/* 2972 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2974 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2976 */	NdrFcShort( 0x584 ),	/* Type Offset=1412 */

	/* Parameter nSelections */

/* 2978 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2980 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2986 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSelections */

/* 2990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2998 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3004 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3006 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3014 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3016 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3018 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter nSelections */

/* 3020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3022 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter selections */

/* 3026 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3028 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3030 */	NdrFcShort( 0x5ce ),	/* Type Offset=1486 */

	/* Return value */

/* 3032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3034 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteText */

/* 3038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3046 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3048 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3054 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3062 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3064 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3066 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter startOffset */

/* 3068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3070 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 3074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3076 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3082 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure insertText */

/* 3086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3094 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3100 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3102 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3112 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3114 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter offset */

/* 3116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3118 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 3122 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3124 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3126 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 3128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3130 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure cutText */

/* 3134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3142 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3144 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3148 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3150 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3158 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3160 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3162 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter startOffset */

/* 3164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3166 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 3170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3172 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3178 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure pasteText */

/* 3182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3188 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3190 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3196 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3198 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3206 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3208 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3210 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 3212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3214 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3220 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure replaceText */

/* 3224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3232 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3234 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3240 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3250 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3252 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3254 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 3256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3258 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 3262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3264 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 3268 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3270 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3272 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 3274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3276 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAttributes */

/* 3280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3288 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3290 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3294 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3296 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3306 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3308 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3310 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 3312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3314 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 3318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3320 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attributes */

/* 3324 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3326 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3328 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 3330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3332 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchor */

/* 3336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3344 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3350 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3352 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3362 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3364 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */

/* 3366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3368 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter anchor */

/* 3372 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3374 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3376 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 3378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3380 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchorTarget */

/* 3384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0xa ),	/* 10 */
/* 3392 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3398 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3400 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3410 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3412 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */

/* 3414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3416 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter anchorTarget */

/* 3420 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 3422 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3424 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 3426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3428 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRows */


	/* Procedure get_startIndex */

/* 3432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0xb ),	/* 11 */
/* 3440 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3448 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3458 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3460 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowCount */


	/* Parameter index */

/* 3462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3464 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3470 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedChildren */


	/* Procedure get_endIndex */

/* 3474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0xc ),	/* 12 */
/* 3482 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3488 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3490 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3500 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3502 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter cellCount */


	/* Parameter index */

/* 3504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3506 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3512 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_valid */

/* 3516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0xd ),	/* 13 */
/* 3524 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3530 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3532 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3542 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3544 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter valid */

/* 3546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3548 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3550 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3554 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nHyperlinks */

/* 3558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3566 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3570 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3574 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3582 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3584 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3586 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter hyperlinkCount */

/* 3588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3590 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3596 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlink */

/* 3600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3608 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3614 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3616 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3626 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3628 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter index */

/* 3630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3632 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hyperlink */

/* 3636 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3638 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3640 */	NdrFcShort( 0x5ec ),	/* Type Offset=1516 */

	/* Return value */

/* 3642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3644 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlinkIndex */

/* 3648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3656 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3660 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3664 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3672 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3674 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3676 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter charIndex */

/* 3678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3680 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hyperlinkIndex */

/* 3684 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3686 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3692 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlinks */

/* 3696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3704 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3710 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3712 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3720 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3722 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3724 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter hyperlinks */

/* 3726 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3728 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3730 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Parameter nHyperlinks */

/* 3732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3734 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3740 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_cellAt */


	/* Procedure get_accessibleAt */

/* 3744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3752 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3754 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3758 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3760 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3770 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3772 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3774 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter row */


	/* Parameter row */

/* 3776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3778 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */


	/* Parameter column */

/* 3782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3784 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cell */


	/* Parameter accessible */

/* 3788 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3790 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3792 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 3794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3796 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_caption */


	/* Procedure get_caption */

/* 3800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3808 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3814 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3816 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3824 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3826 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3828 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter accessible */


	/* Parameter accessible */

/* 3830 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3832 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3834 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 3836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3838 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_childIndex */

/* 3842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3848 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3850 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3852 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3854 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3856 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3858 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3868 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3870 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3872 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter rowIndex */

/* 3874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3876 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnIndex */

/* 3880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3882 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cellIndex */

/* 3886 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3888 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3894 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnDescription */

/* 3898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3904 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3906 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3912 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3914 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3924 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3926 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter column */

/* 3928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3930 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 3934 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3936 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3938 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 3940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3942 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnExtentAt */

/* 3946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3952 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3954 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3956 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3958 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3960 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3962 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3970 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3972 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3974 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3976 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter row */

/* 3978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3980 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 3984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3986 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nColumnsSpanned */

/* 3990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3992 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3998 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnHeader */

/* 4002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4010 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4016 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4018 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4026 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4028 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4030 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter accessibleTable */

/* 4032 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4034 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4036 */	NdrFcShort( 0x620 ),	/* Type Offset=1568 */

	/* Parameter startingRowIndex */

/* 4038 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4040 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4046 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnIndex */

/* 4050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4056 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4058 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4062 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4064 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4066 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4074 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4076 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4078 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cellIndex */

/* 4080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4082 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnIndex */

/* 4086 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4088 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4094 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedRows */


	/* Procedure get_nColumns */

/* 4098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0xa ),	/* 10 */
/* 4106 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4110 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4114 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4124 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4126 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowCount */


	/* Parameter columnCount */

/* 4128 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4130 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4136 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedColumns */

/* 4140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4146 */	NdrFcShort( 0xd ),	/* 13 */
/* 4148 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4154 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4156 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4166 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4168 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter columnCount */

/* 4170 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4172 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4178 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedRows */

/* 4182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0xe ),	/* 14 */
/* 4190 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4196 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4198 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4208 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4210 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowCount */

/* 4212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4214 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4220 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowDescription */

/* 4224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0xf ),	/* 15 */
/* 4232 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4238 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4240 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4248 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4250 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4252 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter row */

/* 4254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4256 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 4260 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4262 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4264 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 4266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4268 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowExtentAt */

/* 4272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4278 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4280 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4282 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4284 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 4288 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4298 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4300 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4302 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter row */

/* 4304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4306 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 4310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4312 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRowsSpanned */

/* 4316 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4318 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4324 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowHeader */

/* 4328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4334 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4336 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4340 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4342 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4344 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4352 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4354 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4356 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter accessibleTable */

/* 4358 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4360 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4362 */	NdrFcShort( 0x620 ),	/* Type Offset=1568 */

	/* Parameter startingColumnIndex */

/* 4364 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4366 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4372 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowIndex */

/* 4376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4382 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4384 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4392 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4400 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4402 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4404 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cellIndex */

/* 4406 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4408 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowIndex */

/* 4412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4414 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4420 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedChildren */

/* 4424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4430 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4432 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4436 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4438 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4440 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4448 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4450 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4452 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4454 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxChildren */

/* 4456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4458 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter children */

/* 4462 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4464 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4466 */	NdrFcShort( 0x636 ),	/* Type Offset=1590 */

	/* Parameter nChildren */

/* 4468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4470 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4476 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedColumns */

/* 4480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4486 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4488 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4492 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4494 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4496 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4504 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4506 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4508 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4510 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxColumns */

/* 4512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4514 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columns */

/* 4518 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4520 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4522 */	NdrFcShort( 0x636 ),	/* Type Offset=1590 */

	/* Parameter nColumns */

/* 4524 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4526 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4532 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedRows */

/* 4536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4542 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4544 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4548 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4550 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4552 */	0x10,		/* 16 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4562 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4564 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4566 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter maxRows */

/* 4568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4570 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rows */

/* 4574 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4576 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4578 */	NdrFcShort( 0x636 ),	/* Type Offset=1590 */

	/* Parameter nRows */

/* 4580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4582 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4588 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_summary */

/* 4592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4598 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4600 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4606 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4608 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4618 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4620 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter accessible */

/* 4622 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4624 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4626 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 4628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4630 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isColumnSelected */

/* 4634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4640 */	NdrFcShort( 0x17 ),	/* 23 */
/* 4642 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4646 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4648 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4650 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4658 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4660 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4662 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter column */

/* 4664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4666 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4672 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4674 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4678 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRowSelected */

/* 4682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4688 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4690 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4694 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4696 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4698 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4706 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4708 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4710 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter row */

/* 4712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4714 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4718 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4720 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4722 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4726 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isSelected */

/* 4730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4736 */	NdrFcShort( 0x19 ),	/* 25 */
/* 4738 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4742 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4744 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 4746 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4754 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4756 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4758 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4760 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter row */

/* 4762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4764 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 4768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4770 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4776 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4778 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4782 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectRow */

/* 4786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4792 */	NdrFcShort( 0x1a ),	/* 26 */
/* 4794 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4800 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4802 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4810 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4812 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4814 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter row */

/* 4816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4818 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4824 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectColumn */

/* 4828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4834 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4836 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4842 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4844 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4852 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4854 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4856 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter column */

/* 4858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4860 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4866 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectRow */

/* 4870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4876 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4878 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4886 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4894 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4896 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4898 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter row */

/* 4900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4902 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4908 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectColumn */

/* 4912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4918 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4920 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4928 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4936 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4938 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4940 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter column */

/* 4942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4944 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4950 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowColumnExtentsAtIndex */

/* 4954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4960 */	NdrFcShort( 0x1e ),	/* 30 */
/* 4962 */	NdrFcShort( 0x20 ),	/* ARM Stack size/offset = 32 */
/* 4964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4966 */	NdrFcShort( 0x91 ),	/* 145 */
/* 4968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 4970 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4978 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4980 */	0x7,		/* 7 */
			0x80,		/* 128 */
/* 4982 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4984 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 4986 */	0xfc,		/* 252 */
			0xfc,		/* 252 */

	/* Parameter index */

/* 4988 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4990 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter row */

/* 4994 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4996 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 5000 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5002 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowExtents */

/* 5006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5008 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnExtents */

/* 5012 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5014 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5018 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5020 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5022 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5026 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 5028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_modelChange */

/* 5030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0x1f ),	/* 31 */
/* 5038 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5044 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5046 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5054 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5056 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5058 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter modelChange */

/* 5060 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5062 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5064 */	NdrFcShort( 0x654 ),	/* Type Offset=1620 */

	/* Return value */

/* 5066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5068 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowExtent */


	/* Procedure get_nColumns */

/* 5072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5078 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5080 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5084 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5086 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5088 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5096 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5098 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5100 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter nRowsSpanned */


	/* Parameter columnCount */

/* 5102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5104 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5110 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowIndex */


	/* Procedure get_nSelectedCells */

/* 5114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5122 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5126 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5130 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5140 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5142 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter rowIndex */


	/* Parameter cellCount */

/* 5144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5146 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5152 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedColumns */

/* 5156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5162 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5164 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5168 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5172 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5180 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5182 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5184 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter columnCount */

/* 5186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5188 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5194 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowDescription */

/* 5198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5204 */	NdrFcShort( 0xb ),	/* 11 */
/* 5206 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5212 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5214 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5216 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5222 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5224 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5226 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter row */

/* 5228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5230 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 5234 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5236 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5238 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 5240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5242 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedCells */

/* 5246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5252 */	NdrFcShort( 0xc ),	/* 12 */
/* 5254 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5258 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5260 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5262 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5270 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5272 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5274 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cells */

/* 5276 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5278 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5280 */	NdrFcShort( 0x662 ),	/* Type Offset=1634 */

	/* Parameter nSelectedCells */

/* 5282 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5284 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5290 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedColumns */

/* 5294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5300 */	NdrFcShort( 0xd ),	/* 13 */
/* 5302 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5306 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5308 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5310 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5320 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5322 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter selectedColumns */

/* 5324 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5326 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5328 */	NdrFcShort( 0x680 ),	/* Type Offset=1664 */

	/* Parameter nColumns */

/* 5330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5332 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5338 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedRows */

/* 5342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5348 */	NdrFcShort( 0xe ),	/* 14 */
/* 5350 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5356 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5358 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5360 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5366 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5368 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5370 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter selectedRows */

/* 5372 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5374 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5376 */	NdrFcShort( 0x680 ),	/* Type Offset=1664 */

	/* Parameter nRows */

/* 5378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5380 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5386 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_summary */

/* 5390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5396 */	NdrFcShort( 0xf ),	/* 15 */
/* 5398 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5404 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5406 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5414 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5416 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5418 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter accessible */

/* 5420 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5422 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5424 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 5426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5428 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isColumnSelected */

/* 5432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5438 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5440 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5444 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5448 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5456 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5458 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5460 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter column */

/* 5462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5464 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5470 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5472 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5476 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRowSelected */

/* 5480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5486 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5488 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5492 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5496 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5504 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5506 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5508 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter row */

/* 5510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5512 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5516 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5518 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5520 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5524 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectRow */

/* 5528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5534 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5536 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5544 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5552 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5554 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5556 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter row */

/* 5558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5560 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5566 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectColumn */

/* 5570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5576 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5578 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5586 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5594 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5596 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5598 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter column */

/* 5600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5602 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5608 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectRow */

/* 5612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5618 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5620 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5628 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5636 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5638 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5640 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter row */

/* 5642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5644 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5650 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectColumn */

/* 5654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5660 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5662 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5668 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5670 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5678 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5680 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5682 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter column */

/* 5684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5686 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5692 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_modelChange */

/* 5696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5702 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5704 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5710 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5712 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5720 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5722 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5724 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter modelChange */

/* 5726 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5728 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5730 */	NdrFcShort( 0x654 ),	/* Type Offset=1620 */

	/* Return value */

/* 5732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5734 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnHeaderCells */

/* 5738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5744 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5746 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5750 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5752 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5754 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5762 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5764 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5766 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cellAccessibles */

/* 5768 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5770 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5772 */	NdrFcShort( 0x662 ),	/* Type Offset=1634 */

	/* Parameter nColumnHeaderCells */

/* 5774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5776 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5782 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowHeaderCells */

/* 5786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5792 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5794 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5798 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5800 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5802 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5810 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5812 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5814 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter cellAccessibles */

/* 5816 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 5818 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5820 */	NdrFcShort( 0x662 ),	/* Type Offset=1634 */

	/* Parameter nRowHeaderCells */

/* 5822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5824 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5830 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isSelected */

/* 5834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5840 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5842 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5846 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5848 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5850 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5858 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5860 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5862 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5866 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5868 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5872 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowColumnExtents */

/* 5876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5882 */	NdrFcShort( 0xa ),	/* 10 */
/* 5884 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 5886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5888 */	NdrFcShort( 0x91 ),	/* 145 */
/* 5890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 5892 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5900 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5902 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 5904 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5906 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 5908 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter row */

/* 5910 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5912 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 5916 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5918 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowExtents */

/* 5922 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5924 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnExtents */

/* 5928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5930 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 5934 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5936 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5938 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5942 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_table */

/* 5946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5952 */	NdrFcShort( 0xb ),	/* 11 */
/* 5954 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5960 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5962 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5970 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5972 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5974 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter table */

/* 5976 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5978 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5980 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 5982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5984 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_imagePosition */

/* 5988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5996 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5998 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6000 */	NdrFcShort( 0x40 ),	/* 64 */
/* 6002 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6004 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6012 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6014 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 6016 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6018 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter coordinateType */

/* 6020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6022 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6024 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 6026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6028 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 6032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6034 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6040 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_imageSize */

/* 6044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6050 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6052 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6056 */	NdrFcShort( 0x40 ),	/* 64 */
/* 6058 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6060 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6068 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6070 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6072 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter height */

/* 6074 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6076 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 6080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6082 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6088 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toolkitName */

/* 6092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6098 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6100 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6108 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6116 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6118 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6120 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter name */

/* 6122 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6124 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6126 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 6128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6130 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toolkitVersion */

/* 6134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6140 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6142 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6148 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6150 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6158 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6160 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6162 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter version */

/* 6164 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6166 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6168 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 6170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6172 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchorTarget */

/* 6176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6182 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6184 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6190 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6192 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6200 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6202 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6204 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter accessible */

/* 6206 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6208 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6210 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 6212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6214 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ia2_api_all_MIDL_TYPE_FORMAT_STRING ia2_api_all__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 44 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 52 */	NdrFcLong( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 66 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 68 */	
			0x11, 0x0,	/* FC_RP */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 78 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 80 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 82 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 84 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 86 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 88 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 90 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (50) */
/* 92 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 94 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	
			0x13, 0x0,	/* FC_OP */
/* 100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (102) */
/* 102 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 108 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 110 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 112 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 114 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 116 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 118 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (32) */
/* 122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 124 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 130 */	NdrFcLong( 0x7cdf86ee ),	/* 2095023854 */
/* 134 */	NdrFcShort( 0xc3da ),	/* -15398 */
/* 136 */	NdrFcShort( 0x496a ),	/* 18794 */
/* 138 */	0xbd,		/* 189 */
			0xa4,		/* 164 */
/* 140 */	0x28,		/* 40 */
			0x1b,		/* 27 */
/* 142 */	0x33,		/* 51 */
			0x6e,		/* 110 */
/* 144 */	0x1f,		/* 31 */
			0xdc,		/* 220 */
/* 146 */	
			0x11, 0x0,	/* FC_RP */
/* 148 */	NdrFcShort( 0x2 ),	/* Offset= 2 (150) */
/* 150 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 156 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 158 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 160 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 162 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 164 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 166 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (128) */
/* 170 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 172 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (176) */
/* 176 */	
			0x13, 0x0,	/* FC_OP */
/* 178 */	NdrFcShort( 0x2 ),	/* Offset= 2 (180) */
/* 180 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 186 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 188 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 190 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 192 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 194 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 196 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 198 */	NdrFcShort( 0xff5a ),	/* Offset= -166 (32) */
/* 200 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 202 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 204 */	NdrFcShort( 0x1a ),	/* Offset= 26 (230) */
/* 206 */	
			0x13, 0x0,	/* FC_OP */
/* 208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (210) */
/* 210 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 212 */	NdrFcShort( 0x4 ),	/* 4 */
/* 214 */	NdrFcShort( 0x2 ),	/* 2 */
/* 216 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 220 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 222 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 226 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 228 */	NdrFcShort( 0xffff ),	/* Offset= -1 (227) */
/* 230 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 234 */	NdrFcShort( 0x4 ),	/* 4 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (206) */
/* 240 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 246 */	NdrFcShort( 0xc ),	/* 12 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* Offset= 0 (250) */
/* 252 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 254 */	NdrFcShort( 0xff22 ),	/* Offset= -222 (32) */
/* 256 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 258 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (32) */
/* 260 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 262 */	NdrFcShort( 0xff1a ),	/* Offset= -230 (32) */
/* 264 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 266 */	
			0x12, 0x0,	/* FC_UP */
/* 268 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (22) */
/* 270 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x4 ),	/* 4 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (266) */
/* 280 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 282 */	NdrFcShort( 0x3d4 ),	/* Offset= 980 (1262) */
/* 284 */	
			0x13, 0x0,	/* FC_OP */
/* 286 */	NdrFcShort( 0x3bc ),	/* Offset= 956 (1242) */
/* 288 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 290 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 292 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 294 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 296 */	NdrFcShort( 0x2 ),	/* Offset= 2 (298) */
/* 298 */	NdrFcShort( 0x10 ),	/* 16 */
/* 300 */	NdrFcShort( 0x2f ),	/* 47 */
/* 302 */	NdrFcLong( 0x14 ),	/* 20 */
/* 306 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 308 */	NdrFcLong( 0x3 ),	/* 3 */
/* 312 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 314 */	NdrFcLong( 0x11 ),	/* 17 */
/* 318 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 320 */	NdrFcLong( 0x2 ),	/* 2 */
/* 324 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 326 */	NdrFcLong( 0x4 ),	/* 4 */
/* 330 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 332 */	NdrFcLong( 0x5 ),	/* 5 */
/* 336 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 338 */	NdrFcLong( 0xb ),	/* 11 */
/* 342 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 344 */	NdrFcLong( 0xa ),	/* 10 */
/* 348 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 350 */	NdrFcLong( 0x6 ),	/* 6 */
/* 354 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (586) */
/* 356 */	NdrFcLong( 0x7 ),	/* 7 */
/* 360 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 362 */	NdrFcLong( 0x8 ),	/* 8 */
/* 366 */	NdrFcShort( 0xfe98 ),	/* Offset= -360 (6) */
/* 368 */	NdrFcLong( 0xd ),	/* 13 */
/* 372 */	NdrFcShort( 0xfebe ),	/* Offset= -322 (50) */
/* 374 */	NdrFcLong( 0x9 ),	/* 9 */
/* 378 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (592) */
/* 380 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 384 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (610) */
/* 386 */	NdrFcLong( 0x24 ),	/* 36 */
/* 390 */	NdrFcShort( 0x30a ),	/* Offset= 778 (1168) */
/* 392 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 396 */	NdrFcShort( 0x304 ),	/* Offset= 772 (1168) */
/* 398 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 402 */	NdrFcShort( 0x302 ),	/* Offset= 770 (1172) */
/* 404 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 408 */	NdrFcShort( 0x300 ),	/* Offset= 768 (1176) */
/* 410 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 414 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (1180) */
/* 416 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 420 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1184) */
/* 422 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 426 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (1188) */
/* 428 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 432 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (1192) */
/* 434 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 438 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1176) */
/* 440 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 444 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1180) */
/* 446 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 450 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1196) */
/* 452 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 456 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1192) */
/* 458 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 462 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1200) */
/* 464 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 468 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1204) */
/* 470 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 474 */	NdrFcShort( 0x2de ),	/* Offset= 734 (1208) */
/* 476 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 480 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (1212) */
/* 482 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 486 */	NdrFcShort( 0x2da ),	/* Offset= 730 (1216) */
/* 488 */	NdrFcLong( 0x10 ),	/* 16 */
/* 492 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 494 */	NdrFcLong( 0x12 ),	/* 18 */
/* 498 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 500 */	NdrFcLong( 0x13 ),	/* 19 */
/* 504 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 506 */	NdrFcLong( 0x15 ),	/* 21 */
/* 510 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 512 */	NdrFcLong( 0x16 ),	/* 22 */
/* 516 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 518 */	NdrFcLong( 0x17 ),	/* 23 */
/* 522 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 524 */	NdrFcLong( 0xe ),	/* 14 */
/* 528 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (1224) */
/* 530 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 534 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (1234) */
/* 536 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 540 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (1238) */
/* 542 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 546 */	NdrFcShort( 0x276 ),	/* Offset= 630 (1176) */
/* 548 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 552 */	NdrFcShort( 0x274 ),	/* Offset= 628 (1180) */
/* 554 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 558 */	NdrFcShort( 0x272 ),	/* Offset= 626 (1184) */
/* 560 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 564 */	NdrFcShort( 0x268 ),	/* Offset= 616 (1180) */
/* 566 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 570 */	NdrFcShort( 0x262 ),	/* Offset= 610 (1180) */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x0 ),	/* Offset= 0 (576) */
/* 578 */	NdrFcLong( 0x1 ),	/* 1 */
/* 582 */	NdrFcShort( 0x0 ),	/* Offset= 0 (582) */
/* 584 */	NdrFcShort( 0xffff ),	/* Offset= -1 (583) */
/* 586 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 592 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 594 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 608 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 610 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 612 */	NdrFcShort( 0x2 ),	/* Offset= 2 (614) */
/* 614 */	
			0x13, 0x0,	/* FC_OP */
/* 616 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1150) */
/* 618 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 620 */	NdrFcShort( 0x18 ),	/* 24 */
/* 622 */	NdrFcShort( 0xa ),	/* 10 */
/* 624 */	NdrFcLong( 0x8 ),	/* 8 */
/* 628 */	NdrFcShort( 0x5a ),	/* Offset= 90 (718) */
/* 630 */	NdrFcLong( 0xd ),	/* 13 */
/* 634 */	NdrFcShort( 0x7e ),	/* Offset= 126 (760) */
/* 636 */	NdrFcLong( 0x9 ),	/* 9 */
/* 640 */	NdrFcShort( 0x9e ),	/* Offset= 158 (798) */
/* 642 */	NdrFcLong( 0xc ),	/* 12 */
/* 646 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (846) */
/* 648 */	NdrFcLong( 0x24 ),	/* 36 */
/* 652 */	NdrFcShort( 0x124 ),	/* Offset= 292 (944) */
/* 654 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 658 */	NdrFcShort( 0x140 ),	/* Offset= 320 (978) */
/* 660 */	NdrFcLong( 0x10 ),	/* 16 */
/* 664 */	NdrFcShort( 0x15a ),	/* Offset= 346 (1010) */
/* 666 */	NdrFcLong( 0x2 ),	/* 2 */
/* 670 */	NdrFcShort( 0x174 ),	/* Offset= 372 (1042) */
/* 672 */	NdrFcLong( 0x3 ),	/* 3 */
/* 676 */	NdrFcShort( 0x18e ),	/* Offset= 398 (1074) */
/* 678 */	NdrFcLong( 0x14 ),	/* 20 */
/* 682 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (1106) */
/* 684 */	NdrFcShort( 0xffff ),	/* Offset= -1 (683) */
/* 686 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x4 ),	/* 4 */
/* 690 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 696 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 698 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 700 */	NdrFcShort( 0x4 ),	/* 4 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	0x13, 0x0,	/* FC_OP */
/* 712 */	NdrFcShort( 0xfd4e ),	/* Offset= -690 (22) */
/* 714 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 716 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 718 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 724 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 726 */	NdrFcShort( 0x4 ),	/* 4 */
/* 728 */	NdrFcShort( 0x4 ),	/* 4 */
/* 730 */	0x11, 0x0,	/* FC_RP */
/* 732 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (686) */
/* 734 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 736 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 738 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 748 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 752 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 754 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 756 */	NdrFcShort( 0xfd3e ),	/* Offset= -706 (50) */
/* 758 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 760 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x6 ),	/* Offset= 6 (772) */
/* 768 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 772 */	
			0x11, 0x0,	/* FC_RP */
/* 774 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (738) */
/* 776 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 786 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 790 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 792 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 794 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (592) */
/* 796 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 798 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x6 ),	/* Offset= 6 (810) */
/* 806 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 808 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 810 */	
			0x11, 0x0,	/* FC_RP */
/* 812 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (776) */
/* 814 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 816 */	NdrFcShort( 0x4 ),	/* 4 */
/* 818 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 824 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 826 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 828 */	NdrFcShort( 0x4 ),	/* 4 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	0x13, 0x0,	/* FC_OP */
/* 840 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1242) */
/* 842 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 844 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 846 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x6 ),	/* Offset= 6 (858) */
/* 854 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 856 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 858 */	
			0x11, 0x0,	/* FC_RP */
/* 860 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (814) */
/* 862 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 864 */	NdrFcLong( 0x2f ),	/* 47 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 874 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 876 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 878 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 880 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* 1 */
/* 884 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 888 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 890 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 892 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0xa ),	/* Offset= 10 (908) */
/* 900 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 902 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 904 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (862) */
/* 906 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 908 */	
			0x13, 0x0,	/* FC_OP */
/* 910 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (880) */
/* 912 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 914 */	NdrFcShort( 0x4 ),	/* 4 */
/* 916 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 922 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 924 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 926 */	NdrFcShort( 0x4 ),	/* 4 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	0x13, 0x0,	/* FC_OP */
/* 938 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (892) */
/* 940 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 942 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 944 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x6 ),	/* Offset= 6 (956) */
/* 952 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 954 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 956 */	
			0x11, 0x0,	/* FC_RP */
/* 958 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (912) */
/* 960 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 964 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 966 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 968 */	NdrFcShort( 0x10 ),	/* 16 */
/* 970 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 972 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 974 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (960) */
			0x5b,		/* FC_END */
/* 978 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 980 */	NdrFcShort( 0x18 ),	/* 24 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0xa ),	/* Offset= 10 (994) */
/* 986 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 988 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 990 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (966) */
/* 992 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 994 */	
			0x11, 0x0,	/* FC_RP */
/* 996 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (738) */
/* 998 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1000 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1002 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1008 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1010 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1014 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1016 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1018 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1020 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1022 */	0x13, 0x0,	/* FC_OP */
/* 1024 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (998) */
/* 1026 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1028 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1030 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1032 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1034 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1040 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1042 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1048 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1050 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1054 */	0x13, 0x0,	/* FC_OP */
/* 1056 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1030) */
/* 1058 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1060 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1066 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1072 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1074 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1078 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1080 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1082 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1084 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1086 */	0x13, 0x0,	/* FC_OP */
/* 1088 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1062) */
/* 1090 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1092 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1094 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1098 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1104 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1106 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1110 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1112 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1118 */	0x13, 0x0,	/* FC_OP */
/* 1120 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1094) */
/* 1122 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1124 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1126 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1130 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1132 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1134 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1138 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1140 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1142 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1146 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1126) */
/* 1148 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1150 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1152 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1154 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1134) */
/* 1156 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1156) */
/* 1158 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1160 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1162 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1164 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (618) */
/* 1166 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1168 */	
			0x13, 0x0,	/* FC_OP */
/* 1170 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (892) */
/* 1172 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1174 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1176 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1178 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1180 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1182 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1184 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1186 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1188 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1190 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1192 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1194 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1196 */	
			0x13, 0x0,	/* FC_OP */
/* 1198 */	NdrFcShort( 0xfd9c ),	/* Offset= -612 (586) */
/* 1200 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1202 */	NdrFcShort( 0xfb54 ),	/* Offset= -1196 (6) */
/* 1204 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1206 */	NdrFcShort( 0xfb7c ),	/* Offset= -1156 (50) */
/* 1208 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1210 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (592) */
/* 1212 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1214 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (610) */
/* 1216 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1220) */
/* 1220 */	
			0x13, 0x0,	/* FC_OP */
/* 1222 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1242) */
/* 1224 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1226 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1228 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1230 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1232 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1234 */	
			0x13, 0x0,	/* FC_OP */
/* 1236 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1224) */
/* 1238 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1240 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1242 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1244 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1248) */
/* 1250 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1252 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1254 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1256 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1258 */	NdrFcShort( 0xfc36 ),	/* Offset= -970 (288) */
/* 1260 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1262 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1264 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1266 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0xfc26 ),	/* Offset= -986 (284) */
/* 1272 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1274 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1276) */
/* 1276 */	
			0x13, 0x0,	/* FC_OP */
/* 1278 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1280) */
/* 1280 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1286 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1288 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1290 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1294 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1296 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1298 */	NdrFcShort( 0xfb20 ),	/* Offset= -1248 (50) */
/* 1300 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1302 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1304 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1306) */
/* 1306 */	
			0x13, 0x0,	/* FC_OP */
/* 1308 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1330) */
/* 1310 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1312 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0xe ),	/* Offset= 14 (1330) */
/* 1318 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1320 */	NdrFcShort( 0xfb0a ),	/* Offset= -1270 (50) */
/* 1322 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1324 */	0x0,		/* 0 */
			NdrFcShort( 0xfb05 ),	/* Offset= -1275 (50) */
			0x8,		/* FC_LONG */
/* 1328 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1330 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1336 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1338 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1340 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1344 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1346 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1348 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1310) */
/* 1350 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1352 */	
			0x11, 0x0,	/* FC_RP */
/* 1354 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1356) */
/* 1356 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1362 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1364 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1366 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1370 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1372 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1374 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1310) */
/* 1376 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1378 */	
			0x12, 0x0,	/* FC_UP */
/* 1380 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (1242) */
/* 1382 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1384 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1386 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1378) */
/* 1392 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1394 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1396) */
/* 1396 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1398 */	NdrFcShort( 0xc ),	/* 12 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1402) */
/* 1404 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1406 */	NdrFcShort( 0xfaa2 ),	/* Offset= -1374 (32) */
/* 1408 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1410 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1412 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1414 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1416) */
/* 1416 */	
			0x13, 0x0,	/* FC_OP */
/* 1418 */	NdrFcShort( 0x2a ),	/* Offset= 42 (1460) */
/* 1420 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1422 */	NdrFcLong( 0x24fd2ffb ),	/* 620572667 */
/* 1426 */	NdrFcShort( 0x3aad ),	/* 15021 */
/* 1428 */	NdrFcShort( 0x4a08 ),	/* 18952 */
/* 1430 */	0x83,		/* 131 */
			0x35,		/* 53 */
/* 1432 */	0xa3,		/* 163 */
			0xad,		/* 173 */
/* 1434 */	0x89,		/* 137 */
			0xc0,		/* 192 */
/* 1436 */	0xfb,		/* 251 */
			0x4b,		/* 75 */
/* 1438 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1440 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1460) */
/* 1446 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1448 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (1420) */
/* 1450 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1452 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (1420) */
			0x8,		/* FC_LONG */
/* 1456 */	0x3,		/* FC_SMALL */
			0x3f,		/* FC_STRUCTPAD3 */
/* 1458 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1460 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1466 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1468 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1470 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1474 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1476 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1478 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1438) */
/* 1480 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1482 */	
			0x11, 0x0,	/* FC_RP */
/* 1484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1486) */
/* 1486 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1492 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1494 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1496 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1500 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1502 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1504 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (1438) */
/* 1506 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1508 */	
			0x11, 0x0,	/* FC_RP */
/* 1510 */	NdrFcShort( 0xfb28 ),	/* Offset= -1240 (270) */
/* 1512 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1514 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 1516 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1518 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1520) */
/* 1520 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1522 */	NdrFcLong( 0x1c20f2b ),	/* 29495083 */
/* 1526 */	NdrFcShort( 0x3dd2 ),	/* 15826 */
/* 1528 */	NdrFcShort( 0x400f ),	/* 16399 */
/* 1530 */	0x94,		/* 148 */
			0x9f,		/* 159 */
/* 1532 */	0xad,		/* 173 */
			0x0,		/* 0 */
/* 1534 */	0xbd,		/* 189 */
			0xab,		/* 171 */
/* 1536 */	0x1d,		/* 29 */
			0x41,		/* 65 */
/* 1538 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1540 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1542) */
/* 1542 */	
			0x13, 0x0,	/* FC_OP */
/* 1544 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1546) */
/* 1546 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1552 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1554 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1556 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1560 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1562 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1564 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1520) */
/* 1566 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1568 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1570 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1572) */
/* 1572 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1574 */	NdrFcLong( 0x35ad8070 ),	/* 900563056 */
/* 1578 */	NdrFcShort( 0xc20c ),	/* -15860 */
/* 1580 */	NdrFcShort( 0x4fb4 ),	/* 20404 */
/* 1582 */	0xb0,		/* 176 */
			0x94,		/* 148 */
/* 1584 */	0xf4,		/* 244 */
			0xf7,		/* 247 */
/* 1586 */	0x27,		/* 39 */
			0x5d,		/* 93 */
/* 1588 */	0xd4,		/* 212 */
			0x69,		/* 105 */
/* 1590 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1592 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1594) */
/* 1594 */	
			0x13, 0x0,	/* FC_OP */
/* 1596 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1598) */
/* 1598 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 1600 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1602 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1604 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1606 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1608 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1610 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1612 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1614 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1616 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1618 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1620) */
/* 1620 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1622 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1626) */
/* 1628 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 1630 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1632 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1634 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1636 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1638) */
/* 1638 */	
			0x13, 0x0,	/* FC_OP */
/* 1640 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1642) */
/* 1642 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1648 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1650 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1652 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1656 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1658 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1660 */	NdrFcShort( 0xf9b6 ),	/* Offset= -1610 (50) */
/* 1662 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1664 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1666 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1668) */
/* 1668 */	
			0x13, 0x0,	/* FC_OP */
/* 1670 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1672) */
/* 1672 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1674 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1676 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1678 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1680 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1682 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

XFG_TRAMPOLINES(BSTR)
XFG_TRAMPOLINES(HWND)
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
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(HWND_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(HWND_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(HWND_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(HWND_UserFree)
            
            }
            ,
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserFree)
            
            }
            

        };



/* Standard interface: __MIDL_itf_ia2_api_all_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAccessibleRelation, ver. 0.0,
   GUID={0x7CDF86EE,0xC3DA,0x496a,{0xBD,0xA4,0x28,0x1B,0x33,0x6E,0x1F,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleRelation_FormatStringOffsetTable[] =
    {
    0,
    42,
    84,
    126,
    174
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleRelation_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleRelation_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleRelation_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleRelation_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IAccessibleRelationProxyVtbl = 
{
    &IAccessibleRelation_ProxyInfo,
    &IID_IAccessibleRelation,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_relationType */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_localizedRelationType */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_nTargets */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_target */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_targets */
};

const CInterfaceStubVtbl _IAccessibleRelationStubVtbl =
{
    &IID_IAccessibleRelation,
    &IAccessibleRelation_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleAction, ver. 0.0,
   GUID={0xB70D9F59,0x3B5A,0x4dba,{0xAB,0x9E,0x22,0x01,0x2F,0x60,0x7D,0xF5}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleAction_FormatStringOffsetTable[] =
    {
    230,
    272,
    314,
    362,
    424,
    472
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleAction_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleAction_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleAction_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleAction_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IAccessibleActionProxyVtbl = 
{
    &IAccessibleAction_ProxyInfo,
    &IID_IAccessibleAction,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::nActions */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::doAction */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_keyBinding */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_name */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_localizedName */
};

const CInterfaceStubVtbl _IAccessibleActionStubVtbl =
{
    &IID_IAccessibleAction,
    &IAccessibleAction_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAccessible, ver. 0.0,
   GUID={0x618736e0,0x3c3d,0x11cf,{0x81,0x0c,0x00,0xaa,0x00,0x38,0x9b,0x71}} */


/* Object interface: IAccessible2, ver. 0.0,
   GUID={0xE89F726E,0xC4F4,0x4c19,{0xBB,0x19,0xB6,0x47,0xD7,0xFA,0x84,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    520,
    562,
    610,
    666,
    708,
    750,
    806,
    862,
    904,
    946,
    988,
    1030,
    1086,
    1142,
    1184,
    1226,
    1268,
    1310
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(46) _IAccessible2ProxyVtbl = 
{
    &IAccessible2_ProxyInfo,
    &IID_IAccessible2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAccessible2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
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
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2StubVtbl =
{
    &IID_IAccessible2,
    &IAccessible2_ServerInfo,
    46,
    &IAccessible2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAccessible2_2, ver. 0.0,
   GUID={0x6C9430E9,0x299D,0x4E6F,{0xBD,0x01,0xA8,0x2A,0x1E,0x88,0xD3,0xFF}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    520,
    562,
    610,
    666,
    708,
    750,
    806,
    862,
    904,
    946,
    988,
    1030,
    1086,
    1142,
    1184,
    1226,
    1268,
    1310,
    1352,
    1400,
    1448
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(49) _IAccessible2_2ProxyVtbl = 
{
    &IAccessible2_2_ProxyInfo,
    &IID_IAccessible2_2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_attribute */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_accessibleWithCaret */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_relationTargetsOfType */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAccessible2_2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
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
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2_2StubVtbl =
{
    &IID_IAccessible2_2,
    &IAccessible2_2_ServerInfo,
    49,
    &IAccessible2_2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessible2_3, ver. 0.0,
   GUID={0x5BE18059,0x762E,0x4E73,{0x94,0x76,0xAB,0xA2,0x94,0xFE,0xD4,0x11}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_3_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    520,
    562,
    610,
    666,
    708,
    750,
    806,
    862,
    904,
    946,
    988,
    1030,
    1086,
    1142,
    1184,
    1226,
    1268,
    1310,
    1352,
    1400,
    1448,
    1510
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_3_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(50) _IAccessible2_3ProxyVtbl = 
{
    &IAccessible2_3_ProxyInfo,
    &IID_IAccessible2_3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_attribute */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_accessibleWithCaret */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_relationTargetsOfType */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_3::get_selectionRanges */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAccessible2_3_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
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
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2_3StubVtbl =
{
    &IID_IAccessible2_3,
    &IAccessible2_3_ServerInfo,
    50,
    &IAccessible2_3_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAccessible2_4, ver. 0.0,
   GUID={0x610a7bec,0x91bb,0x444d,{0xa3,0x36,0xa0,0xda,0xf1,0x3c,0x4c,0x29}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_4_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    520,
    562,
    610,
    666,
    708,
    750,
    806,
    862,
    904,
    946,
    988,
    1030,
    1086,
    1142,
    1184,
    1226,
    1268,
    1310,
    1352,
    1400,
    1448,
    1510,
    1558
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_4_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_4_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_4_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_4_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(51) _IAccessible2_4ProxyVtbl = 
{
    &IAccessible2_4_ProxyInfo,
    &IID_IAccessible2_4,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_attribute */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_accessibleWithCaret */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_relationTargetsOfType */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_3::get_selectionRanges */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_4::setSelectionRanges */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAccessible2_4_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
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
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2_4StubVtbl =
{
    &IID_IAccessible2_4,
    &IAccessible2_4_ServerInfo,
    51,
    &IAccessible2_4_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleComponent, ver. 0.0,
   GUID={0x1546D4B0,0x4C98,0x4bda,{0x89,0xAE,0x9A,0x64,0x74,0x8B,0xDD,0xE4}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleComponent_FormatStringOffsetTable[] =
    {
    1606,
    1654,
    84
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleComponent_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleComponent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IAccessibleComponentProxyVtbl = 
{
    &IAccessibleComponent_ProxyInfo,
    &IID_IAccessibleComponent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_locationInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_foreground */ ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_background */
};

const CInterfaceStubVtbl _IAccessibleComponentStubVtbl =
{
    &IID_IAccessibleComponent,
    &IAccessibleComponent_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleValue, ver. 0.0,
   GUID={0x35855B5B,0xC566,0x4fd0,{0xA7,0xB1,0xE6,0x54,0x65,0x60,0x03,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleValue_FormatStringOffsetTable[] =
    {
    1696,
    1738,
    1784,
    1826
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleValue_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleValue_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleValue_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleValue_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IAccessibleValueProxyVtbl = 
{
    &IAccessibleValue_ProxyInfo,
    &IID_IAccessibleValue,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_currentValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::setCurrentValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_maximumValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_minimumValue */
};

const CInterfaceStubVtbl _IAccessibleValueStubVtbl =
{
    &IID_IAccessibleValue,
    &IAccessibleValue_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleText, ver. 0.0,
   GUID={0x24FD2FFB,0x3AAD,0x4a08,{0x83,0x35,0xA3,0xAD,0x89,0xC0,0xFB,0x4B}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleText_FormatStringOffsetTable[] =
    {
    1868,
    1916,
    84,
    1978,
    2054,
    2096,
    2158,
    2214,
    2270,
    2340,
    2410,
    2480,
    2522,
    2564,
    2620,
    2662,
    2718,
    2788,
    2830
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleText_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleText_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IAccessibleTextProxyVtbl = 
{
    &IAccessibleText_ProxyInfo,
    &IID_IAccessibleText,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */
};

const CInterfaceStubVtbl _IAccessibleTextStubVtbl =
{
    &IID_IAccessibleText,
    &IAccessibleText_ServerInfo,
    22,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleText2, ver. 0.0,
   GUID={0x9690A9CC,0x5C80,0x4DF5,{0x85,0x2E,0x2D,0x5A,0xE4,0x18,0x9A,0x54}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleText2_FormatStringOffsetTable[] =
    {
    1868,
    1916,
    84,
    1978,
    2054,
    2096,
    2158,
    2214,
    2270,
    2340,
    2410,
    2480,
    2522,
    2564,
    2620,
    2662,
    2718,
    2788,
    2830,
    2872
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleText2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleText2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IAccessibleText2ProxyVtbl = 
{
    &IAccessibleText2_ProxyInfo,
    &IID_IAccessibleText2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText2::get_attributeRange */
};

const CInterfaceStubVtbl _IAccessibleText2StubVtbl =
{
    &IID_IAccessibleText2,
    &IAccessibleText2_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleTextSelectionContainer, ver. 0.0,
   GUID={0x2118B599,0x733F,0x43D0,{0xA5,0x69,0x0B,0x31,0xD1,0x25,0xED,0x9A}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTextSelectionContainer_FormatStringOffsetTable[] =
    {
    2942,
    2990
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTextSelectionContainer_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTextSelectionContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTextSelectionContainer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTextSelectionContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IAccessibleTextSelectionContainerProxyVtbl = 
{
    &IAccessibleTextSelectionContainer_ProxyInfo,
    &IID_IAccessibleTextSelectionContainer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTextSelectionContainer::get_selections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTextSelectionContainer::setSelections */
};

const CInterfaceStubVtbl _IAccessibleTextSelectionContainerStubVtbl =
{
    &IID_IAccessibleTextSelectionContainer,
    &IAccessibleTextSelectionContainer_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleEditableText, ver. 0.0,
   GUID={0xA59AA09A,0x7011,0x4b65,{0x93,0x9D,0x32,0xB1,0xFB,0x55,0x47,0xE3}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleEditableText_FormatStringOffsetTable[] =
    {
    1868,
    3038,
    3086,
    3134,
    3182,
    3224,
    3280
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleEditableText_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleEditableText_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleEditableText_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleEditableText_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IAccessibleEditableTextProxyVtbl = 
{
    &IAccessibleEditableText_ProxyInfo,
    &IID_IAccessibleEditableText,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::copyText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::deleteText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::insertText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::cutText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::pasteText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::replaceText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::setAttributes */
};

const CInterfaceStubVtbl _IAccessibleEditableTextStubVtbl =
{
    &IID_IAccessibleEditableText,
    &IAccessibleEditableText_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHyperlink, ver. 0.0,
   GUID={0x01C20F2B,0x3DD2,0x400f,{0x94,0x9F,0xAD,0x00,0xBD,0xAB,0x1D,0x41}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHyperlink_FormatStringOffsetTable[] =
    {
    230,
    272,
    314,
    362,
    424,
    472,
    3336,
    3384,
    3432,
    3474,
    3516
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHyperlink_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHyperlink_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHyperlink_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHyperlink_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IAccessibleHyperlinkProxyVtbl = 
{
    &IAccessibleHyperlink_ProxyInfo,
    &IID_IAccessibleHyperlink,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::nActions */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::doAction */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_keyBinding */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_name */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_localizedName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_anchor */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_anchorTarget */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_startIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_endIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_valid */
};

const CInterfaceStubVtbl _IAccessibleHyperlinkStubVtbl =
{
    &IID_IAccessibleHyperlink,
    &IAccessibleHyperlink_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHypertext, ver. 0.0,
   GUID={0x6B4F8BBF,0xF1F2,0x418a,{0xB3,0x5E,0xA1,0x95,0xBC,0x41,0x03,0xB9}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHypertext_FormatStringOffsetTable[] =
    {
    1868,
    1916,
    84,
    1978,
    2054,
    2096,
    2158,
    2214,
    2270,
    2340,
    2410,
    2480,
    2522,
    2564,
    2620,
    2662,
    2718,
    2788,
    2830,
    3558,
    3600,
    3648
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHypertext_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IAccessibleHypertextProxyVtbl = 
{
    &IAccessibleHypertext_ProxyInfo,
    &IID_IAccessibleHypertext,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_nHyperlinks */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlink */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlinkIndex */
};

const CInterfaceStubVtbl _IAccessibleHypertextStubVtbl =
{
    &IID_IAccessibleHypertext,
    &IAccessibleHypertext_ServerInfo,
    25,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHypertext2, ver. 0.0,
   GUID={0xCF64D89F,0x8287,0x4B44,{0x85,0x01,0xA8,0x27,0x45,0x3A,0x60,0x77}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHypertext2_FormatStringOffsetTable[] =
    {
    1868,
    1916,
    84,
    1978,
    2054,
    2096,
    2158,
    2214,
    2270,
    2340,
    2410,
    2480,
    2522,
    2564,
    2620,
    2662,
    2718,
    2788,
    2830,
    3558,
    3600,
    3648,
    3696
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHypertext2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IAccessibleHypertext2ProxyVtbl = 
{
    &IAccessibleHypertext2_ProxyInfo,
    &IID_IAccessibleHypertext2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_nHyperlinks */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlink */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlinkIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext2::get_hyperlinks */
};

const CInterfaceStubVtbl _IAccessibleHypertext2StubVtbl =
{
    &IID_IAccessibleHypertext2,
    &IAccessibleHypertext2_ServerInfo,
    26,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTable, ver. 0.0,
   GUID={0x35AD8070,0xC20C,0x4fb4,{0xB0,0x94,0xF4,0xF7,0x27,0x5D,0xD4,0x69}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTable_FormatStringOffsetTable[] =
    {
    3744,
    3800,
    3842,
    3898,
    3946,
    4002,
    4050,
    4098,
    3432,
    3474,
    4140,
    4182,
    4224,
    4272,
    4328,
    4376,
    4424,
    4480,
    4536,
    4592,
    4634,
    4682,
    4730,
    4786,
    4828,
    4870,
    4912,
    4954,
    5030
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTable_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTable_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(32) _IAccessibleTableProxyVtbl = 
{
    &IAccessibleTable_ProxyInfo,
    &IID_IAccessibleTable,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_accessibleAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_caption */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_childIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnExtentAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnHeader */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedChildren */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowExtentAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowHeader */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedChildren */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_summary */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isColumnSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isRowSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::selectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::selectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::unselectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::unselectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowColumnExtentsAtIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_modelChange */
};

const CInterfaceStubVtbl _IAccessibleTableStubVtbl =
{
    &IID_IAccessibleTable,
    &IAccessibleTable_ServerInfo,
    32,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTable2, ver. 0.0,
   GUID={0x6167f295,0x06f0,0x4cdd,{0xa1,0xfa,0x02,0xe2,0x51,0x53,0xd8,0x69}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTable2_FormatStringOffsetTable[] =
    {
    3744,
    3800,
    314,
    5072,
    2054,
    5114,
    5156,
    4098,
    5198,
    5246,
    5294,
    5342,
    5390,
    5432,
    5480,
    5528,
    5570,
    5612,
    5654,
    5696
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTable2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTable2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IAccessibleTable2ProxyVtbl = 
{
    &IAccessibleTable2_ProxyInfo,
    &IID_IAccessibleTable2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_cellAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_caption */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_columnDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_rowDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_summary */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_isColumnSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_isRowSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::selectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::selectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::unselectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::unselectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_modelChange */
};

const CInterfaceStubVtbl _IAccessibleTable2StubVtbl =
{
    &IID_IAccessibleTable2,
    &IAccessibleTable2_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTableCell, ver. 0.0,
   GUID={0x594116B1,0xC99F,0x4847,{0xAD,0x06,0x0A,0x7A,0x86,0xEC,0xE6,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTableCell_FormatStringOffsetTable[] =
    {
    230,
    5738,
    84,
    5072,
    5786,
    5114,
    5834,
    5876,
    5946
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTableCell_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTableCell_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTableCell_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTableCell_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IAccessibleTableCellProxyVtbl = 
{
    &IAccessibleTableCell_ProxyInfo,
    &IID_IAccessibleTableCell,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnExtent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnHeaderCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowExtent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowHeaderCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_isSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowColumnExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_table */
};

const CInterfaceStubVtbl _IAccessibleTableCellStubVtbl =
{
    &IID_IAccessibleTableCell,
    &IAccessibleTableCell_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleImage, ver. 0.0,
   GUID={0xFE5ABB3D,0x615E,0x4f7b,{0x90,0x9F,0x5F,0x0E,0xDA,0x9E,0x8D,0xDE}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleImage_FormatStringOffsetTable[] =
    {
    0,
    5988,
    6044
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleImage_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleImage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleImage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleImage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IAccessibleImageProxyVtbl = 
{
    &IAccessibleImage_ProxyInfo,
    &IID_IAccessibleImage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_imagePosition */ ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_imageSize */
};

const CInterfaceStubVtbl _IAccessibleImageStubVtbl =
{
    &IID_IAccessibleImage,
    &IAccessibleImage_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0019, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleApplication, ver. 0.0,
   GUID={0xD49DED83,0x5B25,0x43F4,{0x9B,0x95,0x93,0xB4,0x45,0x95,0x97,0x9E}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleApplication_FormatStringOffsetTable[] =
    {
    0,
    42,
    6092,
    6134
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleApplication_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleApplication_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IAccessibleApplicationProxyVtbl = 
{
    &IAccessibleApplication_ProxyInfo,
    &IID_IAccessibleApplication,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_appName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_appVersion */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_toolkitName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_toolkitVersion */
};

const CInterfaceStubVtbl _IAccessibleApplicationStubVtbl =
{
    &IID_IAccessibleApplication,
    &IAccessibleApplication_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleDocument, ver. 0.0,
   GUID={0xC48C7FCF,0x4AB5,0x4056,{0xAF,0xA6,0x90,0x2D,0x6E,0x1D,0x11,0x49}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleDocument_FormatStringOffsetTable[] =
    {
    6176
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleDocument_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleDocument_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IAccessibleDocumentProxyVtbl = 
{
    &IAccessibleDocument_ProxyInfo,
    &IID_IAccessibleDocument,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleDocument::get_anchorTarget */
};

const CInterfaceStubVtbl _IAccessibleDocumentStubVtbl =
{
    &IID_IAccessibleDocument,
    &IAccessibleDocument_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0021, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

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
    ia2_api_all__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _ia2_api_all_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IAccessibleHyperlinkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleImageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2_3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleActionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleValueProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTableProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleApplicationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTable2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTextSelectionContainerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleEditableTextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleHypertext2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleComponentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTableCellProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleHypertextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleText2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleDocumentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2_2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2_4ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleRelationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTextProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ia2_api_all_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IAccessibleHyperlinkStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleImageStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2_3StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleActionStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleValueStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTableStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleApplicationStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTable2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTextSelectionContainerStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleEditableTextStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleHypertext2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleComponentStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTableCellStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleHypertextStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleText2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleDocumentStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2_2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2_4StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleRelationStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTextStubVtbl,
    0
};

PCInterfaceName const _ia2_api_all_InterfaceNamesList[] = 
{
    "IAccessibleHyperlink",
    "IAccessibleImage",
    "IAccessible2_3",
    "IAccessibleAction",
    "IAccessibleValue",
    "IAccessible2",
    "IAccessibleTable",
    "IAccessibleApplication",
    "IAccessibleTable2",
    "IAccessibleTextSelectionContainer",
    "IAccessibleEditableText",
    "IAccessibleHypertext2",
    "IAccessibleComponent",
    "IAccessibleTableCell",
    "IAccessibleHypertext",
    "IAccessibleText2",
    "IAccessibleDocument",
    "IAccessible2_2",
    "IAccessible2_4",
    "IAccessibleRelation",
    "IAccessibleText",
    0
};

const IID *  const _ia2_api_all_BaseIIDList[] = 
{
    0,
    0,
    &IID_IAccessible,
    0,
    0,
    &IID_IAccessible,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &IID_IAccessible,
    &IID_IAccessible,
    0,
    0,
    0
};


#define _ia2_api_all_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ia2_api_all, pIID, n)

int __stdcall _ia2_api_all_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ia2_api_all, 21, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ia2_api_all, 21, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo ia2_api_all_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ia2_api_all_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ia2_api_all_StubVtblList,
    (const PCInterfaceName * ) & _ia2_api_all_InterfaceNamesList,
    (const IID ** ) & _ia2_api_all_BaseIIDList,
    & _ia2_api_all_IID_Lookup, 
    21,
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

