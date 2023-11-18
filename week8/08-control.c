#include <stdio.h>
#include <stdlib.h>

#define until(X) while(!(X))
#define do_until(X) do {} while(!(X))

int main() {
int i = 0;
      until (i++ > 8) printf("%d ", i);
      do {
          printf("%d ", i);
          --i;
      } until (i == 0);
      printf("\n");
return 0; }
