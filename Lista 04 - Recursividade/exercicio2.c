#include <stdio.h>
/*
  Calcular soma dos dígitos de um número
  Clara Oliveira
  19/04/2022
*/
int Digito(int num, int soma)
{
  printf("\nN: %d\n", num);
  printf("Soma: %d\n", soma);
  //identificar o dígito
  if (num/10 > 0)
  {
    soma += (num%10);
    num /= 10;
    return (Digito(num, soma));
  }

  //soma final
  return (soma + num);
}
int main(void) {
  int valor, total;
  printf("Digite (até 10 algarismos): ");
  scanf("%d", &valor);
  if (valor/10 < 1) total = valor;
  else 
  {
    total = Digito(valor, 0);
  }
  printf("\n   Soma: %d\n", total);
  return 0;
}