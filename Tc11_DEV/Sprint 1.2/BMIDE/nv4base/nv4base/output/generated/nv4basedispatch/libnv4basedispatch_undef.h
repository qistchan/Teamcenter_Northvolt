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

#if !defined(LIBNV4BASEDISPATCH) && !defined(IPLIB)
#   error IPLIB or LIBNV4BASEDISPATCH is not defined
#endif

#undef NV4BASEDISPATCH_API
#undef NV4BASEDISPATCHEXPORT
#undef NV4BASEDISPATCHGLOBAL
#undef NV4BASEDISPATCHPRIVATE
