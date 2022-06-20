#include <stdio.h>
/* Soma do inverso de n numeros
   Clara Oliveira
   26/03/2022
*/
int main(void) {
  //variaveis
  int num_int;
  float soma = 0, inverso, num;

  //ler n
  printf("Digite um valor n: ");
  scanf("%d", &num_int);
  
  //somar inversos
  for (num = num_int; num > 0; num--)
    {
      inverso = 1/num;
      soma += inverso;
    }
  
  //exibir resultado
  printf("\nSoma = %f\n", soma);
  
  return 0;
}