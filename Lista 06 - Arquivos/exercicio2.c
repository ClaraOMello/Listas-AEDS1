#include <stdio.h>
#include <stdlib.h>
/*
  Clara Oliveira
  11/05/2022
  programa que receba um texto do usuário e grave o texto em um arquivo
*/
int main(void) {
  char caracter;
  FILE *arq = fopen("texto.txt", "w");
  
  printf("Digite 0 para concluir\n Texto: ");
  scanf("%c", &caracter);
  
  while (caracter != '0'){
    fprintf(arq, "%c", caracter);
    scanf("%c", &caracter);
  }

  fclose(arq);
  return 0;
}