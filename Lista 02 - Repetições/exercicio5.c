#include <stdio.h>
/* Media de salario e numero de filhos de habitantes de uma cidade
   Clara Oliveira
   26/03/2022
*/
int main(void) {
  // variaveis
  float salario = 0, sal_maior = 0, sal_soma = 0, sal_100 = 0;
  int filhos = 0, habitantes = 0, filhos_soma = 0;

  // ler salario e numero de filhos
  printf("\nDigite um salário negativo para finalizar\n\n");
  while (salario >= 0) 
  {
    printf("\nSalário: R$");
    scanf("%f", &salario);
    if (salario >= 0) 
    {
      printf("Filhos: ");
      scanf("%d", &filhos);
      filhos_soma += filhos;
      sal_soma += salario;
      if (salario > sal_maior)
      {
        sal_maior = salario;
      }
      habitantes++;
      if (salario < 100)
      {
        sal_100++;
      }
    }
  }

  printf("\nHab: %d\nSalario maior: %.2f\nFilhos soma: %d\nSal 100: %.0f\nSal soma: %.2f\n", habitantes, sal_maior, filhos_soma, sal_100, sal_soma);

  // calcular medias e exibir
  printf("\nSalário médio da população: R$%.2f\n", (sal_soma/habitantes));
  printf("Média do número de filhos: %.2f\n", ((float)filhos_soma/habitantes));
  printf("Maior salário: R$%.2f\n", sal_maior);
  printf("%.2f por cento de pessoas com salário até R$100\n",((float)(sal_100/habitantes)*100));

  return 0;
}