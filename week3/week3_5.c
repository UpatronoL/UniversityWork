#include <stdio.h>

#define LINEMAX 1000

int getLine(char lines[], int limit);

int main()
{
    char line[LINEMAX];
    int a;
    while((a = getchar()) != EOF)
    {
        int length = getLine(line, LINEMAX);
        if(length >= 80)
            printf("%d %s", length, line);
    }
    return 0;
}

int getLine(char lines[], int limit)
{
    int c, i = 0;

    while ((c = getchar()) != EOF && c != '\n')
    {
        if(i < limit - 1)
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
    i++;
    return i;
}
