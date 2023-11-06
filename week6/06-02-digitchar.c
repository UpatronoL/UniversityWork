#include <stdio.h>

int digitChar(int i)
{
    if(i < 10 && i >= 0)
        return '0' + i;
    if(i <= 35 && i >= 0)
        return 'A' + i - 10;
    return '?';
}

int main(int argc, char *argv[])
{
    for (int i = 0;  i < 40;  ++i)
	putchar(digitChar(i));
    putchar('\n');

    return 0;
}
