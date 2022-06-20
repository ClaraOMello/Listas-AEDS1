#include <stdio.h>
#include <string.h>

int main(void) {
  //variaveis
  char texto[100];

  //ler texto
  printf("Digite texto: ");
  scanf("%[^\n]", texto);

  //codificar texto
  for (int i = 0; i < strlen(texto); i++)
    {
      if((texto[i] <= 122 && texto[i] >= 97) || (texto[i] <= 90 && texto[i] >= 65))
      {
        texto[i] += 3;
        if (texto[i] >= 123 || (texto[i] <= 93 && texto[i] >= 91)) texto[i] -= 26;
      }
    }

  //exibir
  printf("%s\n", texto);
  return 0;
}
