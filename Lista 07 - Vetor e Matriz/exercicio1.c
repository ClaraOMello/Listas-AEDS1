#include <stdio.h>
/*
  Clara Oliveira
  preencher vetor com notas e calcular media
  25/05/2022
*/

//procedimento para preencher o vetor
void preencher(double *vetor)
{
  printf("Digite as notas: ");
  for(int i = 0; i < 10; i++)
    {
      scanf("%lf", &vetor[i]);
    }
}

//procedimento para calcular a media das notas
void media(double *vetor)
{
  double soma = 0;
  int alunosMedia = 0;
  
  for(int i = 0; i < 10; i++)
    {
      soma += vetor[i];
    }
  soma /= 10;

  //calcular a quantidade de alunos acima da media da turma 
  for(int i = 0; i < 10; i++)
    {
      if (vetor[i] >= soma) alunosMedia++;
    }

  printf("Media: %.2lf \nAlunos na media: %d\n", soma, alunosMedia);
}

int main(void) {
  double notas[10];

  //chamar procedimentos
  preencher(notas);
  media(notas);
  return 0;
}