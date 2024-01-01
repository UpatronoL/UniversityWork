#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    argv++;
    while(*argv != NULL)
    {
        printf("%s ", *argv);
        argv++;
    }
    printf("\n");
    return 0;
}