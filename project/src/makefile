objs-y := main.o \
		log.o

#vpath %.h $(USERINCLUDE)
#vpath %.c $(srctree)
#vpath %.o $(OBJPATH)

all:$(objs-y)
	@mv $(objs-y) $(OBJPATH)

%.o:%.h

