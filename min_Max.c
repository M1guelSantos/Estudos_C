#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main() {
  int x, y;
  x = 5;
  y = 6;
  printf("Maior = %d Menor = %d \n", MAX(x, y), MIN(x, y));
  return 0;
}
