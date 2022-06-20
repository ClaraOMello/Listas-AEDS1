#include <stdio.h>
/*
  Clara Olliveira
  14/05/2022
  Calcular ganhos e gastos de uma locadora
*/

int main(void) {
  //variaveis
  int quant;
  double aluguel, auxiliar;
  FILE *escrita = fopen("resultado.txt", "w");

  //ler quantidade de veiculos  e valor cobrado por aluguel
  printf("Quantidade de veiculos: ");
  scanf("%d", &quant);
  printf("Valor de aluguel: R$");
  scanf("%lf", &aluguel);

  //calcular faturamento anual
  auxiliar = 12 * ((quant / 3) * aluguel);
  printf("\nFaturamento anual: R$%.2lf\n", auxiliar);
  fprintf(escrita, "Faturamento anual: R$%.2lf\n", auxiliar);

  //valor ganho por multas no mês
  auxiliar = ((quant / 30) * (0.2 * aluguel));
  printf("Valor ganho por multas no mês: R$%.2lf\n", auxiliar);
  fprintf(escrita, "Valor ganho por multas no mês: R$%.2lf\n", auxiliar);

  //valor gasto com manutenção anual
  auxiliar = (0.02 * quant) * 600;
  printf("Valor gasto com manutenção: R$%.2lf\n", auxiliar);
  fprintf(escrita, "Valor gasto com manutenção: R$%.2lf", auxiliar);

  fclose(escrita);
  
  return 0;
}