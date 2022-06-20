#include <stdio.h>
#define N 3

/*
  Clara Oliveira
  28/05/2022
  preencheer e intercalar dois vetores
*/

//procedimento para preencher um vetor
void preencher(int *vetor){
  printf("Digite %d elementos: ", N);
  for (int i = 0; i < N; i++) scanf("%d", &vetor[i]);
}

//procedimento para intercalar dois vetores
void intercalar(int *intercalacao, int *vetor1, int *vetor2){
  int pos1 = 0, pos2 = 0;
  for (int i = 0; i < (2 * N); i++)
    {
      if(i % 2 != 0) 
      {
        intercalacao[i] = vetor1[pos1];
        pos1++;
      }
      else
      {
        intercalacao[i] = vetor2[pos2];
        pos2++;
      }
    }
}

//procedimento para exubir um vetor
void exibir(int *vetor){
  for (int i = 0; i < (2 * N); i++) printf("%d ", vetor[i]);
}

int main(void) {
  int vetorUm[N], vetorDois[N], juncao[2*N];

  preencher(vetorUm);
  preencher(vetorDois);

  intercalar(juncao, vetorUm, vetorDois);

  exibir(juncao);
  
  return 0;
}