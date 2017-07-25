SUBPATHS=$(shell ls -l | grep ^d | awk '{print $$9}')

OUT = out

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBPATHS) $(CORE_OBJS)
$(SUBPATHS):ECHO
	make -C $@
ECHO:
	@echo $(SUBPATHS)
