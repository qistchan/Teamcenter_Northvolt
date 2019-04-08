

#ifdef __cplusplus
extern "C"
{
#endif
	#include <unidefs.h>
	#include <epm/epm_toolkit_tc_utils.h>
	#include <res/res_itk.h>
	#include <sa/tcfile_cache.h>
	#include <sa/tcvolume.h>
	#include <tc/tc.h>
	#include <tccore/item.h>
	#include <tccore/aom.h>
	#include <base_utils/Mem.h>
	#include <sa/sa.h>
	#include <tc/emh.h>
	#include <property/nr.h>
	#include <property/nr_errors.h>
	#include <server_exits/user_server_exits.h>
	#include <server_exits/user_server_exits.h>
	#include <tccore/custom.h>
	#include <ss/ss_const.h>
	#include <lov/lov.h>
	#include <fclasses/tc_string.h>
	#include <tccore/item.h>
	#include <sa/am.h>
	#include <tccore/workspaceobject.h>
	#include <tccore/aom_prop.h>
	#include <me/me.h>
	#include <tccore/grm.h>
	#include <user_exits/epm_toolkit_utils.h>
	#include <property/nr.h>
	#include <tccore/part.h>
	#include <tccore/uom.h>
	#include <tc/tc_startup.h>
	#include <tc/tc_macros.h>
	#include <tc/emh.h>
	#include <pom/pom/pom.h>
	#include <fclasses/tc_string.h>
    #include <user_exits/epm_toolkit_utils.h>
	#include <stdio.h>
	#include <tc/folder.h>
	#include <tccore/item.h>
	#include <tccore/grm.h>
	#include <ae/ae.h>
	#include <string.h>
	#include <tccore/item_msg.h>
	#include <tc/preferences.h>
	#include <common/emh_const.h>
	#include <tccore/aom.h>
	#include <tccore/aom_prop.h>
	#include <itk/bmf.h>
	#include <user_exits/user_exits.h>
	#include <tc/tc_util.h>
	#include <ict/ict_userservice.h>
	#include <tccore/tctype.h>
	#include <time.h>
	#include <itk/te.h>
	#include <ps/ps.h>
	#include <tccore/project.h>
	#include <bom/bom.h>
	#include <sa/site.h>
	#include <publication/iir_itk.h>
	#include <publication/ods_errors.h>
	#include <publication/ods_itk.h>
	#include <ae/datasettype.h>
	#include <cfm/cfm.h>
	#include <ae/dataset.h>
	#include <ecm/ecm.h>
	#include <epm/epm.h>
	#include <epm/cr_action_handlers.h>
	#include <epm/epm_errors.h>
	#include <sa/user.h>
	#include <sa/role.h>
	#include <sa/group.h>
	#include <sa/groupmember.h>
	#include <ss/ss_errors.h>
	#include <stdlib.h>
	#include <user_exits/epm_action_handlers.h>
	#include <user_exits/epm_rule_handlers.h>
	#include <user_exits/user_exit_msg.h>
	#include <pie/pie.h>
	#include <tccore/workspaceobject.h>
	#include <tccore/releasestatus.h>
	#include <form/form.h>


#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif






/*MEM_TCFREE
* Function which used to free the memory of any variable type
* @note
* @param[in]  pMem        variable name which need to be memory free in code
* Creator History:
*
*/




#define ITK( argument )						                                		\
{									                                        		\
        int retcode = argument;                                                     \
		char* s = NULL;                                                        		\
		if ( retcode != ITK_ok )													\
		{																			\
			TC_write_syslog( " "#argument "\n" );                                   \
			TC_write_syslog( "  returns [%d] \n", retcode );						\
			TC_write_syslog( "  in file ["__FILE__"], line [%d]\n\n", __LINE__ );   \
			if (s != 0) 															\
			{																	    \
			MEM_free (s);                                                           \
			s = 0;																	\
			}																		\
            return retcode ;                                                        \
		}                                                                   		\
																				    \
}



#define NV4_MEM_TCFREE_ARRAY(pMem , length) \
 {\
	if ( pMem != NULL ) \
 {\
 for (int i=0; i<length; i++) \
 {\
	 if ( pMem[i] != NULL ) \
	 MEM_free((void*) pMem[i]); \
 }\
 MEM_free(pMem); \
 pMem = NULL; \
 }\
}



#define MEM_TCFREE(pMem) {\
    if (pMem != NULL) {\
    MEM_free(pMem);\
    pMem = NULL;\
        }\
        }



//Item types, Attributes
#define REV_ID "item_revision_id"
#define TYPE_FOLDER  "Folder"
#define ATTR_IS_SUPPLITEM "nv4_is_supplieritem"
#define OBJECT_TYPE "object_type"
# define WRITE_PRIVILEGE	"WRITE"

//Constant Values
#define LOV_NO "N"
