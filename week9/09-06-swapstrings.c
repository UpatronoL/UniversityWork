#include <stdio.h>

int strlength(char *s)
{
    int len = 0;
    for(; *(s + len) != '\0'; len++);
    return len; 
}

#define MAX(A, B)	(A >= B ? (A) : (B))

int strmax(char *s, char *t)
{
    int a = strlength(s), b = strlength(t);
    return MAX(a, b);
}

void swapchars(char *c, char *d)
{
    char temp = *c;
    *c = *d;
    *d = temp;
}

void swapstrings(char *s, char *t)
{
    int length = strmax(s, t);
    for(int i = 0; i < length; i++)
        swapchars(s + i, t + i);
}

int main()
{
    char s[100] = "the first string";
    char t[100] = "another string, a bit longer";
    printf("%s\n%s\n", s, t);
    swapstrings(s, t);
    printf("%s\n%s\n", s, t);
    return 0;
}
