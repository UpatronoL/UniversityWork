#include <stdio.h>

int charIndex(char s[], int c)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c)
            return 1;
        i++;
    }
    return -1;
}

void squeezeAll(char s[], char t[])
{
    int in = 0, out = 0;
    while(s[in])
    {
        if(charIndex(t, s[in]) < 0)
            s[out++] = s[in];
        in++;
    }
    s[out] = '\0';
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
