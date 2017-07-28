#ifndef __DEBUG__
#define __DEBUG__
struct reg {
    int reg;
    int val;
};

struct bufs{
    struct reg *regs;
    int node;
    int lens;
};

struct reg regs1[] = {{1,2},{1,2}};
struct reg regs2[] = {{2,2},{1,2},{3,4},{5,6}};
struct reg regs3[] = {{3,2},{1,2}};
struct reg regs4[] = {{4,2},{1,2}};
struct reg regs5[] = {{4,2},{1,2}};

#endif  //end __DEBUG__
