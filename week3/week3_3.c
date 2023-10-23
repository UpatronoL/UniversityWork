#include <stdio.h>

int isPrime(int n);

int main()
{
    int count = 0;
    for(int i = 2; i <= 100000; i++)
        if(isPrime(i))
            count ++;
    printf("%d\n", count);
    return 0;
}

int isPrime(int n)
{
    for(int i = 2; i <= n/2; i++)
        if(n % i == 0)
            return 0;
    return 1;
}