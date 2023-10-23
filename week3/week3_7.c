#include <stdio.h>

#define LINEMAX 1000

int getLine(char lines[], int limit);

int main()
{
    char line[LINEMAX];
    int a, length;
    while((a = getchar()) != EOF)
    {
        length = getLine(line, LINEMAX+1);
        printf("%s, %d", line, length);
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

int removeBlanks(char line[], int length)
{
    int newLength = length;
    for (int i = 0; i < length - 1, i++)
    {
        
    }
    return length;
}