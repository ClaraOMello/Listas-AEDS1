#include <stdio.h>
#define quant 15
/*
  Clara Oliveira
  09/06/2022
  identificar quais lojas possuem preços abaixo da media e exibir nome da loja e telefone
*/
typedef struct Registro
{
  char loja[30];
  char telefone[15];
  double preco;
}Registro;

void preencher(Registro vetor[quant])
{
  for (int i = 0; i < quant; i++)
    {
      printf("Nome da loja: ");
      scanf(" %[^\n]", vetor[i].loja);
      printf("Número de telefone: ");
      scanf(" %[^\n]", vetor[i].telefone);
      printf("Preço do eletrodoméstico: ");
      scanf("%lf", &vetor[i].preco);
      printf("\n");
    }
  printf("\n");
}

//função para calcular a media de preços de totas as lojas
double mediaPrecos(Registro vetor[quant])
{
  double soma = 0;
  for (int i = 0; i < quant; i++)
    {
      soma += vetor[i].preco;
    }
  return (soma/quant);
}

int main(void) {
  Registro cadastros[quant];
  double media;

  preencher(cadastros);
  media = mediaPrecos(cadastros);

  //exibir lojas abaixo da media
printf("Lojas cujo preço estava abaixo da média: \n");
  for (int i = 0; i < quant; i++)
    {
      if(cadastros[i].preco < media)
      {
        printf("  %s - %s\n", cadastros[i].loja, cadastros[i].telefone);
      }
    }

  return 0;
}