SUBPATHS=$(shell ls -l | grep ^d | awk  '{if($$9 !="python" && $$9 !="sh" && $$9 !="RIOT" && $$9 !="image_package" && $$9 != "openssl" && $$9 != "rsa" && $$9 != "rsa_test") print $$9}')

OUT = out

CORE_SOURCE=${wildcard *.c}
CORE_OBJS=${patsubst %.c, %.o, $(CORE_SOURCE)}
all:$(SUBPATHS) $(CORE_OBJS) demo
$(SUBPATHS):ECHO
	make -C $@
$(CORE_OBJS):%.o:%.c
	$(CC) -c $^ -o $(ROOT_PATH)/$(OBJS_PATH)/$@ $(INC_PATH)

demo:$(CORE_OBJS)
	$(CC) $(ROOT_PATH)/$(OBJS_PATH)/$^ -o $(ROOT_PATH)/$(BIN_PATH)/$@

ECHO:
	@echo $(SUBPATHS)
