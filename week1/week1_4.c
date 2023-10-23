#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (fahr - 32) * 5 / 9;
        printf("%2.1f\t%.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}