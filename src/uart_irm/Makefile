SUBPATHS=$(shell ls -l | grep ^d | awk '{print $$9}')

objs := $(ROOT_PATH)/$(OBJS_PATH)/uart_irm_v0.04.o
objs1 := $(ROOT_PATH)/$(OBJS_PATH)/uart_irm_sound_v0.02.o


C_FLAGS := -static

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBPATHS) $(CORE_OBJS) uart_irm irm_sound
$(SUBPATHS):ECHO
	make -C $@

$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_PATH)/$(OBJS_PATH)/$@

uart_irm:$(objs)
	$(CC) $^ -o $(ROOT_PATH)/$(BIN_PATH)/$@ $(C_FLAGS)
irm_sound:$(objs1)
	$(CC) $^ -o $(ROOT_PATH)/$(BIN_PATH)/$@ $(C_FLAGS)
