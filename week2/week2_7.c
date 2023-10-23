#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int d[127];

    for (int i = 0; i <= 126; i++)
        d[i] = 0;

    while ((c = getchar()) != EOF)
        if('\0' <= c && c <= '~')
            d[c - '\0']++;

    for (int i = 0; i <= 126; i++)
        if (d[i] != 0)
        {
            if(i == '\t')
                printf("\\t %d\n", d[i]);
            else if(i == '\n')
                printf("\\n %d\n", d[i]);
            else if(i == ' ')
                printf("  %d\n", d[i]);
            else
                printf("%c %d\n", i, d[i]);
        }
    return 0;
}