#include <stdio.h>
#define Ln 5
#define Col 5
/*
  Clara Oliveira
  28/05/2022
  calculo de somas de elementos de uma matriz
*/

//preencher matriz
void preencher(int matriz[Ln][Col]){
  printf("  Digite o valor dos elementos\n");
  for (int i = 0; i < Col; i++)
    {
      for(int j = 0; j < Ln; j++)
        {
          printf("Posição (%d x %d): ", i, j);
          scanf("%d", &matriz[i][j]);
        }
    }
}


//funções para as somas
int somaLn4(int matriz[Ln][Col]){
  int soma = 0;

  for (int j = 0; j < Col; j++)
    {
      soma += matriz[4][j];
    }
  
  return soma;
}

int somaCol2(int matriz[Ln][Col]){
  int soma = 0;

  for (int i = 0; i < Ln; i++)
    {
      soma += matriz[i][2];
    }
  
  return soma;
}

int somaDiagP(int matriz[Ln][Col]){
  int soma = 0;

  for (int i = 0; i < Col; i++)
    {
      for(int j = 0; j < Ln; j++)
        {
          if(i == j) soma += matriz[i][j];
        }
    }
  
  return soma;
}

int somaDiagSec(int matriz[Ln][Col]){
  int soma = 0;

  for (int i = 0; i < Col; i++)
    {
      for(int j = 0; j < Ln; j++)
        {
          if ((i + j) == (Ln - 1)) soma += matriz[i][j];
        }
    }
  
  return soma;
}

int somaTotal(int matriz[Ln][Col]){
  int soma = 0;

  for (int i = 0; i < Col; i++)
    {
      for(int j = 0; j < Ln; j++)
        {
          soma += matriz[i][j];
        }
    }
  
  return soma;
}

int main(void) {
  int M[Ln][Col];

  preencher(M);

  printf("Soma dos elementos da linha 4: %d\n", somaLn4(M));
  printf("Soma dos elementos da coluna 2: %d\n", somaCol2(M));
  printf("Soma dos elementos da diagonal principal: %d\n", somaDiagP(M));
  printf("Soma dos elementos da diagonal secundária: %d\n", somaDiagSec(M));
  printf("Soma de todos os elementos: %d\n", somaTotal(M));
  
  return 0;
}