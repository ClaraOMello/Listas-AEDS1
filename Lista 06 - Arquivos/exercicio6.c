#include <stdio.h>
#include <stdlib.h>
/*
  Clara Oliveira
  14/05/2022
  Faça um programa que solicite ao usuário um número, em seguida, imprima na tela todos os seus divisores. Salve em um arquivo texto a soma total desses divisores.
*/

int main(void) {
  //variaveis
  int num, divisor, soma = 0;
  FILE *saida = fopen("somaDivisores.txt", "w");

  //ler numero
  printf("Digite um número: ");
  scanf("%d", &num);
  
  //calcular divisores
  divisor = num;
  printf("Divisores: ");
  while (divisor > 0)
    {
      if(num%divisor == 0)
      {
        soma += divisor;
        printf("%d ", divisor);
      }
      divisor--;
    }

  //escrever soma de divisores em um arquivo
  fprintf(saida, "%d", soma);

  fclose(saida);
  
  return 0;
}