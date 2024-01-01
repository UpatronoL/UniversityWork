#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* define struct string here */
struct string 
{
    char * chars;
    int size;
};

struct string string_new(char *s)
{
    struct string new = {s, strlen(s)};
    return new;
}

struct string string_println(struct string s)
{
    printf("%s\n", s.chars);    
    return s;
}

int main(int argc, char **argv)
{
    struct string s = string_new(strdup("hello"));
    string_println(s);
    return 0;
}

