//@<COPYRIGHT>@
//==================================================
//Copyright $2019.
//Siemens Product Lifecycle Management Software Inc.
//All Rights Reserved.
//==================================================
//@<COPYRIGHT>@

// 
//  @file
//  This file contains the implementation for the Business Object NV4_Abs_EquipmntRevisionImpl
//

#include <NV4_LibCore/NV4_Abs_EquipmntRevisionImpl.hxx>

#include <NV4_LibCore/NV4_CoreHeader.h>
#pragma warning(disable: 4100)
#pragma warning(disable: 4189)
using namespace nv4base;

//----------------------------------------------------------------------------------
// NV4_Abs_EquipmntRevisionImpl::NV4_Abs_EquipmntRevisionImpl(NV4_Abs_EquipmntRevision& busObj)
// Constructor for the class
//----------------------------------------------------------------------------------
NV4_Abs_EquipmntRevisionImpl::NV4_Abs_EquipmntRevisionImpl( NV4_Abs_EquipmntRevision& busObj )
   : NV4_Abs_EquipmntRevisionGenImpl( busObj )
{
}

//----------------------------------------------------------------------------------
// NV4_Abs_EquipmntRevisionImpl::~NV4_Abs_EquipmntRevisionImpl()
// Destructor for the class
//----------------------------------------------------------------------------------
NV4_Abs_EquipmntRevisionImpl::~NV4_Abs_EquipmntRevisionImpl()
{
}

//----------------------------------------------------------------------------------
// NV4_Abs_EquipmntRevisionImpl::initializeClass
// This method is used to initialize this Class
//----------------------------------------------------------------------------------
int NV4_Abs_EquipmntRevisionImpl::initializeClass()
{
    int ifail = ITK_ok;
    static bool initialized = false;

    if( !initialized )
    {
        ifail = NV4_Abs_EquipmntRevisionGenImpl::initializeClass( );
        if ( ifail == ITK_ok )
        {
            initialized = true;
        }
    }
    return ifail;
}



///
/// finalize operation input
/// @param pSavAsInput - desc
/// @param vecDeepCopyData - desc
/// @return - returns an int
///
int  NV4_Abs_EquipmntRevisionImpl::finalizeSaveAsInputBase( ::Teamcenter::SaveAsInput *pSavAsInput, std::vector<  ::Teamcenter::DeepCopyData* > *vecDeepCopyData )
{
	int ifail = ITK_ok;
	    TC_write_syslog("\n\t Entering D4_Abs_EquipmentRevisionImpl::finalizeSaveAsInputBase \n");

	    // Call the parent Implementation
	    ifail = NV4_Abs_EquipmntRevisionImpl::super_finalizeSaveAsInputBase( pSavAsInput, vecDeepCopyData);

	    // Your Implementation
	    std::string gObjName;        //Get the Object Name value
		bool isNull = false ;
		//char*cObjectType = NULL;
		//char*cObjectType1 = NULL;
		tag_t tNewObj = NULLTAG;

		pSavAsInput->getTag("newTargetObject",tNewObj,isNull);
		//TC_write_syslog("\tNewTarObj Tag : %d\n",tNewObj);
		if(tNewObj!=NULLTAG)
		{
			logical isLoaded = false;
			ifail,POM_is_loaded(tNewObj,&isLoaded);
			if(isLoaded)
					 {
						 TC_write_syslog("\n Source Object :loaded");
						 ITK(AOM_set_value_string(tNewObj,ATTR_IS_SUPPLITEM, LOV_NO));
						// ITK( AOM_ask_value_string(tNewObj,OBJECT_TYPE, &cObjectType));
						// ITK(AOM_ask_value_string(tNewObj,ATTR_IS_SUPPLITEM, &cObjectType1));
						// TC_write_syslog("\n object type is %s\n", cObjectType);
						// TC_write_syslog("\n ocObjectType1,,,object type is %s\n", cObjectType1);
					 }
					 else
					 {
						 TC_write_syslog("\n Source Object :not loaded");
						 ITK(AOM_load(tNewObj));
						// TC_write_syslog("\nAOM_load : %d ",ifail);
						 ITK(AOM_refresh(tNewObj,FALSE));
						// TC_write_syslog("\nAOM_refresh: %d ",ifail);
					 }
		}

		//MEM_TCFREE(cObjectType);
		//MEM_TCFREE(cObjectType1);


	    return ifail;
}
