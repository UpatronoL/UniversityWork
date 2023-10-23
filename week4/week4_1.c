#include <stdio.h>

void printNumber(int i);

int main()
{
    int i;
    for (i = 0; i <= 20; i++)
    {
        printNumber(i);
        putchar('\n');
    }
    return 0;
}

void printNumber(int i)
{
    if (i >= 2) printNumber(i / 2);
    putchar('0' + i % 2);
}