#include <stdio.h>
/*
  Clara Oliveira
  09/06/2022
  Cadastrar obras por area
*/
typedef struct Biblioteca
{
  int catalogacao;
  char doacao;
  char obra[30];
  char autor[40];
  char editora[20];
  char area[25];
}Biblioteca;

//função para preencher o vetor por area da ciencia e retornar a quantidade de elementos preenchidos ha no vetor
int preencher(Biblioteca *grupo)
{
  int i = 0, aux = 1;
  
  while (aux > 0)
    {
      printf("\n  Código de catalogação: ");
      scanf("%d", &grupo[i].catalogacao);
      aux = grupo[i].catalogacao;
      if(aux > 0)
      {
        printf("  Doação (S ou N): ");
        scanf(" %c", &grupo[i].doacao);
        printf("  Nome da obra: ");
        scanf(" %[^\n]", grupo[i].obra);
        printf("  Nome do autor: ");
        scanf(" %[^\n]", grupo[i].autor);
        printf("  Editora: ");
        scanf(" %[^\n]", grupo[i].editora);
      }      
      i++;
    }

  return i;
}

//função para encontrar uma obra de determinada area atraves de seu codigo de catalogação. Retorna a posição em que a obra se encontra ou, caso não encontre, retorna -1
int pesquisa(Biblioteca *grupo, int codigo, int quant){
  int pos = -1;
  for (int i = 0; i < quant - 1; i++)
    {
      if (grupo[i].catalogacao == codigo)
      {
        pos = i;
      }
    }
  if (pos < 0) printf("\nObra não encontrada\n");
  else
  {
    printf("\nObra encontrada :) \n");
    printf("  Doação: %c\n", grupo[pos].doacao);
    printf("  Nome da obra: %s\n", grupo[pos].obra);
    printf("  Nome do autor: %s\n", grupo[pos].autor);
    printf("  Editora: %s\n", grupo[pos].editora);
  }
  return pos;
}

int main(void) {
  Biblioteca exatas[1500], humanas[1500], biologicas[1500];
  int catalogacaoCod; // codigos para pesquisa
  int quantE, quantH, quantB; // quantidade de elementos em cada vetor
  int continuar = 1, retorno = -1; // auxiliares para pesquisa

  printf("\n digite um codigo de catalogação menor que 0 para encerrar o cadastro da area\n");

  //chamar função preencher
  printf("\nCadastro de obras de Ciências Exatas: \n");
  quantE = preencher(exatas);
  
  printf("\nCadastro de obras de Ciências Humanas: \n");
  quantH = preencher(humanas);
  
  printf("\nCadastro de obras de Ciências Biológicas: \n");
  quantB = preencher(biologicas);

  printf("\n digite -1 para encerrar pesquisa\n");
  printf("\n   Pesquisa: \n1 - Ciências Exatas\n2 - Ciências Humanas\n3 - Ciências Biológicas\n");

  //pesquisa
  while (continuar != -1 || retorno < 0)
  {
    retorno = 1;
    printf("\nDigite o código da área desejada: ");
    scanf("%d", &continuar);
    if(continuar > 0)
    {
      printf("Digite o código de catalogação: ");
      scanf("%d", &catalogacaoCod);
      
      if(continuar == 1) 
      {
        retorno = pesquisa(exatas, catalogacaoCod, quantE);
      }
      else if(continuar == 2) 
      {
        retorno = pesquisa(humanas, catalogacaoCod, quantH);
      }
      else if(continuar == 3) 
      {
        retorno = pesquisa(biologicas, catalogacaoCod, quantB);
      }
    }
    else if (continuar != -1)
    {
      printf("Código inválido\n");
    }
  }
  

  
  return 0;
}