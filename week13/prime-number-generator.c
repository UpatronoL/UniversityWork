#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int strToDigit(char * number);
void printPrimeAll(char * number);

int main(int argc, char **argv)
{
	if(argc < 2 || argc > 2)
	{
		printf("Usage: ./primes max-prime\n");
		return EXIT_FAILURE;
	}

	printPrimeAll(*(argv + 1));

	return 0;
}

int strToDigit(char * number)
{
	int num = 0;
	while(*number) 
	{
		if(!isdigit(*number))
		{
			printf("Usage ./primes max-prime\n");
			return -1;
		}
		num = num*10 + (*number - '0');
		number++;
	}
	return num;
}

void printPrimeAll(char * number)
{
	int maxNum = strToDigit(number);
	int isPrime = 1;
	int count = 0;
	if(maxNum == -1) return;
	if(maxNum < 2)
	{
		printf("./prime max-prime %d is too small (must be at least 2)\n", maxNum);
		return;
	}
	for(int i = 2; i < maxNum; i++)
	{
		for(int j = 2; j <= sqrt(i); j++)
			if(i % j == 0) isPrime = 0;
		if(isPrime) count ++;
		isPrime = 1;
	}
	printf("%d\n", count);
}
