#include <stdio.h>

int main() {

    int c;
    while ((c = getchar()) != EOF) {
        if (digitValue(c) != -1) {
            printf("the value is %d\n", digitValue(c));
        }
        else if (c == '\n') {}
        else {
            printf("not a digit\n");
        }
    } 

    return 0;
}


void SignedBase (int number, int base) 
{
    int mod = number % base;
    if (number <= -1) 
    {
        putchar('-');
        number = -number;
    }
    if (number >= base) SignedBase(number/base, base);

    if (mod <= 9) putchar('0' + mod);
    else putchar('0' + (number % base));
} 