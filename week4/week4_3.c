#include <stdio.h>

void printNumber(int i);
void printDigit(int i);

int main()
{
    int i;
    for (i = 0; i <= 20; i++)
    {
        printNumber(i);
        putchar(' ');
    }
    return 0;
}

void printNumber(int i)
{
    if (i >= 2) printNumber(i / 8);
    putchar('0' + i % 8);
}

void printDigit(int i)
{
    if (i < 10) printf("%d", i);
    else putchar('A' + (i - 10));
}