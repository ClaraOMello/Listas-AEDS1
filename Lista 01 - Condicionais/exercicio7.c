#include <stdio.h>
/* 
  Calcular e exibir o valor de y, dado um valor de x
  Clara Oliveira
  23/03/2022
*/
int main(void) {
  //variaveis
  float y, x;
  
  //Leitura de x
  printf("Valor de x: ");
  scanf("%f", &x);

  //Condições e exibição de y
  if (x <= 1)
  {
    y = 1;
  }
  else if (x > 1 && x <= 2)
  {
    y = 2;
  }
  else if (x > 2 && x <= 3)
  {
    y = x * x;
  }
  else
  {
    y = x * x * x;
  }
  printf("Valor de y: %.2f\n", y);
  
  return 0;
}