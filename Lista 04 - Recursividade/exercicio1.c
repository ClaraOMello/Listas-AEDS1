#include <stdio.h>
/*
  Contar dígitos de um número
  Clara Oliveira
  19/04/2022
*/
int Digito(int num, int quant)
{
  if (num/10 >= 10 || num/10 <= -10)
    {
      num /= 10;
      return(quant + Digito(num, quant));
    }
  else return quant;
}


int main(void) {
  int total, valor;
  printf("Digite: ");
  scanf("%d",&valor);
  total = Digito(valor, 1);
  if(valor > 9 || valor < -9) total++;
  printf("Total: %d\n", total);

  
  return 0;
}