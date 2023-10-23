#include <stdio.h>
#include <ctype.h>

int digitValue(int c, int b);
int strtoi(char *s, int b);

int main() {
    printf("%d\n", strtoi(" 101010", 2));
    printf("%d\n", strtoi(" +52", 8));
    printf("%d\n", strtoi("++42", 10)); 
    printf("%d\n", strtoi(" 2a", 16)); 
    printf("%d\n", strtoi(" -2A", 16));
    printf("%d\n", strtoi("--2A", 16));
    printf("%d\n", strtoi(" 7fffffff", 16)); 
    printf("%d\n", strtoi(" ffffffff", 16)); 
    
    return 0;
}

int digitValue(int c, int b)
{
    if (c >= '0' && c <= '9')  return (c - '0') < b ? c - '0' : -1;
    else if (c >= 'A' && c <= 'F')  return (c - 'A' + 10) < b ? c - 'A' + 10 : -1;
    else if (c >= 'a' && c <= 'f') return (c - 'a' + 10) < b ? c - 'a' + 10 : -1;
    else return -1;
}

int strtoi(char *s, int b)
{
    int value = 0;
    int digit;
    int sign = 1;

    while (*s == ' ' || *s == '\t') s++;

    while (*s == '+' || *s == '-') 
    {
        if (*s == '-') sign *= -1;
        s++;
    }

    while (*s != '\0') 
    {
        digit = digitValue(*s, b);
        if (digit == -1) break;
        value = value * b + digit;
        s++;
    }

    return sign * value;
}
