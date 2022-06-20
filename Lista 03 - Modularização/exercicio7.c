#include <stdio.h>
/*
  Verificar se um valor é positivo ou negativo
  CLara Oliveira
  05/04/222
*/
char NegOuPos(int num);
int main(void)
{
  //variaveis
  int num;
  char retorno;
  
  //ler número
  printf("Digite um número: ");
  scanf("%d", &num);
  
  //exibir se é positivo ou negativo
  if(num != 0)
  {
    retorno = NegOuPos(num);
    if (retorno == 'V')
    {
      printf("\nPositivo\n");
    }
    else
    {
      printf("\nNegativo\n");
    }
  }
  else
  {
    printf("\nNulo\n");
  }
  return 0;
}

//função: verificar se numero maior ou menor que 0
char NegOuPos(int num)
{
  //variaveis
  char valor;

  //retornar  true ou false
  if (num > 0)
  {
    valor = 'V';
  }
  else
  {
    valor = 'F';
  }
  return valor;
}