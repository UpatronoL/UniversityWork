#include <stdio.h>
#include <ctype.h>

// define number and getnum() here

double number = 0;
int getnum(void)
{
    int value = 0, c;
    while (isdigit(c = getchar()))
        value = value * 10 + c - '0';
    number = value;
    return 0;
}

int main()
{
    while (getnum() != -1) printf("%g\n", number);
    return 0;
}
