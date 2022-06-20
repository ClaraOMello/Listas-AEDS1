#include <stdio.h>
/*
  Clara Oliveira
  14/05/2022
  Crie um programa que receba dados de vários alunos (Matricula e Telefone) e armazene em um  arquivo  texto.  Crie  no  mesmo  programa  uma  opção  de  ler  dados  de  um  arquivo  já armazenado dados de alunos.
*/

//procedimento para escrever dados
void escrita()
{
  FILE *arq = fopen("alunos.txt", "w");
  int matricula = 1, telefone;

  printf("\nMatricula: ");
  scanf("%d", &matricula);
  while (matricula != 0)
    {
      fprintf(arq, "%d", matricula);
      printf("Telefone: ");
      scanf("%d", &telefone);
      fprintf(arq, " %d\n", telefone);
      printf("\nMatricula: ");
      scanf("%d", &matricula);      
    }

  fclose(arq);
}

//procedimento para ler dados
void leitura()
{
  FILE *arq = fopen("alunos.txt", "r");
  int matricula, telefone;

  while (fscanf(arq, "%d %d", &matricula, &telefone) != EOF)
    {
      printf("\nMatricula: %d \nTelefone: %d\n", matricula, telefone);
    }

  fclose(arq);
}

int main(void) {
  int opcao;

  printf("  1 - Escrever dados \n  2 - Ler dados \nOpção: ");
  scanf("%d", &opcao);
  switch (opcao)
    {
      case 1: escrita();
      break;
      case 2: leitura();
      break;
    }
  
  return 0;
}