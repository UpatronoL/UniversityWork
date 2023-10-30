#include <stdio.h>

int lower(int c)
{
    if('A' <= c && c <= 'Z')
        return c + 32;
    return c;
}

void toLower(char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        s[i] = lower(s[i]);
        i++;
    }
}

int main()
{
    char s[] = "Hello World How Are You?";
    toLower(s);
    printf("%s\n", s);
    return 0;
}
