objs := test.o

all: $(objs)
	-gcc $^ -o test

$(objs):
	gcc -c uart_esc.c -o test.o

clean:
	rm test.o
	rm test
