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
    if (i >= 16) printNumber(i / 16);
    if(i >= 10 && i <= 15) printDigit(i);
    else putchar('0' + i%16);
}

void printDigit(int i)
{
    if (i < 10) printf("%d", i);
    else putchar('A' + (i - 10));
}