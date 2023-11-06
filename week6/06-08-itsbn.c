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

int itosnbw(int i, char s[], int n, int b, int w)
{
    int j = 0;
    int count = 0;
    do
    {
        if(n < 2) break;
        s[j] = digitChar(i % b);
        i = i/b;
        j++;
        count++;
        n--;
        w--;
    } while (i > 0);

    while (w > 0)
    {
        s[j] = ' ';
        j++;
        w--;
        count++;
    }
    s[j] = '\0';
    reverse(s, count);
    return count;
}

int main(int argc, char *argv[])
{
    char s[1024];

    itosnbw(    0, s, 1024,  2, 4);  printf("%s\n", s);
    itosnbw(    1, s, 1024,  2, 4);  printf("%s\n", s);
    itosnbw(   42, s, 1024,  2, 4);  printf("%s\n", s);
    itosnbw(   42, s, 1024,  8, 4);  printf("%s\n", s);
    itosnbw(   42, s, 1024, 10, 4);  printf("%s\n", s);
    itosnbw(65535, s, 1024, 16, 4);  printf("%s\n", s);

    return 0;
}
