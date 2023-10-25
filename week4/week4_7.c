#include <stdio.h>
#include <string.h>
#include <ctype.h>

int trim(char *str);

int main() {
    char line[100];
    
    while (fgets(line, sizeof(line), stdin)) 
    {
        int len = trim(line);
        
        if (len > 0)
            printf("%d %s\n", len, line);
    }
    
    return 0;
}


int trim(char *str) 
{
    int start = 0, end = strlen(str) - 1;

    while (str[start] == ' ' || str[start] == '\t') 
    {
        start++;
    }

    while (end >= start && (str[end] == ' ' || str[end] == '\t' || str[end] == '\n')) 
        end--;

    memmove(str, str + start, end - start + 1);
    str[end - start + 1] = '\0';
    return end - start + 1;
}
