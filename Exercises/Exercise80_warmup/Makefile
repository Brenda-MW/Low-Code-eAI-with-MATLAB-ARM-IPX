#
# Copyright (c) 2022 Arm Limited. All rights reserved.
#

# Application-specific object files
OBJS +=  $(APP).o

#########################################################################################
# Rules to build the application specific source files
#########################################################################################

# Include the system makefile
include ../../Systems/$(SYSTEM)/Source/makefile-system.inc

$(COMPILER_DIR)/$(APP).o: $(APP).c
	$(CC) -c $(OPTIMIZATIONS) $(CFLAGS) $(DEFINES) $< -o $@

OBJ_FILES += $(addprefix $(COMPILER_DIR)/, $(OBJS))

#########################################################################################
# Required for dependencies to work correctly when parameters change
#########################################################################################

# Make each object file dependent on the system configuration application parameters.
$(OBJ_FILES): $(TARGET_PAR)

#########################################################################################
# Update the defines, cflags, ldflags, and optimizations for the application build
#########################################################################################

## Shared defines between compilers
DEFINES +=

## AC6
ifeq ($(COMPILER_TYPE),AC6)
OPTIMIZATIONS += -g -O2

## GCC-RM
else ifeq ($(COMPILER_TYPE),GCC-RM)
OPTIMIZATIONS += -g -O2

## GCC-A-EABI
else ifeq ($(COMPILER_TYPE),GCC-A-EABI)
OPTIMIZATIONS += -g -O2

## GCC-A-ELF
else ifeq ($(COMPILER_TYPE),GCC-A-ELF)
OPTIMIZATIONS += -g -O2

else
$(error ERROR: COMPILER variable not valid. Must be either AC6, GCC. Currently: $(COMPILER) with COMPILER_TYPE set to $(COMPILER_TYPE))
endif
