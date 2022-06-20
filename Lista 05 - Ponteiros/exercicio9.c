#include <stdio.h>
/*
  Clara Oliveira
  30/04/2022
  Calcular area e comprimento da circunferencia de raio r
*/
//procedimento
void calcCircunferencia (float R, float *compr, float *area) 
{
  const float pi = 3.14;
  *compr = 2 * pi * R;
  *area = pi * R * R;
}
 
int main(void) {
  //variaveis
  float compr, area, raio;

  //ler raio
  printf("Digite o raio: ");
  scanf("%f", &raio);

  calcCircunferencia(raio, &compr, &area);

  //exibir
  printf("Comprimento: %.2f\n", compr);
  printf("Área: %.2f\n", area);
  
  return 0;
}