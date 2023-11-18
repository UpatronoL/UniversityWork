// #ifndef __CALCULATOR_H__

// #define __CALCULATOR_H__ 1

#define NUMBER '0' // `operator' representing a number
int getch(void);
void ungetch(int c);
int getop(char line[], int limit);
int stackDepth(void);
void push(double d);
double pop(void);
double atod(char line[]);

/* getop - read and return operator, or read a number into a buffer */

// #endif