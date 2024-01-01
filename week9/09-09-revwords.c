#include <stdio.h>
#include <ctype.h>

void swapchars(char *c, char *d)
{
    char temp = *c;
    *c = *d;
    *d = temp;
}

char *revchars(char *s, char *t)
{
    char * temp = s;
    t --;
    while(temp < t)
    {
        swapchars(temp, t);
        temp ++;
        t --;
    }
    return s;
}

char *revwords(char *s) {
    char *wordB = s;
    char *wordE = s;

    while (*wordE != '\0') {
        if (!isalpha(*wordE)) {
            revchars(wordB, wordE);
            wordB = wordE + 1;
        }
        wordE++;
    }
    
    revchars(wordB, wordE);

    return s;
}
int main()
{
    char s[100] = "retep    repip. 4 , dekcip\n a kcep fo delkcip reppep";
    printf("%s\n", revwords(s));
    return 0;
}
