#include <stdio.h>

#define SWAP(type, X, Y) do {type _tmp = X; X = Y; Y = _tmp; } while(0)

int main() 
{
    int i = 42, j = 666, k = 123;
    if (i > j) SWAP(int, i, j);
    else       SWAP(int, i, k);
    printf("%d %d %d\n", i, j, k);
    return 0; 
}