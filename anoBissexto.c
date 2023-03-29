#include <stdio.h>

int main(void){
  int ano;
  printf("Informe o Ano: ");
  scanf("%d", &ano);
  ((ano%4==0 && ano%100 !=0) || ano%400==0 ) ? printf("O ano é Bissexto.\n") : printf("O ano nao e bissexto.\n");
return 0;
}