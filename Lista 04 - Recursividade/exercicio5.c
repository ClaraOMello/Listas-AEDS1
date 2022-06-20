#include <stdio.h>
/*
  Calcular soma do inverso do fatorial
  Clara Oliveira
  21/04/2022
*/

//calcular parcela da serie
double serie (int n) 
{
  double parc = 1;
  //fatorial
  for (int num = n; num > 0; num--)
    {
      parc *= num;
    }
  parc = 1.0/parc;
  n--;
  if (n == 0)
  {
    return parc;
  }
  //somar parcelas
  else 
  {
    return (parc + serie(n));
  }
  
  return 1;
}

int main(void) {
  int valor;
  printf("Digite valor de n: ");
  scanf("%d", &valor);
  printf("Série = %lf", serie(valor));
  return 0;
}