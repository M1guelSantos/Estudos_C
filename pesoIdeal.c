#include <stdio.h>

int main(void){
  float altura, pesoideal;
  char sexo;
  printf("Informe a altura e o sexo(Ex:1.80 M)");
  scanf("%f %c", &altura, &sexo);
  pesoideal = ((sexo == 'M') || (sexo == 'm') ? (72.7 * altura) - 58 : (62.1 * altura) - 44.7);
  printf("Peso ideal: %.2f kg. \n", pesoideal) ;
  return 0;
}