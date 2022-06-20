#include <stdio.h>
#include <stdlib.h>
/*
  Clara Oliveira
  14/05/2022
  Considere um arquivo texto que armazene números em ponto flutuante em cada uma de suas linhas. Escreva um programa em C que determine o valor máximo, o valor mínimo e a média desses valores armazenados no arquivo. Imprima esses valores na tela.
*/
int main(void) {
  //variaveis
  FILE *arq = fopen("numeros.txt", "r");
  float num, maior, menor, soma = 0;
  int quant = 0;

  //maior e menor valor, media dos valores
  while (fscanf(arq, "%f", &num) != EOF)
    {
      quant++;
      if (quant == 1){
        maior = num;
        menor = num;
      }
      soma += num;
      if (num > maior) maior = num;
      else if (num < menor) menor = num;      
    }

  //exiibir valores
  printf("Maior: %.2f \nMenor: %.2f \nMédia: %.2f \n", maior, menor, (soma/ quant));
  
  return 0;
}