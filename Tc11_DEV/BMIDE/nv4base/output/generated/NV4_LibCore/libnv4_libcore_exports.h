//@<COPYRIGHT>@
//==================================================
//Copyright $2019.
//Siemens Product Lifecycle Management Software Inc.
//All Rights Reserved.
//==================================================
//@<COPYRIGHT>@

/** 
    @file 

    This file contains the declaration for the Dispatch Library  NV4_LibCore

*/

#include <common/library_indicators.h>

#ifdef EXPORTLIBRARY
#define EXPORTLIBRARY something else
#error ExportLibrary was already defined
#endif

#define EXPORTLIBRARY            libNV4_LibCore

#if !defined(LIBNV4_LIBCORE) && !defined(IPLIB)
#   error IPLIB or LIBNV4_LIBCORE is not defined
#endif

/* Handwritten code should use NV4_LIBCORE_API, not NV4_LIBCOREEXPORT */

#define NV4_LIBCORE_API NV4_LIBCOREEXPORT

#if IPLIB==libNV4_LibCore || defined(LIBNV4_LIBCORE)
#   if defined(__lint)
#       define NV4_LIBCOREEXPORT       __export(NV4_LibCore)
#       define NV4_LIBCOREGLOBAL       extern __global(NV4_LibCore)
#       define NV4_LIBCOREPRIVATE      extern __private(NV4_LibCore)
#   elif defined(_WIN32)
#       define NV4_LIBCOREEXPORT       __declspec(dllexport)
#       define NV4_LIBCOREGLOBAL       extern __declspec(dllexport)
#       define NV4_LIBCOREPRIVATE      extern
#   else
#       define NV4_LIBCOREEXPORT
#       define NV4_LIBCOREGLOBAL       extern
#       define NV4_LIBCOREPRIVATE      extern
#   endif
#else
#   if defined(__lint)
#       define NV4_LIBCOREEXPORT       __export(NV4_LibCore)
#       define NV4_LIBCOREGLOBAL       extern __global(NV4_LibCore)
#   elif defined(_WIN32) && !defined(WNT_STATIC_LINK)
#       define NV4_LIBCOREEXPORT      __declspec(dllimport)
#       define NV4_LIBCOREGLOBAL       extern __declspec(dllimport)
#   else
#       define NV4_LIBCOREEXPORT
#       define NV4_LIBCOREGLOBAL       extern
#   endif
#endif
