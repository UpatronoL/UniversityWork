#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 1;
    while(i <= (argc - 1))
    {
        printf("%s ", argv[i]);
        i++;
    }
    printf("\n");
    return 0;
}