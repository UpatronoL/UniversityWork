#include <stdio.h>

int strlength(char *s)
{
    int len = 0;
    for(; *(s + len) != '\0'; len++);
    return len;
}

char *strcopy(char *s, char *t)
{
    char * temp = s;
    while((*s++ = *t++));
    return temp;
}

char *strappend(char *s, char *t)
{
    strcopy(s + strlength(s), t);
    return s;
}

int main()
{
    char s[100] = "append ", *t = "me!";
    printf("%s\n", strappend(s, t));
    return 0;
}
