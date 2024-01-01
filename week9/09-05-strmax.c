 finclude <stdio.h>

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

int main()
{
    printf("%d\n", strmax("", ""));
    printf("%d\n", strmax("", "abc"));
    printf("%d\n", strmax("abc", ""));
    printf("%d\n", strmax("abc", "abc"));
    printf("%d\n", strmax("abcdef", "abc"));
    printf("%d\n", strmax("abc", "abcdefghi"));
    return 0;
}
