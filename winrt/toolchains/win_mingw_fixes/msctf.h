// win-arm32 real-header supplement: Text Services Framework (TSF) constants + one compartment GUID
// the SDK <msctf.h> defines and llvm-mingw's <msctf.h> omits. ui/base/ime/win/tsf_bridge.cc +
// tsf_event_router.cc use them (sentence-mode / phrase-prediction input handling).
#ifndef _WRT_MSCTF_SUPPLEMENT_
#define _WRT_MSCTF_SUPPLEMENT_
#include_next <msctf.h>

// scalar constants (values byte-for-byte from the SDK <msctf.h>: 866/1023/932):
#ifndef TF_CLIENTID_NULL
#define TF_CLIENTID_NULL    ((TfClientId)0)
#endif
#ifndef TF_INVALID_EDIT_COOKIE
#define TF_INVALID_EDIT_COOKIE ( 0 )
#endif
#ifndef TF_SENTENCEMODE_PHRASEPREDICT
#define TF_SENTENCEMODE_PHRASEPREDICT 0x0008
#endif

// GUID_COMPARTMENT_KEYBOARD_INPUTMODE_SENTENCE: the SDK <msctf.h>:819 DECLARES it (EXTERN_C const
// GUID) but its VALUE lives only in the SDK Uuid.Lib, and llvm-mingw's arm32 libuuid.a does NOT
// define it (llvm-nm: 0). tsf_bridge.cc:238 odr-uses it (ITfCompartmentMgr::GetCompartment arg),
// so a bare declaration would be an unresolved LINK symbol. Emit a real storage definition in the
// selectany COMDAT form (== the <initguid.h> expansion), value {CCF05DD9-4A87-11D7-A6E2-
// 00065B84435C} (the documented TSF GUID; cross-checked against the in-tree Rust windows-sys
// GUID::from_u128(0xccf05dd9_4a87_11d7_a6e2_00065b84435c)). Every including TU carries a folded
// definition, so resolution never depends on <initguid.h> in some other TU.
#if defined(__cplusplus)
#ifndef _WRT_MSCTF_SENTENCE_GUID_
#define _WRT_MSCTF_SENTENCE_GUID_
EXTERN_C const GUID DECLSPEC_SELECTANY GUID_COMPARTMENT_KEYBOARD_INPUTMODE_SENTENCE =
    { 0xccf05dd9, 0x4a87, 0x11d7, { 0xa6, 0xe2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c } };
#endif
#endif

// GUID_PROP_COMPOSING: identical situation to the sentence GUID above -- the SDK <msctf.h>:584
// only DECLARES it (EXTERN_C const GUID GUID_PROP_COMPOSING;), its VALUE lives solely in the SDK
// Uuid.Lib, and llvm-mingw's arm32 libuuid.a does NOT define it (llvm-nm: 0). ui/base/ime/win/
// tsf_text_store.cc:1056,1102 odr-uses &GUID_PROP_COMPOSING / IsEqualGUID(...), so the bare
// declaration is an unresolved LINK symbol. Emit a real storage definition in the selectany
// COMDAT form. VALUE {E12AC060-AF15-11D2-AFC5-00105A2799B5}, extracted from the REAL MS arm32
// Uuid.Lib (Win11SDK_10.0.22621 lib/um/arm/Uuid.Lib, member msctf_g.obj, .rdata section 16 =
// 60C02AE1 15AFD211 AFC50010 5A2799B5) and matching the documented TSF GUID_PROP_COMPOSING.
#if defined(__cplusplus)
#ifndef _WRT_MSCTF_PROP_COMPOSING_GUID_
#define _WRT_MSCTF_PROP_COMPOSING_GUID_
EXTERN_C const GUID DECLSPEC_SELECTANY GUID_PROP_COMPOSING =
    { 0xe12ac060, 0xaf15, 0x11d2, { 0xaf, 0xc5, 0x00, 0x10, 0x5a, 0x27, 0x99, 0xb5 } };
#endif
#endif

// ITfCandidateListUIElement: the SDK <msctf.h> declares it (candidate-window UI element) and
// llvm-mingw's <msctf.h> omits it. ui/base/ime/win/tsf_event_router.cc:245-246 does
// ComPtr<ITfCandidateListUIElement> + ui_element.As(&...), which needs the interface body AND
// __uuidof. Same structure as the mfidl.h shim: the BODY is gated on the SDK's own interface guard
// (set iff xwin's <msctf.h> won this TU and already defined it -- covaries exactly), and the
// __CRT_UUID_DECL is UNCONDITIONAL (xwin's MIDL_INTERFACE/DECLSPEC_UUID does not feed mingw's
// __uuidof, which reads only __CRT_UUID_DECL). Body verbatim from xwin um/msctf.h:12339-12371
// (8 methods, base ITfUIElement -- which mingw's <msctf.h> already provides, used above at line 242).
#if defined(__cplusplus) && !defined(CINTERFACE)
#if !defined(__ITfCandidateListUIElement_INTERFACE_DEFINED__)
MIDL_INTERFACE("ea1ea138-19df-11d7-a6d2-00065b84435c")
    ITfCandidateListUIElement : public ITfUIElement
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetUpdatedFlags(
            /* [out] */ DWORD *pdwFlags) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDocumentMgr(
            /* [out] */ ITfDocumentMgr **ppdim) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCount(
            /* [out] */ UINT *puCount) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetSelection(
            /* [out] */ UINT *puIndex) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetString(
            /* [in] */ UINT uIndex,
            /* [out] */ BSTR *pstr) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetPageIndex(
            /* [length_is][size_is][out] */ UINT *pIndex,
            /* [in] */ UINT uSize,
            /* [out] */ UINT *puPageCnt) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetPageIndex(
            /* [size_is][in] */ UINT *pIndex,
            /* [in] */ UINT uPageCnt) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetCurrentPage(
            /* [out] */ UINT *puPage) = 0;

    };
#endif  // !__ITfCandidateListUIElement_INTERFACE_DEFINED__
__CRT_UUID_DECL(ITfCandidateListUIElement, 0xea1ea138, 0x19df, 0x11d7, 0xa6, 0xd2, 0x00, 0x06, 0x5b, 0x84, 0x43, 0x5c)
#endif  // __cplusplus && !CINTERFACE

#endif  // _WRT_MSCTF_SUPPLEMENT_
