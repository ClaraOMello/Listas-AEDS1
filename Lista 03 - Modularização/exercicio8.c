#include <stdio.h>
#include <math.h>
/*
  Calcular S ((n^2+1)/(n+3)
  Clara Oliveira
  05/04/2022
*/
//função: recebe valor inteiro positivo e retorna S

double calculoS(int valor)
{
  //variaveis
  double parcela, soma = 0;
  
  //calculo de parcela
  while (valor > 0)
  {
    parcela = ((pow(valor,2)+1)/(valor+3));
    
    //soma das parcelas
    soma += parcela;
    valor--;
  }
  return soma;
}

int main(void) {
  //variaveis
  int valorN;
  double resultadoS;
  
  //solicitar N
  printf("Digite um valor para N: ");
  scanf("%d", &valorN);

  //exibir resultado S
  resultadoS = calculoS(valorN);
  printf("S = %lf", resultadoS);
  
  return 0;
}