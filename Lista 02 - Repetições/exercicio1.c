#include <stdio.h>
/* Ler sequência de números inteiros e contar o número de valores positivos, negativos e zeros
   Clara Oliveira
   25/03/2022  
*/
int main(void) {
  //Variáveis
  int num, positivos, negativos, zeros, quant;

  //Ler os números
  printf("Quantidade de números: ");
  scanf("%d", &quant);
  printf("Digite os números inteiros: ");
  positivos = 0;
  negativos = 0;
  zeros = 0;

  //Contar quantidade de cada valor (+, -, 0)
  while (quant > 0){
    scanf("%d", &num);
    if (num > 0){
      positivos++;
    }
    else if (num < 0){
      negativos++;
    }
    else if (num == 0){
      zeros++;
    }
    quant--;
  }

  //Mostrar quantidades
  printf("Quantidade de:\n  nº positivos: %d\n  nº negativos: %d\n  zeros: %d\n", positivos, negativos, zeros);
  return 0;
}