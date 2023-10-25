#include <stdio.h>

int charIndex(char s[], int c)
{
    
}

void squeezeAll(char s[], char t[])
{
    
}

int main()
{
    char s[]= "Hello world, how are you?";

    squeezeAll(s, "aeiou");
    printf("%s\n", s);
    squeezeAll(s, " ,");
    printf("%s\n", s);
    squeezeAll(s, "Hld");
    printf("%s\n", s);

    return 0;
}
