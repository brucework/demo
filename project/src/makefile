objs-y := test.o

vpath %.h $(USERINCLUDE)
vpath %.c $(srctree)
vpath %.o $(OBJPATH)

all:$(objs-y)
	@mv $(objs-y) $(OBJPATH)
$(objs-y):%.c:%.h
	$(CC) -c $< -o $(OBJPATH)/$@

