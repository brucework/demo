#MakeFile

rsa_main:  rsa_main.o rsa_lib.o
	gcc -O3 -o rsa_main rsa_main.o rsa_lib.o


rsa_main_test.o:rsa_main.c rsa_lib.h prime_number.h
	gcc -O3 -c rsa_main.c
 
rsa_lib.o: rsa_lib.c rsa_lib.h
	gcc -O3 -c rsa_lib.c
	 
.PHONY:clean
clean:
	rm *.o *.key *.bin *.txt rsa_main .??* -f


