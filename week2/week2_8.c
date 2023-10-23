#include <stdio.h>

#define OUTSIDE 0
#define INSIDE 1

int main()
{
    int c, state, wordCount = 0;

    state = OUTSIDE;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUTSIDE;
        else
        {
            if(state == OUTSIDE)
            {
                state = INSIDE;
                wordCount++;
            }
        }
    }
    printf("Number of words: %d\n", wordCount);
    return 0;
}