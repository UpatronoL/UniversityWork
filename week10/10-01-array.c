#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *monthName(int n)
{
    static char name[][4] = {
        "???", // illegal month
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
        };
    return 1 <= n && n <= 12 ? name[n] : name[0];
}

int main() {
    printf("%s\n", monthName(7));
return 0; }