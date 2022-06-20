#include <stdio.h>
#include <stdlib.h>
/*Implemente um programa que leia um arquivo texto e imprima, linha a linha, o seu conteúdo 
na tela. Imprima também a quantidade de linhas que este arquivo possui. */

int main(void) {
  //variaveis
  FILE *arq = fopen("texto.txt", "r");
  int quant = 1;
  char caracter;

  //ler texto
  //contar linhas
  while(fscanf(arq, "%c", &caracter) != EOF)
    {
      printf("%c",caracter);
      if(caracter == '\n') quant ++;
    }

  //escrever quant de linhas
  printf("\nQuantidade de linhas: %d\n", quant);

  fclose(arq);
  
  return 0;
}