// win-arm32 real-header supplement: network property-bag names.
// The Windows SDK's <netlistmgr.h> (um/netlistmgr.h:209-210) defines the
// INetworkConnection property-bag keys
//   #define NA_InternetConnectivityV4 L"NA_InternetConnectivityV4"
//   #define NA_InternetConnectivityV6 L"NA_InternetConnectivityV6"
// whose values are NLM_INTERNET_CONNECTIVITY flags. llvm-mingw's <netlistmgr.h>
// ships the NLM_INTERNET_CONNECTIVITY enum but none of the NA_* key names, so
// components/security_interstitials/content/captive_portal_helper_win.cc fails
// "use of undeclared identifier". This -isystem #1 shim pulls mingw's real
// <netlistmgr.h> and adds ONLY the two keys that code reads, spelled exactly as
// the SDK spells them.
#ifndef _WRT_NETLISTMGR_SUPPLEMENT_
#define _WRT_NETLISTMGR_SUPPLEMENT_
#include_next <netlistmgr.h>
#ifndef NA_InternetConnectivityV4
#define NA_InternetConnectivityV4 L"NA_InternetConnectivityV4"
#endif
#ifndef NA_InternetConnectivityV6
#define NA_InternetConnectivityV6 L"NA_InternetConnectivityV6"
#endif
#endif  // _WRT_NETLISTMGR_SUPPLEMENT_
