#include <stdio.h>

int charIndex(char s[], int c)
{
    int index = 0;
    while(s[index] != '\0')
    {
        if(s[index] == c)
            return index;
        index ++;
    }
    return -1;
}

int main()
{
    char s[]= "Hello world, how are you?";

    printf("%d\n", charIndex(s, 'H'));
    printf("%d\n", charIndex(s, 'w'));
    printf("%d\n", charIndex(s, '?'));
    printf("%d\n", charIndex(s, 'q'));
    printf("%d\n", charIndex(s, '\0'));

    return 0;
}
