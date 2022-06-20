#include <stdio.h>
/* Ler valor de N e escrver valor de E
   Clara Oliveira
   03/04/2022
*/
int main(void) {
  //variaveis
  int num, divisor;
  double E = 0, soma = 0, fatorial = 1;

  //Ler N
  printf("Digite um número positivo: ");
  scanf("%d", &num);
  
  //calcular fatorial e somar parcelas
  while (num > 0)
  {
    fatorial = 1;
    for (divisor = num; divisor > 0; divisor--)
    {
      fatorial = divisor * fatorial;
      printf("\nFat: %.0lf", fatorial);
    }
    soma += (1/fatorial);
    printf("\nSoma: %lf", soma);
    num--;
  }
  
  //somar o inverso
  E = 1 + soma;
  printf("\nE = %.10lf\n", E);
  
  return 0;
}