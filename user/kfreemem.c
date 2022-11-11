#include "user.h"

void main(void)
{
    long int freemem= kfreemem();
    long int sysmem = 128 * 1024 * 1024;
    long int usedmem = sysmem - freemem;
    printf("system memory : %d\nused memory : %d\nfree memory : %d \n", sysmem,usedmem,freemem);
}