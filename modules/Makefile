SUBPATHS=$(shell ls -l | grep ^d | awk '{print $$9}')

OUT = out

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBPATHS) $(CORE_OBJS) test_lib.so
$(SUBPATHS):ECHO
	make -C $@
$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_PATH)/$(OBJS_PATH)/$@ $(INC_PATH)
test_lib.so:$(CORE_OBJS)
	$(CC) $(ROOT_PATH)/$(OBJS_PATH)/$^ -o $(ROOT_PATH)/$(BIN_PATH)/$@

ECHO:
	@echo $(SUBPATHS)
