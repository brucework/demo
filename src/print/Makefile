SUBDIRS=$(shell ls -l | grep ^d | awk '{print $$9}')

objs := $(ROOT_DIR)/$(OBJS_DIR)/print.o


C_FLAGS := -static

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBDIRS) $(CORE_OBJS) debug
$(SUBDIRS):ECHO
	make -C $@

#$(CORE_OBJS):%.o:%.c
#	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@
$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@ $(USERINCLUDE)

debug:$(objs)
	$(CC) $^ -o $(ROOT_DIR)/$(BIN_DIR)/$@
