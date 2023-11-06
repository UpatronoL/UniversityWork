#include <stdio.h>

int main()
{
    int i;

    // do loop

    i = 0;
    do {
      if (i == 3) continue;
      printf("%2d", i);
    } while (i++ < 5);
    printf("\n");

    // do loop using labels and goto

    i = 0;
    doBody:
      if (i == 3) goto doTest;
      printf("%2d", i);
    doTest:
      if (i++ < 5) goto doBody;
      printf("\n");

    // while loop

    i = 0;
    while (i++ < 5) {
      if (i == 3) continue;
      printf("%2d", i);
    }
    printf("\n");

    // while loop using labels and goto

    i = 1;
    doBody2:
      if(i == 3) goto doTest2;
      printf("%2d", i);
    doTest2:
      if(i++ < 5) goto doBody2;
      printf("\n");
    // for loop

    for (i = 0;  i < 5;  ++i) {
      if (i == 3) continue;
      printf("%2d", i);
      if (i == 4) break;
    }
    printf("\n");

    // for loop using labels and goto

    i = 0;
    doBody3:
      if(i == 3) goto doTest3;
      if(i == 4) goto stop;
      printf("%2d", i);
    doTest3:
      if(i++ < 5) goto doBody3;
      printf("\n");
    stop:
      printf("%2d", i);
      printf("\n");
    return 0;
}
