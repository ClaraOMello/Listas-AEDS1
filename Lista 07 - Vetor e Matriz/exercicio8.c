#include <stdio.h>
#define M 10
#define N 10
/*
  Clara Oliveira
  30/05/2022
  realizar trocas de posição em uma matriz
*/

//procedimento para preencher
void preencher(int matriz[M][N]){
  printf("Digite os elementos da matriz\n");
  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
        {
          printf("Posição (%dx%d): ", i, j);
          scanf("%d", &matriz[i][j]);
        }
    }
}

//procedimento para copiar a matriz
void copiar(int matriz[M][N], int troca[M][N]){
  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
        {
          troca[i][j] = matriz[i][j];
        }
    }
}

//procedimento para exibir
void exibir(int matriz[M][N]){
  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
        {
          printf("%d ", matriz[i][j]);
        }
      printf("\n");
    }
}

//procedimentos de troca
  //linha2 com linha 8
void Ln2Ln8(int matriz[M][N], int troca[M][N]){
  copiar(matriz, troca);
  
  for (int j = 0; j < N; j++)
    {
      troca[2][j] = matriz[8][j];
      troca[8][j] = matriz[2][j];
    }

  exibir(troca);
}

  //coluna 4 com coluna 10
void Col4Col10(int matriz[M][N], int troca[M][N]){
  copiar(matriz, troca);
  
  for (int i = 0; i < M; i++)
    {
      troca[i][4] = matriz[i][9];
      troca[i][9] = matriz[i][4];
    }

  exibir(troca);
}
  //diagonal principal com secundaria
void DiagPDiagSec(int matriz[M][N], int troca[M][N]){
  int vetorPrinc[M], vetorSec[M];
   copiar(matriz, troca);
  
  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
        {
          if(i == j) //diagPrinc
          {
            vetorPrinc[i] = matriz[i][j];
          }
          if((i+j) == (M-1)) //diagSec
          {
            vetorSec[i] = matriz[i][j];
          }
        }
    }
  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
        {
          if(i == j) //diagPrinc
          {
            troca[i][j] = vetorSec[i];
          }
          if((i+j) == (M-1)) //diagSec
          {
            troca[i][j] = vetorPrinc[i];
          }
        }
    }

  exibir(troca);
}
  //linha 5 com coluna 10
void Ln5Col10(int matriz[M][N], int troca[M][N]){
   copiar(matriz, troca);
  
  for (int i = 0; i < M; i++)
    {
      troca[5][i] = matriz[i][9];
      troca[i][9] = matriz[5][i];
    }

  exibir(troca);
}

int main(void) {
  int matrizM[M][N], matrizA[M][N],  matrizB[M][N], matrizC[M][N], matrizD[M][N];

  preencher(matrizM);

  exibir(matrizM);

  printf("Ln2Ln8: \n");
  Ln2Ln8(matrizM, matrizA);
  printf("Col4Col10: \n");
  Col4Col10(matrizM, matrizB);
  printf("DiagPDiagSec: \n");
  DiagPDiagSec(matrizM, matrizB);
  printf("Ln5Col10: \n");
  Ln5Col10(matrizM, matrizD);
  
  return 0;
}