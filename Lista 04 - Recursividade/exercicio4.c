#include <stdio.h>
/*
  Calcular resto da divisão por meio de subtrações sucessivas
  Clara Oliveira
  21/04/2022
*/

int resto (int numerador, int denominador)
{
  numerador -= denominador;
  if (numerador == 0)
  {
    return 0;
  }
  else if (numerador < denominador)
  {
    return numerador;
  }
  else
  {
    return (resto(numerador, denominador));
  }
}

int main(void) {
  int num, den;
  printf("Numerador: ");
  scanf("%d", &num);
  printf("Denominador: ");
  scanf("%d", &den);
  printf("Resto: %d\n", resto(num, den));
  return 0;
}