#include <stdio.h>

int main(void) {
  int tempo, horas, minutos, segundos;
  printf("Digite os segundos: ");
  scanf("%d", &tempo);
  horas = (tempo / 3600);
  minutos = (tempo / 3600) / 60;
  segundos = tempo % 60;
  printf("%dh, %dm, %ds", horas, minutos, segundos);
  return 0;
}