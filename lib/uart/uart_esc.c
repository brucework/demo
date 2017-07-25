#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main(void)
{
    struct bufs buf[4];

    buf[0].regs = regs1;
    buf[0].node = 1;
    buf[0].lens = sizeof(regs1)/sizeof(struct reg);

    buf[1].regs = regs2;
    buf[1].node = 2;
    buf[1].lens = sizeof(regs2)/sizeof(struct reg);

    buf[2].regs = regs3; 
    buf[2].node = 3;
    buf[2].lens = sizeof(regs3)/sizeof(struct reg);

    buf[3].regs = regs4;
    buf[3].node = 4;
    buf[3].lens = sizeof(regs4)/sizeof(struct reg);

    printf("%d %d \n", buf[0].regs->reg, buf[0].regs->val);
    printf("node %d %d \n", buf[0].node, buf[0].lens);
    printf("%d %d \n", buf[1].regs[3].reg, buf[1].regs[3].val);
    printf("node %d %d \n", buf[1].node, buf[1].lens);
    printf("%d %d \n", buf[2].regs->reg, buf[2].regs->val);
    printf("node %d %d \n", buf[2].node, buf[2].lens);
    printf("%d %d \n", buf[3].regs->reg, buf[3].regs->val);
    printf("node %d %d \n", buf[3].node, buf[3].lens);

    return 0;
}
