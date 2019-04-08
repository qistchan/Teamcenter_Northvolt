# ==================================================
# Copyright 2015
# Siemens Product Lifecycle Management Software Inc.
# All Rights Reserved.
# ==================================================
# ==================================================
#             Auto-generated source
#                 DO NOT EDIT
# ==================================================



# ==================================================
# Define macros for C++ Server Library
# ==================================================
NV4_LIBCORE_SRC        = $(BASE_PATH)$(PS)src$(PS)server$(PS)NV4_LibCore
NV4_LIBCORE_DRV        = $(PROJECT_DRV)$(PS)NV4_LibCore
NV4_LIBCORE_OBJ        = $(PROJECT_OBJ)$(PS)libnv4_libcore
NV4_LIBCORE_CXXS       = $(NV4_LIBCORE_SRC)$(PS)*.c* $(NV4_LIBCORE_DRV)$(PS)*.cxx
NV4_LIBCORE_CXX_FLAGS  = $(CXX_FLAGS) -DIPLIB=nv4_libcore
NV4_LIBCORE_LINK_FLAGS = $(LINK_FLAGS)
NV4_LIBCORE_INCLUDES   = -I$(BASE_PATH)$(PS)src$(PS)server -I$(PROJECT_DRV) \
                                  -I$(TC_ROOT)$(PS)include -I$(TC_ROOT)$(PS)include_cpp \
                                  
NV4_LIBCORE_LIB_PATH   = $(LP)$(PROJECT_BIN)  $(LIB_PATH) 
NV4_LIBCORE_LIBS       = $(LIB_PREFIX)metaframework$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)tccore$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)tc$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)sa$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)cxpom$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)pom$(LIB_SUFFIX)  $(LIB_PREFIX)fclasses$(LIB_SUFFIX)  $(LIB_PREFIX)itk$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)mld$(LIB_SUFFIX)  $(LIB_PREFIX)base_utils$(LIB_SUFFIX) $(SYSLIBS)
                                                                   
NV4_LIBCORE_LD_FLAGS   = $(NV4_LIBCORE_LINK_FLAGS) $(NV4_LIBCORE_LIB_PATH)
NV4_LIBCORE_TARGET     = $(PROJECT_BIN)$(PS)libNV4_LibCore
NV4_LIBCORE_AUTO_TARG  = $(NV4_LIBCORE_DRV)$(PS)libnv4_libcoreinitializemodule.cxx
NV4_LIBCORE_AUTO_SRC   = $(PROJECT_HOME)$(PS)extensions$(PS)*.xml

NV4_LibCore_all:   $(NV4_LIBCORE_AUTO_TARG) $(NV4_LIBCORE_OBJ)  $(NV4_LIBCORE_TARGET).$(LIB_EXT)

$(NV4_LIBCORE_AUTO_TARG) : $(NV4_LIBCORE_AUTO_SRC)
	@echo ________________________________________________________________________________
	@echo Auto Generation of business object classes for NV4_LibCore
	$(TC_ROOT)$(PS)bin$(PS)bmide_generatecode$(SCRIPT_EXT) -templateProj=$(PROJECT_HOME) -templateDeps=$(TEMPLATE_HOME) -gensrcDir=$(PROJECT_DRV) -srcDir=$(BASE_PATH)$(PS)src$(PS)server -log=$(BASE_PATH)$(PS)output$(PS)generate.log
	@echo ________________________________________________________________________________

$(NV4_LIBCORE_OBJ) :
	@echo Creating: $(NV4_LIBCORE_OBJ)
	-@$(MAKE_DIR) $(NV4_LIBCORE_OBJ)

$(NV4_LIBCORE_CXXS) :


# ==================================================
# Windows Build Target
# ==================================================
$(NV4_LIBCORE_TARGET).dll : $(NV4_LIBCORE_CXXS)
	@echo ________________________________________________________________________________
	@echo Building C++ Server NV4_LibCore
	@echo Compiling Source...
	@$(COMPILE)  $(NV4_LIBCORE_CXX_FLAGS) $(NV4_LIBCORE_INCLUDES) -c $(**)   $(CARG_OUT)$(NV4_LIBCORE_OBJ)$(PS)
	@echo.
	@$(LINK) $(NV4_LIBCORE_LD_FLAGS) $(NV4_LIBCORE_OBJ)$(PS)*.$(OBJ_EXT)  $(NV4_LIBCORE_LIBS)  $(LARG_OUT)$(NV4_LIBCORE_TARGET).dll
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libNV4_LibCore.dll $(PROJECT_TC)$(PS)bin
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libNV4_LibCore.lib $(PROJECT_TC)$(PS)lib
	@echo ________________________________________________________________________________


	
# ==================================================
# UNIX Build Target
# ==================================================
$(NV4_LIBCORE_TARGET).so : $(NV4_LIBCORE_CXXS)
	@echo ________________________________________________________________________________
	@echo Building C++ Server NV4_LibCore
	@# The compile output goes to the current directory (project root), so remove any .o files
	@# that may have been left here from previous failed builds. Then after the compile move all .o
	@# files to the the desired obj folder.
	@-rm *.$(OBJ_EXT)
	@echo Compiling $(NV4_LIBCORE_CXXS)
	@$(COMPILE)  $(NV4_LIBCORE_CXX_FLAGS) $(NV4_LIBCORE_INCLUDES) -c $(NV4_LIBCORE_CXXS) 
	@mv *.$(OBJ_EXT) $(NV4_LIBCORE_OBJ)
	@echo Linking $(NV4_LIBCORE_TARGET).so
	@$(LINK) $(NV4_LIBCORE_LD_FLAGS) $(NV4_LIBCORE_OBJ)$(PS)*.$(OBJ_EXT)  $(NV4_LIBCORE_LIBS)  $(LARG_OUT) $(NV4_LIBCORE_TARGET).so
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libNV4_LibCore.so $(PROJECT_TC)$(PS)lib
	@echo ________________________________________________________________________________


NV4_LibCore_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning C++ Server NV4_LibCore
	-$(DELETE_DIR)  $(NV4_LIBCORE_OBJ)
	-$(DELETE_DIR)  $(NV4_LIBCORE_DRV)
	-$(DELETE_FILE) $(PROJECT_BIN)$(PS)libNV4_LibCore.*	
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)bin$(PS)libNV4_LibCore.dll
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)lib$(PS)libNV4_LibCore.lib	
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)lib$(PS)libNV4_LibCore.so	
	@echo ________________________________________________________________________________

