#include <stdio.h>

int isPrime(int n);

int main()
{
    for(int i = 2; i <= 20; i++)
        if(isPrime(i))
            printf("%d\n", i);
    return 0;
}

int isPrime(int n)
{
    for(int i = 2; i <= n/2; i++)
        if(n % i == 0)
            return 0;
    return 1;
}