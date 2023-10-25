#include <stdio.h>
#include <string.h>

void reverse(char s[], int len);

int main() {
    char line[100];
    int length;

    while(fgets(line, sizeof(line), stdin) != NULL) 
    {
        length = strlen(line);
        if(line[length - 1] == '\n') 
        {
            line[length - 1] = '\0';
            length--;
        }
        reverse(line, length);
        printf("%s\n", line);
    }

    return 0;
}

void reverse(char s[], int len) 
{
    int start = 0;
    int end = len - 1;
    char temp;

    while(start < end) 
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
