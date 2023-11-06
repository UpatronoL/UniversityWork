#include <stdio.h>

int digitChar(int i)
{
    if(i < 10 && i >= 0)
        return '0' + i;
    if(i <= 35 && i >= 0)
        return 'A' + i - 10;
    return '?';
}

void reverse(char s[], int len)
{
    int i = 0, j = len-1;
    char c;
    while(i < j)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        j--;
    }
}

int itos(int i, char s[])
{
    int j = 0;
   do
    {
        s[j] = digitChar(i % 10);
        i = i/10;
        j++;
    } while (i > 0);
    s[j] = '\0';
    reverse(s, j);
    return j;
}

int main(int argc, char *argv[])
{
    char s[1024];

    itos(    0, s);  printf("%s\n", s);
    itos(    1, s);  printf("%s\n", s);
    itos(   42, s);  printf("%s\n", s);
    itos(65535, s);  printf("%s\n", s);

    return 0;
}
