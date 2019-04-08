//@<COPYRIGHT>@
//==================================================
//Copyright $2019.
//Siemens Product Lifecycle Management Software Inc.
//All Rights Reserved.
//==================================================
//@<COPYRIGHT>@

/** 
    @file 

    This file contains the declaration for the Dispatch Library  nv4basedispatch

*/

#include <common/library_indicators.h>

#ifdef EXPORTLIBRARY
#define EXPORTLIBRARY something else
#error ExportLibrary was already defined
#endif

#define EXPORTLIBRARY            libnv4basedispatch

#if !defined(LIBNV4BASEDISPATCH) && !defined(IPLIB)
#   error IPLIB or LIBNV4BASEDISPATCH is not defined
#endif

/* Handwritten code should use NV4BASEDISPATCH_API, not NV4BASEDISPATCHEXPORT */

#define NV4BASEDISPATCH_API NV4BASEDISPATCHEXPORT

#if IPLIB==libnv4basedispatch || defined(LIBNV4BASEDISPATCH)
#   if defined(__lint)
#       define NV4BASEDISPATCHEXPORT       __export(nv4basedispatch)
#       define NV4BASEDISPATCHGLOBAL       extern __global(nv4basedispatch)
#       define NV4BASEDISPATCHPRIVATE      extern __private(nv4basedispatch)
#   elif defined(_WIN32)
#       define NV4BASEDISPATCHEXPORT       __declspec(dllexport)
#       define NV4BASEDISPATCHGLOBAL       extern __declspec(dllexport)
#       define NV4BASEDISPATCHPRIVATE      extern
#   else
#       define NV4BASEDISPATCHEXPORT
#       define NV4BASEDISPATCHGLOBAL       extern
#       define NV4BASEDISPATCHPRIVATE      extern
#   endif
#else
#   if defined(__lint)
#       define NV4BASEDISPATCHEXPORT       __export(nv4basedispatch)
#       define NV4BASEDISPATCHGLOBAL       extern __global(nv4basedispatch)
#   elif defined(_WIN32) && !defined(WNT_STATIC_LINK)
#       define NV4BASEDISPATCHEXPORT      __declspec(dllimport)
#       define NV4BASEDISPATCHGLOBAL       extern __declspec(dllimport)
#   else
#       define NV4BASEDISPATCHEXPORT
#       define NV4BASEDISPATCHGLOBAL       extern
#   endif
#endif
