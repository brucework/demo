SUBDIRS=$(shell ls -l | grep ^d | awk '{print $$9}')

objs := $(ROOT_DIR)/$(OBJS_DIR)/get_time.o

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBDIRS) $(CORE_OBJS) systime
$(SUBDIRS):ECHO
	make -C $@


$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@ $(USERINCLUDE)
systime:$(CORE_OBJS)
	$(CC) $(ROOT_DIR)/$(OBJS_DIR)/$^ -o $(ROOT_DIR)/$(BIN_DIR)/$@

ECHO:
	@echo $(SUBDIRS)



