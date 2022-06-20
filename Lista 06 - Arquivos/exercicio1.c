#include <stdio.h>
#include <stdlib.h>
/*
  Clara Oliveira
  11/05/2022
  programa  que  escreva  de  1  até  10  em  um  arquivo,  armazenando  um  número  por linha.
*/
int main(void) {
  FILE *arq;
  
  arq = fopen("contagem.txt", "w");
  for (int x = 1; x <= 10; x++){
    fprintf(arq, "%d\n", x);
  }

  fclose(arq);

  printf("Concluído\n");
  
  return 0;
}