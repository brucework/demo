SUBPATHS=$(shell ls -l | grep ^d | awk '{print $$9}')

objs := $(ROOT_PATH)/$(OBJS_PATH)/uart_esc.o


C_FLAGS := -static

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBPATHS) $(CORE_OBJS) uart_test
$(SUBPATHS):ECHO
	make -C $@

$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_PATH)/$(OBJS_PATH)/$@

uart_test:$(objs)
	$(CC) $^ -o $(ROOT_PATH)/$(BIN_PATH)/$@ $(C_FLAGS)
