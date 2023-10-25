#include <stdio.h>

unsigned int clearBit(unsigned int i, int p)
{
    i &= ~(1 << p);
    return i;
}

int main()
{
    unsigned int i = 63;

    printf("%u\n", i = clearBit(i, 0));
    printf("%u\n", i = clearBit(i, 2));
    printf("%u\n", i = clearBit(i, 4));

    return 0;
}
