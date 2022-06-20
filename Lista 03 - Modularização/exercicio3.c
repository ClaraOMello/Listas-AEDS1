#include <stdio.h>
/*
  Exibir 3 valores em ordem crescente
  Clara Oliveira
  01/04/2022
*/
//procedimento: Exibir ordem crescente de 3 numeros inteiros
void OrdemCrescente(int num1, int num2, int num3)
{
  int maior, menor, meio;

  if (num1 >= num2 && num1 >= num3){
    maior = num1;
    if (num2 > num3){
      meio = num2;
      menor = num3;
    }
    else {
      meio = num3;
      menor = num2;
    }
  }
  else if (num2 >= num1 && num2 >= num3)
  {
    maior = num2;
    if (num1 >= num3){
      meio = num1;
      menor = num3;
    }
    else {
      meio = num3;
      menor = num1;
    }
  }
  else if (num3 >= num2 && num3 >= num1)
  {
    maior = num3;
    if (num2 >= num1){
      meio = num2;
      menor = num1;
    }
    else {
      meio = num1;
      menor = num2;
    }
  }
  printf("(%d, %d, %d)\n", menor, meio, maior);
}

int main(void) {
  //variaveis
  int valor1, valor2, valor3, quant;

  //Ler quantidade
  printf("Digite a quantidade de conjuntos: ");
  scanf("%d", &quant);
  
  //executar procedimento N vezes
  while (quant > 0)
  {
    printf("\nDigite três números: ");
    scanf("%d %d %d",&valor1, &valor2, &valor3);
    OrdemCrescente(valor1, valor2, valor3);
    quant--;
  }

  return 0;
}