#include <stdio.h>
#define dias 31

/*
  Clara Oliveira
  28/05/2022
  armazenar temperaturas de todos os dias de um mes e apresentar realtorio
*/

//preencher vetor
void preencher(double *vetor){
  printf("Digite as temperaturas do mês \n");
  for (int i = 0; i < dias; i++)
  {
    printf("Dia %d: ", (i+1));
    scanf("%lf", &vetor[i]);
  }
}

//contar quantos elementos abaixo da media
int abaixoMedia(double *vetor, double media){
  int quant = 0;
  for(int i = 0; i < dias; i++)
    {
      if(vetor[i] < media) quant++;
    }

  return quant;
}

int main(void) {
  double temperaturas[dias];
  double valorMax, valorMin, soma = 0;
  int quant;

  preencher(temperaturas);

  //verificar maior e menor elemento
  valorMax = temperaturas[0];
  valorMin = temperaturas[0];
  
  for(int i = 0; i < dias; i++)
    {
      if(temperaturas[i] >  valorMax) valorMax = temperaturas[i];
      else if(temperaturas[i] <  valorMin) valorMin = temperaturas[i];
      soma += temperaturas[i];
    }

  quant = abaixoMedia(temperaturas, (soma/ dias));

  printf("\n Maior temperatura: %.2lf °C\n Menor temperatura: %.2lf °C\n Temperatura média: %.2lf °C\n Dias com temperatura inferior à média: %d\n", valorMax, valorMin, (soma/ dias), quant);
  
  return 0;
}