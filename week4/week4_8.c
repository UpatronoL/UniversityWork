#include <stdio.h>
#include <ctype.h>

int strtoi(char *s, int b);
int digitValue(int c, int b); 

int main() {
    printf("%d\n", strtoi("1010", 2));
    printf("%d\n", strtoi("1010", 8)); 
    printf("%d\n", strtoi("1010", 10)); 
    printf("%d\n", strtoi("1010", 16));
    printf("%d\n", strtoi("2A", 16)); 
    printf("%d\n", strtoi("1012", 2));
    printf("%d\n", strtoi("1789", 8)); 
    printf("%d\n", strtoi("101A", 10));
    printf("%d\n", strtoi("2FGH", 16)); 

    return 0;
}

int strtoi(char *s, int b) 
{
    int value = 0;
    int digit;
    while (*s != '\0') 
    {
        digit = digitValue(*s, b);
        if (digit == -1) break;
        value = value * b + digit;
        s++;
    }
    return value;
}

int digitValue(int c, int b) 
{
    if (c >= '0' && c <= '9')  return (c - '0') < b ? c - '0' : -1;
    else if (c >= 'A' && c <= 'F')  return (c - 'A' + 10) < b ? c - 'A' + 10 : -1;
    else if (c >= 'a' && c <= 'f') return (c - 'a' + 10) < b ? c - 'a' + 10 : -1;
    else return -1;
}
