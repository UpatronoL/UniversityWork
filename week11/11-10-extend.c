#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct string 
{
    char * chars; 
    int size;
};

struct string string_new(char *s)
{
    struct string new = {strdup(s), strlen(s)};
    return new;
}

struct string string_append(struct string * s, int a)
{
    s -> chars = realloc(s -> chars, s -> size + 2);
    if(s -> chars == NULL) printf("memory allocation failed");
    s -> chars[s->size] = (char)a;
    s -> chars[++(s->size)] = '\0';
    // s -> size++; 
    return *s;
}

struct string string_extend(struct string * s, struct string * t)
{
    s -> chars = realloc(s -> chars, t -> size);
    memcpy(s -> chars + s -> size, t -> chars, t -> size);
    return *s;
}



struct string string_println(struct string * s)
{
    printf("%s\n", s -> chars);    
    return *s;
}

int main(int argc, char **argv)
{
    struct string s = string_new("hello");
    struct string t = string_new("wrod");
    string_append(&s, ' ');
    string_extend(&s, &t);
    string_println(&s);
    return 0;
}
