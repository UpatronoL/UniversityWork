#include <stdio.h>
#include <math.h>

float power(float x, float y);

int main()
{
    for(float i = 1; i <= 4; i += 0.5)
        printf("%.2f %.2f\n",i, power(i, 0.5));
    return 0;
}

float power(float x, float y)
{
    return exp(y * log(x));
}