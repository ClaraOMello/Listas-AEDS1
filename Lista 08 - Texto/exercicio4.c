#include <stdio.h>
#include <string.h>
/*
  Clara Oliveira
  03/06/2022
  verificar se frase eh um palindromo (igual de tras pra frente)
*/
int main(void) {
  //variaveis
  char frase[50], invertido[50], fraseTratada[50];
  int resultado, i, pos = 0;

  //ler frase
  printf("Digite frase: ");
  scanf("%[^\n]", frase);

  //tirar espaços
  for (i = 0; i < strlen(frase); i++)
    {
      if(frase[i] != ' ')
      {
        fraseTratada[pos] = frase[i];
        pos++;
      }
    }
  fraseTratada[pos] = '\0';

  //copia frase inversa
  for (i = 0; i < strlen(fraseTratada); i++)
    {
      invertido[strlen(fraseTratada) - i - 1] = fraseTratada[i];
    }
  invertido[i] = '\0';  
  
  //compare frase com inversa
  resultado = strcmp(fraseTratada, invertido);

  //exibe o resultado
  if (resultado == 0) printf("É um palíndromo :)\n");
  else printf("Não é um palíndromo :(\n");
  
  return 0;
}
