root		:= $(shell pwd)
whoami		:= $(shell whoami)
host_type	:= $(shell arch)

CROSS_COMPILE :=

Q		:= @
MAKE	:= make
#Make variables (CC, etc...)
AS		= $(CROSS_COMPILE)as
LD		= $(CROSS_COMPILE)ld
CC		= $(CROSS_COMPILE)gcc
CPP		= $(CC) -E
AR		= $(CROSS_COMPILE)ar
NM		= $(CROSS_COMPILE)nm
STRIP		= $(CROSS_COMPILE)strip
OBJCOPY		= $(CROSS_COMPILE)objcopy
OBJDUMP		= $(CROSS_COMPILE)objdump
AWK		= awk
GENKSYMS	= scripts/genksyms/genksyms
INSTALLKERNEL	:= installkernel
DEPMOD		= /sbin/depmod
PERL		= perl
PYTHON		= python
CHECK		= sparse

RELEASE		:=$(root)/out
objpath		= $(RELEASE)/objs

# Project root path.

subdir	:= src lib

srcpath := $(foreach subdir, $(subdir), $(shell find $(subdir)  -type d))

target	:= main

# Use USERINCLUDE when you must reference the UAPI directories only.
USERINCLUDE := \
	-I$(root)/include

CFLAGS = $(USERINCLUDE) -O2

vpath %.h $(USERINCLUDE)
vpath %.c $(subdir)
vpath %.o $(objpath)

export vpath Q CC MAKE root whoami host_type CFLAGS 
.PHONY:all
all:$(RELEASE) $(target) $(subdir)

$(RELEASE):
	$(Q)mkdir -p $(RELEASE)
	$(Q)mkdir -p $(objpath)

$(target):$(subdir)
	$(Q)$(CC) $(foreach srcpath, $(srcpath),$(wildcard $(objpath)/$(srcpath)/*.o)) -o $(RELEASE)/$(target)

$(subdir):ECHO
	$(Q)mkdir -p $(objpath)/$@
	$(Q)$(MAKE) -C $@ objpath=$(objpath)/$@

ECHO:

#(Q)echo $(obj)
#(Q)echo $(srcpath)
#$(Q)echo $(subdir)

.PHONY:clean
clean:
	$(Q)rm $(objpath) -rf
	$(Q)rm $(RELEASE) -rf
