@rem This script is used to load the TEAMCENTER TC PLM environment after installing the Data model and Dispather( Server/Client) installation.
@echo off
@rem testing for git hub
@rem testing for git hub
echo Please make sure you have the correct path for  BASE_DIR , TC_ROOT and TC_DATA. This utility will throw the error if correct path is not set
set TC_ROOT=D:\Apps\Siemens\Teamcenter11
set TC_DATA=D:\Apps\Siemens\tcdata
call %TC_DATA%\tc_profilevars

set INFODBA_PASSWD=Zxcvb1


set BASE_DIR=D:\Sandbox\TC11_DEV\Configurations

@rem Stylesheet Installation

import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_UnitRevisionSummary.xml -type=XMLRenderingStylesheet -d=AWC_NV4_UnitRevisionSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_UnitCreate.xml -type=XMLRenderingStylesheet -d=AWC_NV4_UnitCreate -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\NV4_UnitRevisionSummary.xml -type=XMLRenderingStylesheet -d=NV4_UnitRevisionSummary -ref=XMLRendering -de=r
 import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_UnitRevisionSaveAs.xml -type=XMLRenderingStylesheet -d=AWC_NV4_UnitRevisionSaveAs -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_DeviceCreate.xml -type=XMLRenderingStylesheet -d=AWC_NV4_DeviceCreate -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_DeviceRevisionSaveAs.xml -type=XMLRenderingStylesheet -d=AWC_NV4_DeviceRevisionSaveAs -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_Factory_ConnRevisionSaveAs.xml -type=XMLRenderingStylesheet -d=AWC_NV4_Factory_ConnRevisionSaveAs -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_ModuleCreate.xml -type=XMLRenderingStylesheet -d=AWC_NV4_ModuleCreate -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_ModuleRevisionSaveAs.xml -type=XMLRenderingStylesheet -d=AWC_NV4_ModuleRevisionSaveAs -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\NV4_ModuleRevisionSummary.xml -type=XMLRenderingStylesheet -d=NV4_ModuleRevisionSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\NV4_DeviceRevisionSummary.xml -type=XMLRenderingStylesheet -d=NV4_DeviceRevisionSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\NV4_Factory_ConnRevisionSummary.xml -type=XMLRenderingStylesheet -d=NV4_Factory_ConnRevisionSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_ModuleRevisionSummary.xml -type=XMLRenderingStylesheet -d=AWC_NV4_ModuleRevisionSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_DeviceRevisionSummary.xml -type=XMLRenderingStylesheet -d=AWC_NV4_DeviceRevisionSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_Factory_ConnRevisionSummary.xml -type=XMLRenderingStylesheet -d=AWC_NV4_Factory_ConnRevisionSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_Factory_ConnCreate.xml -type=XMLRenderingStylesheet -d=AWC_NV4_Factory_ConnCreate -ref=XMLRendering -de=r

import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\Awb0NVAreaRevSummaryForShowObjectLocation.xml -type=XMLRenderingStylesheet -d=Awb0NVAreaRevSummaryForShowObjectLocation -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\Awb0NVMCADRevSummaryForShowObjectLocation.xml -type=XMLRenderingStylesheet -d=Awb0NVMCADRevSummaryForShowObjectLocation -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_NVDocumentCreate.xml -type=XMLRenderingStylesheet -d=AWC_NV4_NVDocumentCreate -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_NVMCADCreate.xml -type=XMLRenderingStylesheet -d=AWC_NV4_NVMCADCreate -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\Awp0NVDocumentRevSummary.xml -type=XMLRenderingStylesheet -d=Awp0NVDocumentRevSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\Awb0NVDisciplinRevSummaryForShowObjectLocation.xml -type=XMLRenderingStylesheet -d=Awb0NVDisciplinRevSummaryForShowObjectLocation -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\Awb0NVBuildingRevSummaryForShowObjectLocation.xml -type=XMLRenderingStylesheet -d=Awb0NVBuildingRevSummaryForShowObjectLocation -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_Awb0DesignElementSummary.xml -type=XMLRenderingStylesheet -d=AWC_NV4_Awb0DesignElementSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_PartRevisionSummary.xml -type=XMLRenderingStylesheet -d=AWC_NV4_PartRevisionSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_UnitSaveAs.xml -type=XMLRenderingStylesheet -d=AWC_NV4_UnitSaveAs -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\NV4_UnitSummary.xml -type=XMLRenderingStylesheet -d=NV4_UnitSummary -ref=XMLRendering -de=r
import_file -u=infodba -p=%INFODBA_PASSWD% -g=dba -f=%BASE_DIR%\stylesheets\AWC_NV4_EPMSignoffSummary.xml -type=XMLRenderingStylesheet -d=AWC_NV4_EPMSignoffSummary -ref=XMLRendering -de=r
@rem preference

