root := $(shell pwd)
whoami := $(shell whoami)
host_type := $(shell arch)

CROSS_COMPILE :=

Q		:= @
MAKE		:= make
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
OBJPATH		= $(RELEASE)/objs

# Project root path.
objtree := .

#subdir := $(objtree)/src
subdir := src

srctree := $(objtree)/src

obj = $(OBJPATH)/main.o \
	  $(OBJPATH)/log.o

target:= main

# Use USERINCLUDE when you must reference the UAPI directories only.
USERINCLUDE := \
	-I$(root)/include

CFLAGS = $(USERINCLUDE) -O2

vpath %.h $(USERINCLUDE)
vpath %.c $(srctree)
vpath %.o $(OBJPATH)

export vpath Q CC MAKE root objtree srctree OBJPATH CFLAGS obj
	
#sub-make:
#$(CUBDIR)

all: $(RELEASE) $(subdir) $(target)
	$(Q)$(CC) $(obj) -o $(RELEASE)/$(target)

$(RELEASE):
	$(Q)mkdir -p $(RELEASE)
	$(Q)mkdir -p $(OBJPATH)

$(target):$(subdir)
	$(Q)$(MAKE) -C $^

.PHONY:clean
clean:
	$(Q)rm $(OBJPATH) -rf
	$(Q)rm $(RELEASE) -rf
