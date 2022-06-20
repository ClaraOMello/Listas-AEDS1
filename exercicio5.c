#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
  Clara Oliveira
  03/06/2022
  Validar numero de telefone
*/

int main(void) {
  //variaveis
  char telefone[11], telefoneNovo[11];
  int check, pos;
  bool tracinho = false;

  //ler numero
  printf("Numero de telefone: ");
  scanf("%[^\n]", telefone);

  //validar e corrigir numero
  check = strlen(telefone);
  printf("%d\n", check);

  //verificar tracinho
  for(int i = 0; i < check; i++)
    {
      if(telefone[i] == '-') tracinho = true;
    }
  
  if(check == 10 && tracinho) strcpy(telefoneNovo, telefone);
    
  else if(check == 9 && tracinho)
  {
    telefoneNovo[0] = '9';
    for(int i = 0; i < check; i++)
      {
        telefoneNovo[i + 1] = telefone[i];
      }
  }
    
  else if(tracinho == false)
  {
    telefoneNovo[0] = '9';
    if (check == 9) pos = 0;
    else pos = 1;
    for(int i = 0; i < check; i++)
      {
        if (pos == 5)
        {
          telefoneNovo[pos] = '-';
          i--;
        }
        else telefoneNovo[pos] = telefone[i];
        pos++;
      }
  }

  //exibir
  if (check < 8) printf("Numero inválido :/\n");
  else printf("Telefone válido:\n %s\n", telefoneNovo);

  return 0;
}