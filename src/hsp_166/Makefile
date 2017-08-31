SUBPATHS=$(shell ls -l | grep ^d | awk  '{print $$9}')

OUT = out

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBPATHS) $(CORE_OBJS)
$(SUBPATHS):ECHO
	make -C $@
$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_PATH)/$(OBJS_PATH)/$@ $(INC_PATH)

ECHO:
	@echo $(SUBPATHS)
