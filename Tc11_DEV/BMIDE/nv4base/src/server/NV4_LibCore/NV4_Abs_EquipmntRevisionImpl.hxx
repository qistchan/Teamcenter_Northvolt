//@<COPYRIGHT>@
//==================================================
//Copyright $2019.
//Siemens Product Lifecycle Management Software Inc.
//All Rights Reserved.
//==================================================
//@<COPYRIGHT>@

// 
//  @file
//  This file contains the declaration for the Business Object NV4_Abs_EquipmntRevisionImpl
//

#ifndef NV4BASE__NV4_ABS_EQUIPMNTREVISIONIMPL_HXX
#define NV4BASE__NV4_ABS_EQUIPMNTREVISIONIMPL_HXX

#include <NV4_LibCore/NV4_Abs_EquipmntRevisionGenImpl.hxx>

#include <NV4_LibCore/libnv4_libcore_exports.h>


namespace nv4base
{
    class NV4_Abs_EquipmntRevisionImpl; 
    class NV4_Abs_EquipmntRevisionDelegate;
}

class  NV4_LIBCORE_API nv4base::NV4_Abs_EquipmntRevisionImpl
    : public nv4base::NV4_Abs_EquipmntRevisionGenImpl
{
public:


    ///
    /// finalize operation input
    /// @param pSavAsInput - desc
    /// @param vecDeepCopyData - desc
    /// @return - returns an int
    ///
    	int  finalizeSaveAsInputBase( ::Teamcenter::SaveAsInput *pSavAsInput, std::vector<  ::Teamcenter::DeepCopyData* > *vecDeepCopyData );

protected:
    ///
    /// Constructor for a NV4_Abs_EquipmntRevision
    explicit NV4_Abs_EquipmntRevisionImpl( NV4_Abs_EquipmntRevision& busObj );

    ///
    /// Destructor
    virtual ~NV4_Abs_EquipmntRevisionImpl();

private:
    ///
    /// Default Constructor for the class
    NV4_Abs_EquipmntRevisionImpl();
    
    ///
    /// Private default constructor. We do not want this class instantiated without the business object passed in.
    NV4_Abs_EquipmntRevisionImpl( const NV4_Abs_EquipmntRevisionImpl& );

    ///
    /// Copy constructor
    NV4_Abs_EquipmntRevisionImpl& operator=( const NV4_Abs_EquipmntRevisionImpl& );

    ///
    /// Method to initialize this Class
    static int initializeClass();

    ///
    ///static data
    friend class nv4base::NV4_Abs_EquipmntRevisionDelegate;

};

#include <NV4_LibCore/libnv4_libcore_undef.h>
#endif // NV4BASE__NV4_ABS_EQUIPMNTREVISIONIMPL_HXX
