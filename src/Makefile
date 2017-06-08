SUBDIRS=$(shell ls -l | grep ^d | awk '{print $$9}')

OUT = out

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBDIRS) $(CORE_OBJS)
$(SUBDIRS):ECHO
	make -C $@
$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@

ECHO:
	@echo $(SUBDIRS)
