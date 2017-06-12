SUBDIRS=$(shell ls -l | grep ^d | awk '{print $$9}')

objs := $(ROOT_DIR)/$(OBJS_DIR)/uart_irm_v0.04.o
objs1 := $(ROOT_DIR)/$(OBJS_DIR)/uart_irm_sound_v0.02.o


C_FLAGS := -static

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBDIRS) $(CORE_OBJS) uart_irm irm_sound
$(SUBDIRS):ECHO
	make -C $@

#$(CORE_OBJS):%.o:%.c
#	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@
$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJS_DIR)/$@

uart_irm:$(objs)
	$(CC) $^ -o $(ROOT_DIR)/$(BIN_DIR)/$@ $(C_FLAGS)
irm_sound:$(objs1)
	$(CC) $^ -o $(ROOT_DIR)/$(BIN_DIR)/$@ $(C_FLAGS)
