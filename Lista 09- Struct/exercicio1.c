#include <stdio.h>
#define pessoas 40
/*
  Clara Oliveira
  31/05/2022
  registro de 40 pessoas que mostra quais pessoas fazem aniversário em cada mês
*/

//criar struct (nome, dia e mes do aniversario)
struct Aniversario
  {
    char nome[30];
    int diaNiver, mesNiver;
  };

//procedimento para preencher dados dos registros
void preencher(struct Aniversario *registro)
{
  for (int i = 0; i < pessoas; i++)
    {
      printf("\nPessoa %d\n", i);
      printf("Nome: ");
      scanf("%s", registro[i].nome);
      printf("Dia aniversário: ");
      scanf("%d", &registro[i].diaNiver);
      printf("Mês aniversário: ");
      scanf("%d", &registro[i].mesNiver);
    }
}

//procedimeno que verifica pessoas que fazem aniversario em determinado mes
void mesAniversario(struct Aniversario *dados, int mes)
{
  switch(mes)
    {
      case 1: printf("Janeiro\n"); break;
      case 2: printf("Fevereiro\n"); break;
      case 3: printf("Março\n"); break;
      case 4: printf("Abril\n"); break;
      case 5: printf("Maio\n"); break;
      case 6: printf("Junho\n"); break;
      case 7: printf("Julho\n"); break;
      case 8: printf("Agosto\n"); break;
      case 9: printf("Setembro\n"); break;
      case 10: printf("Outubro\n"); break;
      case 11: printf("Novembro\n"); break;
      case 12: printf("Dezembro\n"); break;
    }
  for(int i = 0; i < pessoas; i++)
    {
      if (dados[i].mesNiver == mes)
      {
        printf("  %s - dia %d\n", dados[i].nome, dados[i].diaNiver);
      }
    }
}

int main(void) {
  //variaveis
  struct Aniversario registro[pessoas];

  //preencher dados dos registros
  preencher(registro);

  //acessar nome da pessoa (em relação ao mes de aniversario)
  for(int a = 1; a <= 12; a++)
    {
      printf("\n");
      mesAniversario(registro, a);
    }
  printf("\n");
  
  return 0;
}