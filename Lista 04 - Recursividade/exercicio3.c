#include <stdio.h>
/*
  Calcular divisão por meio de subtrações sucessivas
  Clara Oliveira
  21/04/2022
*/

int divisao (int numerador, int denominador)
{
  numerador -= denominador;
  if (numerador == 0)
  {
    return 1;
  }
  else if (numerador < 0)
  {
    return 0;
  }
  else
  {
    return (1 + divisao(numerador, denominador));
  }
}

int main(void) {
  int num, den;
  printf("Numerador: ");
  scanf("%d", &num);
  printf("Denominador: ");
  scanf("%d", &den);
  printf("Divisão: %d\n", divisao(num, den));
  return 0;
}