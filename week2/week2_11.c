#include <stdio.h>

#define LOWER ' '
#define UPPER '~'
#define STEP 1

int main()
{
    int c, count = 0;
    for (c = LOWER; c <= UPPER; c += STEP)
    {
        if(count < 8)
        {
            printf("%3d %c    ", c, c);
            count ++;
        }
        else
        {
            putchar('\n');
            count = 1;
            printf("%3d %c    ", c, c);
        }
    }
    putchar('\n');
    return 0;
}