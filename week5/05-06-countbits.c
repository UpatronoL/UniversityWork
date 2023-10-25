#include <stdio.h>

int countBits(unsigned int i)
{
    int count = 0;
    while(i > 0)
    {
        if(i & 1)
        {
            count ++;
            i = i >> 1;
        }
        else i = i >> 1;
    }
    return count;
}

int main()
{
    for (int i = 0;  i <= 15;  ++i)
        printf("%d\n", countBits(i));

    return 0;
}
