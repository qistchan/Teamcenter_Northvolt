//@<COPYRIGHT>@
//==================================================
//Copyright $2019.
//Siemens Product Lifecycle Management Software Inc.
//All Rights Reserved.
//==================================================
//@<COPYRIGHT>@


#include <common/library_indicators.h>

#if !defined(EXPORTLIBRARY)
#   error EXPORTLIBRARY is not defined
#endif

#undef EXPORTLIBRARY

#if !defined(LIBNV4_LIBCORE) && !defined(IPLIB)
#   error IPLIB or LIBNV4_LIBCORE is not defined
#endif

#undef NV4_LIBCORE_API
#undef NV4_LIBCOREEXPORT
#undef NV4_LIBCOREGLOBAL
#undef NV4_LIBCOREPRIVATE
