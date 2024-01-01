#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAX_DEPTH 32

// define number and getop() here
double number = 0;
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

void getnum(int c)
{
    number = 0.0;
    int counter = 0;
    while(isdigit(c))
    {
	number = number * 10.0 + c - '0';
	c = getchar();
    }
    if(c != '.') return;
    double fraction = 0;
    while(isdigit(c = getchar()))
    {
	fraction = fraction * 10.0 + (c - '0');
	counter++;
    }
    number = number + fraction * pow(10, -counter);
}

int getop(void)
{
	int c;
	while(isblank(c = getchar()));
	if(c == EOF) return -1;
	if(c == '\n') return 0;
	if(!isdigit(c)) return c;
	getnum(c);
	return '0';
}

int main()
{
    for (;;) {
	int c = getop();
	double val;
	switch (c) {
	    case -1:	printf("EOF\n");			return 0;
	    case  0:	
			printf("newline\n");
			while(depth)
				printf("%g\n", pop());
			break;
		case '+': 	
			val = pop() + pop();
			push(val);
			// printf("%g\n", val); 
			break;
		case '-':	
			val = -pop() + pop();
			push(val);
			// printf("%g\n", val); 
			break;
		case '*':	
			val = pop() * pop();
			push(val);
			// printf("%g\n", val); 
			break;
		case '/':	{
			double temp = pop();
			val =  pop() / temp;
			push(val);
			// printf("%g\n", val); 
			break;}
	    case '0':	push(number);			break;
	    default:	printf("unknown operator '%c'\n", c);	break;
	}
    }
    return 0;
}
