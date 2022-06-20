#include <stdio.h>
/* Imprimir n elementos da serie de fibonacci
   Clara Oliveira
   26/03/2022
*/
int main(void) {
  //variaveis
  int quant, num1 = 0, num2 = 1, num3;
  
  //ler quant n
  printf("Digite a quantidade de elementos: ");
  scanf("%d", &quant);
  
  //calcular sequencia e exibir
  if (quant > 1)
  {
    printf("%d - %d ", num1, num2);
  }
  else if (quant > 0)
  {
    printf("%d \n", num1);
  }
  
  while (quant > 2)
    {
      num3 = num1 + num2;
      num1 = num2;
      num2 = num3;
      printf("- %d ", num3);
      quant--;
    }
  
  return 0;
}