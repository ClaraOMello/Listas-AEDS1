#include <stdio.h>
#include <stdlib.h>
#define N 10

/*
  Clara Oliveira
  28/05/2022
  preencher um vetor e exibir valores negativos
*/

//procedimento para preencher o vetor
void preencher(int *vetor){
  printf("Digite os %d elementos: ", N);
  for (int i = 0; i < N; i++)
    {
      scanf("%d", &vetor[i]);
    }
}

//função para identificar quantos numeros negativos
int contaNegativos(int *vetor){
  int conta = 0;
  for (int i = 0; i < N; i++)
    {
      if (vetor[i] < 0) conta++;
    }
  printf("Conta = %d\n", conta);
  
  return conta;
}

//procedimento para preencher o vetor dos negativos
void preencheNeg(int *vetor, int *vetorNeg, int quant){
  for (int i = 0; i < N; i++)
    {
      if (vetor[i] < 0)
      {
        quant--;
        vetorNeg[quant] = vetor[i];
      }
    } 
}

//procedimento para exibir o conteudo de um vetor
void exibe(int *vetor, int quant){
  for (int i = 0; i < quant; i++){
    printf("%d ", vetor[i]);
  }
}

int main(void) {
  //variaveis
  int numeros[N];
  int *negativos;
  int valor;
  
  negativos = malloc(N * sizeof(int));

  preencher(numeros);
  valor = contaNegativos(numeros);
  if(valor > 0)
  {
    preencheNeg(numeros, negativos, valor);
    exibe(negativos, valor);
  }
  else printf("Não há números negativos");
  
  printf("\n");
  
  return 0;
}