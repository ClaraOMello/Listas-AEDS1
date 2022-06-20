#include <stdio.h>
/* 
   Imprimir elementos da serie de fibonacci menores que n
   Clara Oliveira
   26/03/2022
*/
int main(void) {
  //variaveis
  int valor, num1 = 0, num2 = 1, num3 = 1;
  
  //ler valor n
  printf("Valor limite: ");
  scanf("%d", &valor);
  
  //calcular sequencia ate valor n e exibir
  if (valor >= 1)
  {
    printf("%d ", num1);
    if (valor >= 2)
    {
      printf("- %d ", num2);
    }
  }
 
  while (num3 < valor)
    {
      num3 = num1 + num2;
      num1 = num2;
      num2 = num3;
      if (num3 < valor) 
      {
      printf("- %d ", num3);
      }
    }
  
  return 0;
}