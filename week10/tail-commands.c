#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getchars(char *s, int limit) {
    int i = 0, c;
    while (i < limit - 1 && EOF != (c = getchar()) && c != '\n')
        s[i++] = c;
    if (EOF == c && i == 0) return -1;
    s[i] = '\0';
    return i;
}

#define LINEMAX 1024

int main(int argc, char **argv) {
    char line[LINEMAX];
    int start_line = 0;
    int num_lines = 10;

    
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            if (argv[i][0] == '-') {
                char *rest = argv[i] + 1;
                int value = atoi(rest);

                if (value <= 0) {
                    printf("Illegal argument: %s\n", argv[i]);
                    return EXIT_FAILURE;
                }

                num_lines = value;
            } else if (argv[i][0] == '+') {
                char *rest = argv[i] + 1;
                int value = atoi(rest); 

                if (value <= 0) {
                    printf("Illegal argument: %s\n", argv[i]);
                    return EXIT_FAILURE;
                }

                start_line = value; 
            } else {
                printf("Illegal argument: %s\n", argv[i]);
                return EXIT_FAILURE;
            }
        }
    }

    if (start_line > 0) {
        int line_num = 0;
        while (getchars(line, sizeof(line)) >= 0) {
            line_num++;
            if (line_num >= start_line) {
                printf("%s\n", line);
            }
        }
    } else { 
        char **lines = (char **)malloc(num_lines * sizeof(*lines));
        int index = 0;

        if (lines == NULL) {
            printf(stderr, "Memory allocation failed.\n");
            return EXIT_FAILURE;
        }

        while (getchars(line, sizeof(line)) >= 0) {
            if (index >= num_lines) {
                free(lines[index % num_lines]);
            }
            lines[index++ % num_lines] = strdup(line); 
        }

        for (int i = index - num_lines; i < index; ++i) {
            if (i >= 0) {
                printf("%s\n", lines[i % num_lines]);
                free(lines[i % num_lines]);
            }
        }

        free(lines);
    }
    return 0;
}
