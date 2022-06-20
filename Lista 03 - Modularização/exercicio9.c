#include <stdio.h>
/*
  Ler notas e calcular media das notas dos aprovados
  Clara Oliveira
  05/0/2022
*/
//função: calculo media
float MediaAprovados(int quantidade)
{
  //variaveis
  int auxiliar = 0;
  float media_aluno = 0, nota, quant_notas = 0, media_apv = 0, quant_apv = 0;
  
  //ler numero indertemianado de notas

  while (auxiliar < quantidade)
    {
      printf("\nAluno %d:\n", (auxiliar + 1));
      printf("Notas: ");
      scanf("%f", &nota);
      quant_notas = 0;
      media_aluno = 0;
      while (nota >= 0)
        {
          media_aluno += nota;
          quant_notas++;
          scanf("%f", &nota);
        }
      media_aluno = media_aluno/quant_notas;
      if (media_aluno >= 6)
      {
        media_apv += media_aluno;
        quant_apv++;
      }
      auxiliar++;
    }
  //calcular media
  media_apv = media_apv/quant_apv;
  return media_apv;
}
int main(void) {
  //variaveis
  int quant;
  float media;
  
  //ler quantidade de alunos
  printf("Digite a quantidade de alunos: ");
  scanf("%d", &quant);
  printf("Digite uma nota negativa para começar a escrever notas de outro aluno\n");

  //exibir media dos aprovodados
  media = MediaAprovados(quant);
  printf("\nMédia das notas dos alunos aprovados: %.2f\n", media);
  
  return 0;
}