#include <stdio.h>
/* 
  Leitura de um símbolo e exibição de mensagem correspondente
  Clara Oliveira
  23/03/2022
*/
int main(void) {
  //variaveis
  char simbolo;

  //leitura do simbolo
  printf("Digite um símbolo: ");
  scanf("%c", &simbolo);

  //exibir mensagem correspondente
  switch (simbolo)
    {
      case '<': printf("SINAL DE MENOR\n");
      break;
      case '>': printf("SINAL DE MAIOR\n");
      break;
      case '=': printf("SINAL DE IGUAL\n");
      break;
      default: printf("OUTRO SINAL\n");
      break;
    }
  
  return 0;
}