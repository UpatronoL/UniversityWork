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
char *reverse(char *s)
{
    if(strlength(s) == 0 || strlength(s) == 1)
        return s;
    char * start = s;
    char * end = s + strlength(s) - 1;
    while (start < end) {
        swapchars(start, end);
        start ++;
        end --;
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
    printf("%s\n", reverse(a));
    printf("%s\n", reverse(b));
    printf("%s\n", reverse(c));
    printf("%s\n", reverse(d));
    printf("%s\n", reverse(s));
    return 0;
}
