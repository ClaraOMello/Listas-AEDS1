#include <stdio.h>
/* 
  Ler uma opção e mostra o salário novo correspondente
  Clara Oliveira
  23/03/2022
*/
int main(void) {
  //variaveis
  char opcao;
  float sal_atual, sal_novo;

  //leitura da opção
  printf("Opção (A, B ou C): ");
  scanf("%c", &opcao);
  opcao = toupper(opcao);

  //leitura do salario atual
  printf("Salário atual: R$");
  scanf("%f", &sal_atual);

  //condições
  switch (opcao)
    {
      case 'A': sal_novo = 1.08 * sal_atual;
                break;
      case 'B': sal_novo = 1.11 * sal_atual;
                break;
      case 'C': if (sal_atual > 1000)
                {
                  sal_novo = sal_atual + 200;
                }
                else
                {
                  sal_novo = sal_atual + 350;
                }
                break;     
    }

  //mostrar salário atual
  printf("Salário novo: R$%.2f\n", sal_novo);
  
  return 0;
}