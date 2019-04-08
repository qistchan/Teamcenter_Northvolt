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
# Define macros for C++ Dispatcher Library
# ==================================================

NV4BASEDISPATCH_DRV        = $(PROJECT_DRV)$(PS)nv4basedispatch
NV4BASEDISPATCH_OBJ        = $(PROJECT_OBJ)$(PS)libnv4basedispatch
NV4BASEDISPATCH_CXXS       = $(NV4BASEDISPATCH_DRV)$(PS)*.cxx
NV4BASEDISPATCH_CXX_FLAGS  = $(CXX_FLAGS) -DIPLIB=nv4basedispatch
NV4BASEDISPATCH_LINK_FLAGS = $(LINK_FLAGS)
NV4BASEDISPATCH_INCLUDES   = -I$(BASE_PATH)$(PS)src$(PS)server -I$(PROJECT_DRV) \
                                  -I$(TC_ROOT)$(PS)include -I$(TC_ROOT)$(PS)include_cpp 
NV4BASEDISPATCH_LIB_PATH   = $(LP)$(PROJECT_BIN) $(LIB_PATH)
NV4BASEDISPATCH_LIBS       = $(LIB_PREFIX)foundationdispatch$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)aws2dispatch$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)activeworkspacebomdispatch$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)NV4_LibCore$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)metaframework$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)tccore$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)tc$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)cxpom$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)pom$(LIB_SUFFIX) $(LIB_PREFIX)mld$(LIB_SUFFIX)  $(LIB_PREFIX)base_utils$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)extensionframework$(LIB_SUFFIX) $(SYSLIBS)
 
                                                                   
NV4BASEDISPATCH_LD_FLAGS   = $(NV4BASEDISPATCH_LINK_FLAGS) $(NV4BASEDISPATCH_LIB_PATH)
NV4BASEDISPATCH_TARGET     = $(PROJECT_BIN)$(PS)libnv4basedispatch




nv4basedispatch_all:   $(NV4BASEDISPATCH_OBJ)  $(NV4BASEDISPATCH_TARGET).$(LIB_EXT)


$(NV4BASEDISPATCH_OBJ) :
	@echo Creating: $(NV4BASEDISPATCH_OBJ)
	-@$(MAKE_DIR) $(NV4BASEDISPATCH_OBJ)

$(NV4BASEDISPATCH_CXXS) :


# ==================================================
# Windows Build Target
# ==================================================
$(NV4BASEDISPATCH_TARGET).dll : $(NV4BASEDISPATCH_CXXS)
	@echo ________________________________________________________________________________
	@echo Building C++ Dispatcher nv4basedispatch
	@echo Compiling Source...
	@$(COMPILE)  $(NV4BASEDISPATCH_CXX_FLAGS) $(NV4BASEDISPATCH_INCLUDES) -c $(**)   $(CARG_OUT)$(NV4BASEDISPATCH_OBJ)$(PS)
	@echo.
	@$(LINK) $(NV4BASEDISPATCH_LD_FLAGS) $(NV4BASEDISPATCH_OBJ)$(PS)*.$(OBJ_EXT)  $(NV4BASEDISPATCH_LIBS)  $(LARG_OUT)$(NV4BASEDISPATCH_TARGET).dll
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libnv4basedispatch.dll $(PROJECT_TC)$(PS)bin
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libnv4basedispatch.lib $(PROJECT_TC)$(PS)lib
	@echo ________________________________________________________________________________


	
# ==================================================
# UNIX Build Target
# ==================================================
$(NV4BASEDISPATCH_TARGET).so : $(NV4BASEDISPATCH_CXXS)
	@echo ________________________________________________________________________________
	@echo Building C++ Dispatcher nv4basedispatch
	@# The compile output goes to the current directory (project root), so remove any .o files
	@# that may have been left here from previous failed builds. Then after the compile move all .o
	@# files to the the desired obj folder.
	@-rm *.$(OBJ_EXT)
	@echo Compiling $(NV4BASEDISPATCH_CXXS)
	@$(COMPILE)  $(NV4BASEDISPATCH_CXX_FLAGS) $(NV4BASEDISPATCH_INCLUDES) -c $(NV4BASEDISPATCH_CXXS) 
	@mv *.$(OBJ_EXT) $(NV4BASEDISPATCH_OBJ)
	@echo Linking $(NV4BASEDISPATCH_TARGET).so
	@$(LINK) $(NV4BASEDISPATCH_LD_FLAGS) $(NV4BASEDISPATCH_OBJ)$(PS)*.$(OBJ_EXT)  $(NV4BASEDISPATCH_LIBS)  $(LARG_OUT) $(NV4BASEDISPATCH_TARGET).so
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libnv4basedispatch.so $(PROJECT_TC)$(PS)lib
	@echo ________________________________________________________________________________


nv4basedispatch_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning C++ Dispatcher nv4basedispatch
	-$(DELETE_DIR)  $(NV4BASEDISPATCH_OBJ)
	-$(DELETE_DIR)  $(NV4BASEDISPATCH_DRV)
	-$(DELETE_FILE) $(PROJECT_BIN)$(PS)libnv4basedispatch.*	
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)bin$(PS)libnv4basedispatch.dll
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)lib$(PS)libnv4basedispatch.lib	
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)lib$(PS)libnv4basedispatch.so	
	@echo ________________________________________________________________________________

