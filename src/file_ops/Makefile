SUBPATHS=$(shell ls -l | grep ^d | awk '{print $$9}')

objs := $(ROOT_PATH)/$(OBJS_PATH)/fread.o

C_FLAGS := -static

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBPATHS) $(CORE_OBJS) fread
$(SUBPATHS):ECHO
	make -C $@

$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_PATH)/$(OBJS_PATH)/$@ $(INC_PATH)
fread:$(CORE_OBJS)
	$(CC) $(ROOT_PATH)/$(OBJS_PATH)/$^ -o $(ROOT_PATH)/$(BIN_PATH)/$@ $(C_FLAGS)

ECHO:
	@echo $(SUBPATHS)



