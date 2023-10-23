#include <stdio.h>

int main()
{
    int i, j;
    for(i = 1; i < 11; i++)
    {
        for(j = 1; j < 11; j++)
            printf("%2d   ", i * j);
        printf("\n");
        j = 0;
    }
    return 0;
}