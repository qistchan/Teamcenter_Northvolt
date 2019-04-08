//@<COPYRIGHT>@
//==================================================
//Copyright $2019.
//Siemens Product Lifecycle Management Software Inc.
//All Rights Reserved.
//==================================================
//@<COPYRIGHT>@

/* 
 * @file 
 *
 *   This file contains the implementation for the Extension NV4_ItemRevisionRevisePostAction
 *
 */
#include <NV4_LibCore/NV4_ItemRevisionRevisePostAction.hxx>
#include <NV4_LibCore/NV4_CoreHeader.h>
#include <unidefs.h>

#pragma warning(disable: 4100)
#pragma warning(disable: 4189)

int NV4_ItemRevisionRevisePostAction( METHOD_message_t * msg, va_list args )
{
 
	TC_write_syslog("\n Entering NV4_ItemRevisionRevisePostAction  \n");
	int iFail = ITK_ok;
	tag_t tSrcItemRev = va_arg(args, tag_t);
	const char* rev_id = va_arg(args, char*);
	tag_t *tNewRevision = va_arg(args, tag_t*);// New  Revision tag
	char*cObjRevID = NULL;
	char*cObjNewRevID = NULL;
	METHOD_id_t messageMethod = msg->method;

	tag_t tLatestRev = tNewRevision[0];
	//ITK(AOM_ask_value_string(tSrcItemRev,REV_ID, &cObjRevID));
	//TC_write_syslog("\n cObjRevID--> %s \n", cObjRevID);
	//ITK(AOM_ask_value_string(tLatestRev,REV_ID, &cObjNewRevID));
	//TC_write_syslog("\n cObjNewRevID--> %s \n", cObjNewRevID);

	int     n_references 			= 0, *levels = NULL;
	tag_t * reference_tags 			= NULL;
	char ** relations 			= NULL;
	//TC_write_syslog("\n ready to implement..........\n");
	//TC_write_syslog("\n tLatestRev       %d..........\n", tLatestRev);
	if(tSrcItemRev!=NULLTAG && tLatestRev!=NULLTAG)
	{
		ITK(WSOM_where_referenced(tSrcItemRev,1,&n_references, &levels, &reference_tags,&relations));
		 TC_write_syslog("\n referenced  count : %d \n",n_references);
		 if(n_references > 0)
								{
									for (int ii = 0; ii < n_references; ii++)
									{
										char  *		type		=    NULL;
										ITK(WSOM_ask_object_type2(reference_tags[ii], &type));
										TC_write_syslog("\n type : %s \n",type);
										if(tc_strcmp(TYPE_FOLDER, type)==0)
										{
											TC_write_syslog("\n Yes I am folder");
											logical   lVerdict                 = false;
											iFail = AM_check_privilege(reference_tags[ii], WRITE_PRIVILEGE, &lVerdict);
											if(lVerdict == true)
											{
												TC_write_syslog("\n Write access on folder type %s is %d  : \n",type,lVerdict);
												ITK(AOM_refresh(reference_tags[ii], true));
												if(tLatestRev!=NULLTAG)
												{
													ITK(FL_insert(reference_tags[ii], tLatestRev, 999));
													ITK(AOM_save(reference_tags[ii]));
													ITK(AOM_refresh(reference_tags[ii], false));
													ITK(AOM_unload(reference_tags[ii]));
												}
											}else{
												TC_write_syslog("\n Write access on folder type %s is %d  : \n",type,lVerdict);
											}

											//if (tItems) MEM_free(tItems);

										}

										MEM_TCFREE(type);
									}
								}
	}

	MEM_TCFREE(cObjRevID);
	MEM_TCFREE(cObjNewRevID);
	NV4_MEM_TCFREE_ARRAY(relations,1);


	return iFail;

}
