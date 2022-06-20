#include <stdio.h>
#include <stdlib.h>

/*
  Clara Oliveira
  14/05/2022
  Escreva  um  programa  que  concatene  o  conteúdo  de  dois  arquivos.  O  conteúdo  dos  dois arquivos deverá ser adicionado em um terceiro arquivo.
*/

//procedimento para ler um arquivo e reescrever em outro
void lerArquivo(FILE *leitura)
{
  FILE *escrita = fopen("concatenacao.txt", "a");
  char caracter;

  while(fscanf(leitura, "%c", &caracter) != EOF)
    {
      fprintf(escrita, "%c", caracter);
    }

  fclose(escrita);
  fclose(leitura);
  
}

//procedimento limpar arquivo
void limpaArquivo(){
  FILE *arq = fopen("concatenacao.txt", "w");
  fclose(arq);
}

int main(void) {
  FILE *arq1 = fopen("texto1.txt", "r");
  FILE *arq2 = fopen("texto2.txt", "r");

  limpaArquivo();

  lerArquivo(arq1);
  lerArquivo(arq2);

  printf("Concluído\n");
  
  return 0;
}