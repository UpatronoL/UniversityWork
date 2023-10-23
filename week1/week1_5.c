#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;
    while (celsius <= upper)
    {
        fahr =  32 + (celsius * 9 / 5);
        printf("%2.1f\t%.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
    return 0;
}