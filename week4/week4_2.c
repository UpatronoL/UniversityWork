#include <stdio.h>

void printDigit(int i);

int main()
{
    int i;
    for (i = 0; i <= 20; i++)
    {
        printDigit(i);
        putchar(' ');
    }
    return 0;
}

void printDigit(int i)
{
    if (i < 10) printf("%d", i);
    else putchar('A' + (i - 10));
}