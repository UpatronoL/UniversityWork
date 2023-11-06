#include <stdio.h>

int digitChar(int i)
{
    if(i < 10 && i >= 0)
        return '0' + i;
    if(i <= 35 && i >= 0)
        return 'A' + i - 10;
    return '?';
}

int itor(int i, char s[])
{
    int j = 0;
   do
    {
        s[j] = digitChar(i % 10);
        i = i/10;
        j++;
    } while (i > 0);
    s[j] = '\0';
    return j;
}

int main(int argc, char *argv[])
{
    char s[1024];

    itor(    0, s);  printf("%s\n", s);
    itor(    1, s);  printf("%s\n", s);
    itor(   42, s);  printf("%s\n", s);
    itor(65535, s);  printf("%s\n", s);

    return 0;
}
