#include <stdio.h>
#define M 4
#define N 6

/*
  Clara Oliveira
  30/05/2022
  calcular a soma e a diferenca de duas matrizes
*/


//procedimento para preencher
void preencher(int matriz[M][N])
{
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

//procedimento para somar
int * somar(int matriz1[M][N], int matriz2[M][N], int somaMatriz[M][N])
{
  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
        {
          somaMatriz[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
  return &somaMatriz[0][0];
}

//procedimento para subtrair
int * diferenca(int matriz1[M][N], int matriz2[M][N], int diferencaMatriz[M][N])
{
  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
        {
          diferencaMatriz[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
  return &diferencaMatriz[0][0];
}

//procedimento para exibir
void exibe(int matriz[M][N])
{
  for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
        {
          printf("%d ", matriz[i][j]);
        }
      printf("\n");
    }
}

int main(void) {
  int matrizA[M][N], matrizB[M][N], matrizS[M][N], matrizD[M][N];

  preencher(matrizA);
  preencher(matrizB);

  somar(matrizA, matrizB, matrizS);
  diferenca(matrizA, matrizB, matrizD);

  printf("\nSoma de A e B: \n");
  exibe(matrizS);
  printf("\nDiferença de A e B: \n");
  exibe(matrizD);
  return 0;
}