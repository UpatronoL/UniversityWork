#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if(c == '\n')
            printf("\\n");
        else if(c == '\t')
            printf("\\t");
        else
            putchar(c);
    }
    return 0;
}