#include <stdio.h>

void squeeze(char s[], int c)
{
    int readIndex = 0;
    int writeIndex = 0;
    while(s[readIndex] != '\0')
    {
        if(s[readIndex] != c)
        {
            s[writeIndex] = s[readIndex];
            writeIndex++;
        }
        readIndex++;
    }
    s[writeIndex] = '\0';
}

int main()
{
    char s[]= "Hello world, how are you?";

    squeeze(s, 'o');
    printf("%s\n", s);

    return 0;
}
