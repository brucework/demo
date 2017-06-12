SUBDIRS=$(shell ls -l | grep ^d | awk '{print $$9}')

objs := $(ROOT_DIR)/$(OBJS_DIR)/shm_write.o

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBDIRS) $(CORE_OBJS) shm_write
$(SUBDIRS):ECHO
	make -C $@


$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@ $(USERINCLUDE)
shm_write:$(CORE_OBJS)
	$(CC) $(ROOT_DIR)/$(OBJS_DIR)/$^ -o $(ROOT_DIR)/$(BIN_DIR)/$@  $(USERINCLUDE)

ECHO:
	@echo $(SUBDIRS)



