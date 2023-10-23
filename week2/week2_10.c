#include <stdio.h>

#define OUTSIDE 0
#define INSIDE 1

int main()
{
    int c, state;

    state = OUTSIDE;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if(state == INSIDE)
            {
                if(c == ' ' || c == '\t')
                    putchar(' ');
                else
                    putchar('\n');
            }
            state = OUTSIDE;
        }
        else
        {
            if(state == OUTSIDE)
            {
                state = INSIDE;
            }
            putchar(c);
        }
    }
    
    return 0;
}