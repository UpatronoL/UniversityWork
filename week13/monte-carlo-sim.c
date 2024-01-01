#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int strToDigit(char * number);
int monteCarlo(char * number);

#define RADIUS 1
#define MYRAND ((rand() % 1000) * pow(100, -2)) * 2
#define PYTHAGOREAN(val1, val2) sqrt(pow((val1.x - val2.x), 2) + pow((val1.y - val2.y), 2))

typedef struct Point
{
	double x;
	double y;
}point;

point newPoint(double x, double y)
{
	point newP = {x, y};
	return newP;
}

int main(int argc, char **argv)
{
	int pointsIn = 0;

	if(argc < 2 || argc > 2) printf("Usage: ./pi n-points\n");
	else
	{
		pointsIn = monteCarlo(*(argv + 1));
		if(pointsIn == EXIT_FAILURE)
			printf("Usage: ./pi n-points\n");
		else 
		{
			printf("%d out of %s points inside the circle\n", pointsIn, *(argv + 1));
			double estimatedPi = (double)pointsIn / strToDigit(*(argv + 1)) * 4.0;
			printf("pi is aproximately %.10f\n", estimatedPi);
		}
	}
	return 0;
}

int strToDigit(char * number)
{
	int num = 0;
	int index = 0;
	while(*(number + index)) 
	{
		if(!isdigit(*number))
		{
			printf("Usage ./primes n-points\n");
			return -1;
		}
		num = num*10 + (*number - '0');
		index++;
	}
	return num;
}

int monteCarlo(char * number)
{
	int numPoints = strToDigit(number);
	int counter = 0;
	point center = newPoint(1.0, 1.0);
	point temp;
	if(numPoints == -1)
	{
		printf("Usage ./pi n-points\n");
		return EXIT_FAILURE;
	}
	
	while(numPoints-- > 0)
	{
		temp.x = MYRAND;
		temp.y = MYRAND;
		if(PYTHAGOREAN(temp, center) < RADIUS) counter++; 
	}
	return counter;
}
