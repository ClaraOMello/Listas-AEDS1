#include <stdio.h>
/*
  Clara Oliveira
  09/06/2022
  Criar cadastro de 2 clientes
*/
typedef struct Cliente
{
  char nome[50];
  char endereco[100];
  char telefone[15];
}Cliente;

int main(void) {
  Cliente cadastros[2];
  
  for (int i = 0; i < 2; i++)
    {
      printf("Nome: ");
      scanf(" %[^\n]", cadastros[i].nome);
      printf("Endereço: ");
      scanf(" %[^\n]", cadastros[i].endereco);
      printf("Telefone: ");
      scanf(" %s", cadastros[i].telefone);
      printf("\n");
    }
  return 0;
}