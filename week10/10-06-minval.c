#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc > 2)
        printf("too many arguments\n");
    else if(argc == 1)
        printf("no arguments where given\n");
    else
        if(*argv[1] == '-')
            printf("%d\n", atoi(argv[1] + 1));
        else
            printf("illigal argument\n");
    return 0;
}
