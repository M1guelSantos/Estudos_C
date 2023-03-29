#include <stdio.h>

int main(void) {
  float distancia, litros;
  printf("Digite a distancia (Km) e litros gastos(l): ");
  scanf("%f %f", &distancia, &litros);
  printf("Consumo: %.2fkm/l | %.2fl/100km\n", distancia/litros, (100 * litros) /
distancia); return 0;
}