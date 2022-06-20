#include <stdio.h>
/*
  Somar inverso dos fatoriais
  Clara Oliveira
  05/04/2022
*/

//função: cálculo de S
double SomaInvFatorial(int valor)
{
  //variaveis
  int quant, fat;
  double soma = 0;
  
  while (valor > 0)
  {
  //calcular fatorial
    fat = 1;
    for (quant = valor; quant > 0; quant--)
      {
        fat = fat * quant;
      }
  
    //somar inversos do fatorial
    soma += 1/(fat*1.0);
    valor--;
  }
  return soma;
}



int main(void) {
  int quant;
  double soma;

  //Ler valor de N
  printf("Digite o valor de N: ");
  scanf("%d",&quant);
  soma = SomaInvFatorial(quant);

  //Exibir soma
  if (quant > 0)
  {
    printf("S = %lf\n", (soma + 1));
  }
  else{
    printf("Soma inválida\n");
  }
  return 0;
}