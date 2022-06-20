#include <stdio.h>
#include <string.h>
/*
  Clara Oliveira
  05/06/2022
  Escrever palavra na diagonal
*/
int main(void) {
  //variaveis
  char palavra[20];

  //ler palavra
  printf("Digite uma palavra: ");
  scanf(" %s", palavra);

  //imprimir como cascata
  for (int i = 0; i < strlen(palavra); i++)
    {
      for (int j = 0; j < i; j++) printf(" ");
      printf("%c\n", palavra[i]);
    }
  return 0;
}