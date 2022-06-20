#include <stdio.h>
/*
  Clara Oliveira
  28/05/2022
  soma dos elementos abaixo da diagonal principal
*/

void preencher(int *matriz){
  printf("Digite os elementos\n");
  for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
        {
          printf("  Posição (%dx%d): ", i, j);
          scanf("%d", (matriz + i*4 + j));
        }
    }
}

//somar elementos abaixo da diagonal principal
int somaAbaixo(int matriz[4][4]){
  int soma = 0;
  for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
        {
          if(j > i) soma += matriz[i][j];
        }
    }
  return soma;
}

//exibir elementos da diagonal principal
void diagPrinc(int matriz[4][4]){
  for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
        {
          if(j == i) printf("Posição (%dx%d): %d\n", i, j, matriz[i][j]);
        }
    }
}

int main(void) {
  int numeros[4][4];

  preencher(*numeros);

  printf("Soma: %d\n", somaAbaixo(numeros));
  diagPrinc(numeros);
  return 0;
}