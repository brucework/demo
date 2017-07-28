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

#SUBPATHS = $(shell ls -l | grep ^d | awk '{if($$9 !="out" && $$9 != "include" && $$9 != "lib" && $$9 != "modules") print $$9}')
LIBPATH = lib
SUBPATH = src

OUT = $(shell ls -l | grep ^d | awk '{if($$9 =="out") print $$9}')

ROOT_PATH = $(shell pwd)

OBJS_PATH = out/obj

BIN_PATH = out/bin

LIB_PATH := out/lib

CODE_SOURCE = ${wildcard *.c}

CODE_OBJS = ${patsubst %.c, %.o, $(CODE_SOURCE)}

INC_PATH := -I$(ROOT_PATH)/include

EX_LIB_PATH := $(ROOT_PATH)/lib

export CC ROOT_PATH OBJS_PATH BIN_PATH LIB_PATH INC_PATH EX_LIB_PATH

all:$(SUBPATH) $(CODE_OBJS)
	make -C $^

#$(SUBPATH):$(SUBPATH)
#	make -C $^

#lib:$(LIBPATH)
#	make -C $^
#OUT:ECHO
#	make -C out
#ECHO:
#	@echo $(SUBPATHS)
#$(CODE_OBJS):%.o:%.c
#	$(CC) -c $^ -o $(ROOT_PATH)/$(OBJS_PATH)/$@

clean:
	rm -rf $(OBJS_PATH)/*
	rm -rf $(BIN_PATH)/*
