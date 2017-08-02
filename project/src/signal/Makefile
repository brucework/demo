objs-y := signal.o

CFLAGS += -lrt

subdir = $(shell ls -l | grep ^d | awk '{print $$9}')

all:$(objs-y) $(subdir)
	$(Q)mv $(objs-y) $(objpath)

%.o:%.h

$(subdir):ECHO
	$(Q)mkdir -p $(objpath)/$@
	$(Q)$(MAKE) -C $@ objpath=$(objpath)/$@
ECHO:
