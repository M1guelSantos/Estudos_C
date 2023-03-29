#include <stdio.h>

int main(void) {
  int num, fat = 1, i = 1;
  printf("Digite um número: ");
  scanf("%d", &num);
  while (i <= num) {
    fat *= i;
    i++;
  }
  printf("Fatoral de %d é %d: ", num, fat);
  return 0;
}