preferences_manager -u=infodba -p=%INFODBA_PASSWD% -g=dba -mode=import -file=%BASE_DIR%\Preferences\General_prefernces.xml -scope=SITE -action=OVERRIDE
preferences_manager -u=infodba -p=%INFODBA_PASSWD% -g=dba -mode=import -file=%BASE_DIR%\Preferences\AWC_prefernces.xml -scope=SITE -action=OVERRIDE
preferences_manager -u=infodba -p=%INFODBA_PASSWD% -g=dba -mode=import -file=%BASE_DIR%\Preferences\NV4_Core_Prefs.xml -scope=SITE -action=OVERRIDE

@rem Active workspace Occurence Management Column configuration
rem import_uiconfig -u=infodba -p=infodba -g=dba -action=merge -file="C:\NorthVolt\Sandbox\Tc11_DEV\Configurations\AWC\AWC_Occmgmt_Columns\awb0occmgmtcolumns.xml"
rem export_uiconfig -u=infodba -p=infodba -g=dba -client_scope_URI=Awb0OccurrenceManagement -file="C:\NorthVolt\Sandbox\Tc11_OOTB\AWC_Occmgmt_Columns\awb0occmgmtcolumns.xml"

@rem Rule Tree

rem am_install_tree -u=infodba -p=%INFODBA_PASSWD% -g=dba -path="%BASE_DIR%\Ruletree\NV_Dev_ACL_V1.0.xml" -mode=replace_all -format="xml"
rem am_install_tree -u=infodba -p=%INFODBA_PASSWD% -g=dba -path="%BASE_DIR%\Ruletree\NV_Dev_ACL_V2.0.xml" -mode=replace_all -format="xml"

@rem Workflow

rem plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -transfermode=workflow_template_overwrite -xml_file="%BASE_DIR%/workflows/Apply_Watermark.xml"
rem plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -transfermode=workflow_template_overwrite -xml_file="%BASE_DIR%/workflows/Preliminary_Document.xml"
rem plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -transfermode=workflow_template_overwrite -xml_file="%BASE_DIR%/workflows/Preliminary_Equipment.xml"
plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -transfermode=workflow_template_overwrite -xml_file="%BASE_DIR%\workflows\Preliminary_MCAD.xml"
plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -transfermode=workflow_template_overwrite -xml_file="%BASE_DIR%\workflows\Release_DOCUMENT.xml"
rem plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -transfermode=workflow_template_overwrite -xml_file="%BASE_DIR%/workflows/Release_Equipment.xml"
plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -transfermode=workflow_template_overwrite -xml_file="%BASE_DIR%\workflows\Release_MCAD.xml"

@ rem Query

rem plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -xml_file="%BASE_DIR%/Query/__Nv4_Is_Approver_Assigned.xml"
plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -xml_file="%BASE_DIR%\Query\__Nv4_Is_Doc_Approver_Assigned.xml"
plmxml_import -u=infodba -p=%INFODBA_PASSWD% -g=dba -import_mode=overwrite -xml_file="%BASE_DIR%\Query\__Nv4_Is_MCAD_Approver_Assigned.xml"

