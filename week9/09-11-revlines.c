#include <stdio.h>
#include <stdlib.h>

int getchars(char *s, int limit) {
    char c;
    int index = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        if (index < limit - 1) {
            s[index] = c;
            index++;
        }
    }
    s[index] = '\0';
    return index;
}

int strlength(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

char *strcopy(char *s, const char *t) {
    char *temp = s;
    while ((*s++ = *t++));
    return temp;
}

char *strduplicate(const char *string) {
    char *temp = (char *)malloc((strlength(string) + 1) * sizeof(char));
    if (temp != NULL) {
        strcopy(temp, string);
        return temp; 
    } else {
        printf("Memory allocation failed!\n");
        return NULL;
    }
}

#define LINEMAX 1000
#define LINESMAX 1000

int main() {
    char line[LINEMAX];
    char *lines[LINESMAX];
    int nlines = 0;

    while (nlines < LINESMAX && getchars(line, sizeof(line)) > 0) {
        lines[nlines++] = strduplicate(line);
    }

    for (int i = 0; i < nlines; i++) {
        printf("%s\n", lines[i]);
        free(lines[i]);
    }
    return 0;
}
