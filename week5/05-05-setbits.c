#include <stdio.h>

unsigned int setBits(unsigned int i, int p, int n, int b)
{   
    for (int j = 0; j < n; j++)
        i &= ~(1 << (p + j));
    i |= (b & ((1 << n) - 1)) << p;
    return i;
}

int main()
{
    unsigned int i = 0b10110011100011110000111110000011;

    printf("%u\n", i = setBits(i,  2, 30,  1)); //   7
    printf("%u\n", i = setBits(i,  6,  2,  7)); // 199
    printf("%u\n", i = setBits(i,  2,  4, 15)); // 255

    return 0;
}
