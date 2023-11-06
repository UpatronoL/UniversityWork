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

int itosnbwp(int i, char s[], int n, int b, int w, int p)
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
        s[j] = p;
        j++;
        w--;
        count++;
    }
    s[j] = '\0';
    reverse(s, count);
    return count;
}

int itosnbw(int i, char s[], int n, int b, int w)
{
    return itosnbwp(i, s, n, b, w, ' '); // one line, using itosnbwp
}

int itosnb(int i, char s[], int n, int b)
{
    return itosnbw(i , s, n, b, 0);// one line, using itosnbw
}

int itosn(int i, char s[], int n)
{
    return itosnb(i, s, n, 10); // one line, using itosnb
}

int itos(int i, char s[])
{
    return itosn(i, s, 1024); // one line, using itosn
}

void iprint(int i)
{
    char s[1024];
    itos(i, s); // three lines, using itosn
    printf("%s\n", s);
}

int main(int argc, char *argv[])
{
    char s[1024];

    iprint(    0);
    iprint(    1);
    iprint(   42);
    iprint(65535);

    itos(    0, s);  printf("%s\n", s);
    itos(    1, s);  printf("%s\n", s);
    itos(   42, s);  printf("%s\n", s);
    itos(65535, s);  printf("%s\n", s);

    itosn(    0, s, 4);  printf("%s\n", s);
    itosn(    1, s, 4);  printf("%s\n", s);
    itosn(   42, s, 4);  printf("%s\n", s);
    itosn(65535, s, 4);  printf("%s\n", s);

    itosnb(    0, s, 1024,  2);  printf("%s\n", s);
    itosnb(    1, s, 1024,  2);  printf("%s\n", s);
    itosnb(   42, s, 1024,  2);  printf("%s\n", s);
    itosnb(   42, s, 1024,  8);  printf("%s\n", s);
    itosnb(   42, s, 1024, 10);  printf("%s\n", s);
    itosnb(65535, s, 1024, 16);  printf("%s\n", s);

    itosnbw(    0, s, 1024,  2, 4);  printf("%s\n", s);
    itosnbw(    1, s, 1024,  2, 4);  printf("%s\n", s);
    itosnbw(   42, s, 1024,  2, 4);  printf("%s\n", s);
    itosnbw(   42, s, 1024,  8, 4);  printf("%s\n", s);
    itosnbw(   42, s, 1024, 10, 4);  printf("%s\n", s);
    itosnbw(65535, s, 1024, 16, 4);  printf("%s\n", s);

    itosnbwp(    0, s, 1024,  2, 4, ' ');  printf("%s\n", s);
    itosnbwp(    1, s, 1024,  2, 4, '0');  printf("%s\n", s);
    itosnbwp(   42, s, 1024,  2, 4, ' ');  printf("%s\n", s);
    itosnbwp(   42, s, 1024,  8, 4, ' ');  printf("%s\n", s);
    itosnbwp(   42, s, 1024, 10, 4, '0');  printf("%s\n", s);
    itosnbwp(65535, s, 1024, 16, 4, '0');  printf("%s\n", s);

    return 0;
}
