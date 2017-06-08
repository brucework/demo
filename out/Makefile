SUBDIRS=$(shell ls -l | grep ^d | awk '{print $$9}')

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBDIRS) $(CORE_OBJS)
$(SUBDIRS):ECHO
	make -C $@
	@echo $(SUBDIRS)
$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $@

ECHO:
	@echo $(SUBDIRS)
