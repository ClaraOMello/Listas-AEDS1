#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*
  Clara Oliveira
  03/06/2022
  Tirar espaços adicionais de um texto
*/

int main(void) {
  //variaveis
  char texto[100], formatado[100];
  int pos = 0;
  bool espaco = false;

  //ler texto
  printf("Digite o texto: ");
  scanf("%[^\n]", texto);

  //analisar composição do texto e quantidade de espaços
  //transferir caracteres validos para outro vetor
  for(int i = 0; i < strlen(texto); i++)
    {
      if(texto[i] == ' ')
      {
        if(espaco == false)
        {
          formatado[pos] = texto[i];
          pos++;
          espaco = true;
        }
      }
      else
      {
        espaco = false;
        formatado[pos] = texto[i];
        pos++;
      }
    }

  printf("Frase corrigida:\n  %s \n", formatado);
  
  return 0;
}