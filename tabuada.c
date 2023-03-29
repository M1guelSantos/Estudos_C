#include <stdio.h>

int main(void) {
  int i, j, k;

  for (i = 0; i < 2; i++) {
    k = i * 5;
    for (j = 1; j <= 10; j++) {
      printf("\n %2d * %2d = %3d", (k + 1), j, ((k + 1) * j));
      printf(" %2d * %2d = %3d", (k + 2), j, ((k + 2) * j));
      printf(" %2d * %2d = %3d", (k + 3), j, ((k + 3) * j));
      printf(" %2d * %2d = %3d", (k + 4), j, ((k + 4) * j));
      printf(" %2d * %2d = %3d", (k + 5), j, ((k + 5) * j));
    }
    printf("\n");
  }
  return 0;
}