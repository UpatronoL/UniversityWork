#include <stdio.h>

#define OUTSIDE 0
#define INSIDE 1

int main()
{
    int c, state, wordCount = 0, charCount = 0, lineCount = 0;

    state = OUTSIDE;

    while ((c = getchar()) != EOF)
    {
        charCount++;
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUTSIDE;
            if (c == '\n') lineCount++;
        }
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
    printf("Number of charecters: %d\n", charCount);
    printf("Number of lines: %d\n", lineCount);
    return 0;
}