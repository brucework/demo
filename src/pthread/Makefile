SUBPATHS=$(shell ls -l | grep ^d | awk '{print $$9}')

objs := $(ROOT_PATH)/$(OBJS_PATH)/pthread.o


C_FLAGS := -lpthread

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBPATHS) $(CORE_OBJS) pthread
$(SUBPATHS):ECHO
	make -C $@

#$(CORE_OBJS):%.o:%.c
#	$(CC) -c $^ -o $(ROOT_PATH)/$(OBJS_PATH)/$@
$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_PATH)/$(OBJS_PATH)/$@ $(INC_PATH)

pthread:$(objs)
	$(CC) $^ -o $(ROOT_PATH)/$(BIN_PATH)/$@ $(C_FLAGS)
