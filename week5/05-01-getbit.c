#include <stdio.h>

unsigned int getBit(unsigned int i, int p)
{
    return (i >> p) & 1;
}

int main()
{
    unsigned int i = 0b10110011100011110000111110000011;

    for (int n = 0;  n < 16;  ++n)
        printf("%u\n", getBit(i, n));

    return 0;
}
