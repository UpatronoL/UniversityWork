#include <stdio.h>

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

int digitChar(int i)
{
    if(i < 10 && i >= 0)
        return '0' + i;
    if(i <= 35 && i >= 0)
        return 'A' + i - 10;
    return '?';
}

int itosn(int i, char s[], int n)
{
    int j = 0;
    do
    {
        if(n < 2) break;
        s[j] = digitChar(i % 10);
        i = i/10;
        j++;
        n--;
    } while (i > 0);
    s[j] = '\0';
    reverse(s, j);
    return j;
}

int main(int argc, char *argv[])
{

    char s[1024];
    itosn(    0, s, 4);  printf("%s\n", s);
    itosn(   42, s, 4);  printf("%s\n", s);
    itosn(65535, s, 4);  printf("%s\n", s);

    return 0;
}
