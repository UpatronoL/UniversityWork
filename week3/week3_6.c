#include <stdio.h>

#define LINEMAX 1000

int getLine(char lines[], int limit);
void reverse(char s[], int len);

int main()
{
    char line[LINEMAX];
    int a, length;
    while((a = getchar()) != EOF)
    {
        length = getLine(line, LINEMAX+1);
        reverse(line, length);
        printf("%s", line);
    }
    return 0;
}

int getLine(char lines[], int limit)
{
    int c, i = 0;

    while ((c = getchar()) != EOF && c != '\n')
    {
        if(i < limit - 2)
        {
            lines[i] = c;
            i++;
        }
    }
    if(c == '\n')
    {
        lines[i] = c;
        i++;
    } 
    lines[i] = '\0';
    return i;
}

void reverse(char s[], int len)
{
    int i = 0, j = len - 1;
    char a;
    while(i < j)
    {
        a = s[i];
        s[i] = s[j];
        s[j] = a;
        i++;
        j--;
    }
}