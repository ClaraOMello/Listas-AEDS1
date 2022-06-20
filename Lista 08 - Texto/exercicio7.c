#include <stdio.h>
#include <string.h>
/*
  Clara Oliveira
  05/06/2022
  Passar texto para maiuscula usando codigo ASCII
*/

int main(void) {
  //variaveis
  char texto[100];

  //ler texto
  printf("Digite texto: ");
  scanf("%[^\n]", texto);

  //passar para maiuscula
  for (int i = 0; i < strlen(texto); i++)
    {
      if(texto[i] <= 122 && texto[i] >= 97)
      {
        texto[i] -= 32;
      }
    }

  //exibir
  printf("%s\n", texto);
  
  return 0;
}
