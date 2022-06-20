#include <stdio.h>
/* 
   Calcular a raiz de uma equação do primeiro grau
   Clara Oliveira
   23/03/2022
*/
int main(void) {
  //variaveis
  float raiz, coef_a, coef_b;
  
  //leitura dos coeficientes
  printf("Dada a equação ax + b = 0, defina:\n");
  printf("  Coeficiente a: ");
  scanf("%f", &coef_a);
  printf("  Coeficiente b: ");
  scanf("%f", &coef_b);
  
  //calculo da raiz
  raiz = -(coef_b)/coef_a;

  //exibição da raiz
  printf("Raiz: %f\n", raiz);
  
  return 0;
}