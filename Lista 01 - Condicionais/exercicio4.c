#include <stdio.h>
/* 
   Calcular faixa de notas e exibir mensagem correspondente
   Clara Oliveira
   23/03/2022
*/
int main(void) {
  //Variaveis
  float nota;

  //Letura da nota
  printf("Digite a nota: ");
  scanf("%f", &nota);

  //Descobrir qual a faixa de notas e exibir mensagem correspondente
  if (nota >= 8 && nota <= 10)
  {
    printf("Ótimo\n");
  }
  else if (nota >= 7 && nota < 8)
  {
    printf("Bom\n");
  }
  else if (nota >= 5 && nota < 7)
  {
    printf("Regular\n");
  }
  else if (nota < 5)
  {
    printf("Insastifatório\n");
  }  
  else
  {
    printf("Nota informada inválida\n");
  }
  return 0;
}