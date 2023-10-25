#include <stdio.h>

int lower(int c)
{
    return c + 32;
}

void toLower(char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        if('A' <= s[i] && s[i] <= 'Z')
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
