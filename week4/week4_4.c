#include <stdio.h>

void AnyBase (int number, int base);

int main()
{
    int i;
    for (i = 2; i <= 20; i++)
    {
        AnyBase(42, i);
        putchar(' ');
    }
    return 0;
}

void AnyBase (int number, int base) 
{
    int mod  = number % base;

    if (number >= base)
        AnyBase(number/base, base);
    if (mod <= 9)
        putchar('0' + mod);
    else 
        putchar('A' + mod - 10);
} 