#include <stdio.h>

int strlength(char *s)
{
    int len = 0;
    for(; *(s + len) != '\0'; len++);
    return len; 
}

int main()
{
    printf("hello there");
    return 0;
}
