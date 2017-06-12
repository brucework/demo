VERSION = 1
PATCHLEVEL = 0

ARCH ?= ARM
CROSS_COMPILE ?=

#USER_SHM_DEMO = y
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
Q		= @
BUILD_CFLAGS =

SUBDIRS = $(shell ls -l | grep ^d | awk '{if($$9 !="out" && $$9 != "include" && $$9 != "lib") print $$9}')
OUT = $(shell ls -l | grep ^d | awk '{if($$9 =="out") print $$9}')

ROOT_DIR = $(shell pwd)

OBJS_DIR = out/obj

BIN_DIR = out/bin

CODE_SOURCE = ${wildcard *.c}

CODE_OBJS = ${patsubst %.c, %.o, $(CODE_SOURCE)}

USERINCLUDE := -I$(ROOT_DIR)/include

USERLIB := -L$(ROOT_DIR)/lib

export CC ROOT_DIR OBJS_DIR BIN_DIR USERINCLUDE USERLIB


all:$(SUBDIRS) $(CODE_OBJS)
	make -C $^

#OUT:ECHO
#	make -C out
#ECHO:
#	@echo $(SUBDIRS)
#$(CODE_OBJS):%.o:%.c
#	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@

clean:
	@rm -rf $(OBJS_DIR)/*
	@rm -rf $(BIN_DIR)/*
