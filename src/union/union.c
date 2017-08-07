#include <stdio.h>
#include <stdlib.h>

union data1{
    int16_t a;
    unsigned char data[2];
} test1;

union data2{
    int16_t a;
    unsigned char data[2];
} test2;

union data3{
    int16_t a;
    unsigned char data[2];
} test3;

int main()
{
    int16_t a;
    unsigned char b,c;
    test1.a = -1;
    printf("test a=%d, b=%d ,a=%d\n",test1.data[0],test1.data[1], test1.data[0] + (test1.data[1]<<8) - 32768 * 2);
    test1.a = -2;
    printf("test a=%d, b=%d\n",test1.data[0],test1.data[1]);
    test1.a = -32767;
    printf("test a=%d, b=%d\n",test1.data[0],test1.data[1]);

    b = 255; 
    c = 128;
    a = (int16_t)(b<<8);
    test1.data[0] = b;
    test1.data[1] = c;
    printf("a=%d,b=%d,c=%d, test=%d\n", a, b,  c, test1.a);

    return 0;

}
