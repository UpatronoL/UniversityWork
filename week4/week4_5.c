#include <stdio.h>

void SignedBase (int number, int base);

int main() 
{
    SignedBase(-42,16);
    putchar('\n');
    return 0;
}

void SignedBase (int number, int base) 
{
    if (number <= -1) {
        putchar('-');
        number = -number;
    }
    if (number >= base) SignedBase(number/base, base);
    if (number % base <= 9) putchar('0' + number % base);
    else putchar('A' + (number % base) - 10);
} 