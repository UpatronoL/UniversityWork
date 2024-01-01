#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc > 2)
        printf("too many arguments\n");
    else    
        printf("%d\n", argc == 1 ? 10 : atoi(*(argv + 1)));
    return 0;
}