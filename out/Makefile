SUBPATHS=$(shell ls -l | grep ^d | awk '{print $$9}')

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBPATHS) $(CORE_OBJS)
$(SUBPATHS):ECHO
	make -C $@
	@echo $(SUBPATHS)
$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $@

ECHO:
	@echo $(SUBPATHS)
