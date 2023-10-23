#include <stdio.h>

#define LOWER ' '
#define UPPER '~'
#define STEP 1

int main()
{
    int c;
    for (c = LOWER; c <= UPPER; c += STEP)
    {
        printf("%c %d\n", c, c);
    }
    return 0;
}