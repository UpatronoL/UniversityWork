#include <stdio.h>

int digitChar(int i)
{
    if(i < 10 && i >= 0)
        return '0' + i;
    if(i <= 35 && i >= 0)
        return 'A' + i - 10;
    return '?';
}

void iprint(int i)
{
    do
    {
        putchar(digitChar(i % 10));
        i = i/10;
    } while (i > 0);
    putchar('\n');
}

int main(int argc, char *argv[])
{
    iprint(    0);
    iprint(    1);
    iprint(   42);
    iprint(65535);

    return 0;
}
