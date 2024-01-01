#include <stdio.h>

int strlength(char *s)
{
    char * a = s;
    // for(;*(a) != '\0'; a++);
    while(*a != '\0')
        a++;
    return a-s;
}

int main()
{
    printf("%d\n", strlength("hello, world")); // 12
    char s[] = "hello, world";
    printf("%d\n", strlength(s));              // 12
    char *p = s;
    printf("%d\n", strlength(p));              // 12
    return 0;
}
