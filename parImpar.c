#include <stdio.h>

int main(void) {
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  printf("Número %d é %s\n", numero, (numero % 2) == 0 ? "par" : "impar");
  return 0;
}