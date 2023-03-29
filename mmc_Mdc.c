#include <stdio.h>

int main(void) {
  int resto, n1, n2, MMC = 1;
  scanf("%d %d", &n1, &n2);
  MMC = n1 * n2;
  do {
    resto = n1 % n2;
    n1 = n2;
    n2 = resto;
  } while (resto != 0);
  printf("MDC = %d MMC = %d", n1, MMC / n1);
  return 0;
}