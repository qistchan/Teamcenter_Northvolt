@rem This script is used to load the Teamcenter PLM environment after installing the Data model and Dispather( Server/Client) installation.
@echo off

echo Please make sure you have the correct path for  BASE_DIR , TC_ROOT and TC_DATA. This utility will throw the error if correct path is not set
set TC_ROOT=D:\Apps\Siemens\Teamcenter11
set TC_DATA=D:\Apps\Siemens\tcdata
call %TC_DATA%\tc_profilevars

set INFODBA_PASSWD=Zxcvb1


set BASE_DIR=D:\Sandbox\TC11_DEV\Configurations

rem bmide_manage_batch_lovs -u=infodba -p=%INFODBA_PASSWD% -g=dba -option=update -file="%BASE_DIR%\Externally_Managed_LOVs\NV4_Building_LOV.xml"
bmide_manage_batch_lovs -u=infodba -p=%INFODBA_PASSWD% -g=dba -option=update -file="%BASE_DIR%\Externally_Managed_LOVs\NV4_Discipline_LOV.xml"