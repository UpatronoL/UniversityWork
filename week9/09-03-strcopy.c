#include <stdio.h>

char *strcopy(char *s, char *t)
{
    char * temp = s;
    while((*s++ = *t++));
    return temp;
}

int main()
{
    char s[100] = "overwrite", *t = "me!";
    printf("%s\n", strcopy(s, t));
    return 0;
}
