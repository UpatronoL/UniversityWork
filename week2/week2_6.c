#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int d[10];
    for (int i = 0; i <= 9; i ++) 
        d[i] = 0;

    while((c = getchar()) != EOF) 
        if('0' <= c && c <= '9')
            d[c - '0']++;

    for (int i = 0; i <= 9; i++)
    {
        printf("%d %d ", i, d[i]);
        for (int j = 0; j <= d[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}