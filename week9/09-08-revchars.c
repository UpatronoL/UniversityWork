#include <stdio.h>

int strlength(char *s)
{
    int len = 0;
    for(; *(s + len) != '\0'; len++);
    return len; 
}

void swapchars(char *c, char *d)
{
    char temp = *c;
    *c = *d;
    *d = temp;
}

char *revchars(char *s, char *t)
{
    if(strlength(s) == 0 || strlength(s) == 1)
        return s;
    char * temp = s;
    t --;
    while(temp < t)
    {
        swapchars(temp, t);
        temp ++;
        t --;
    }
    return s;
}

int main()
{
    char a[100] = "";
    char b[100] = "b";
    char c[100] = "bc";
    char d[100] = "bcd";
    char s[100] = "peter piper picked a peck";
    printf("%s\n", revchars(a, a+strlength(a)));
    printf("%s\n", revchars(b, b+strlength(b)));
    printf("%s\n", revchars(c, c+strlength(c)));
    printf("%s\n", revchars(d, d+strlength(d)));
    printf("%s\n", revchars(s, s+strlength(s)));
    return 0;
}
