#include <stdio.h>
#define MAX_DEPTH 32

// define stack[], depth, push(), and pop() here
double stack[MAX_DEPTH];
int depth = 0;
void push(double a)
{
    stack[depth++] = a;
}

double pop()
{
    depth --;
    double val = stack[depth];
    return val;
}

int main()
{
    push(1.0);
    push(2.0);
    push(3.0);
    printf("%g\n", pop());
    printf("%g\n", pop());
    push(4.0);
    push(5.0);
    printf("%g\n", pop());
    printf("%g\n", pop());
    printf("%g\n", pop());
    return 0;
}
