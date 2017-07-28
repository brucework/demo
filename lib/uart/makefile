objs := uart_esc.o

all:$(objs)
	@gcc -o test $(objs)

$(objs):uart_esc.h

.PHONY:clean
clean:
	-@rm $(objs)
	-@rm test
