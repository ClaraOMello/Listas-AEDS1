#include <stdio.h>
/* Ler sequência de números inteiros e calcular o percentual de valores positivos, negativos e zeros
   Clara Oliveira
   25/03/2022  
*/
int main(void) {
  //Variáveis
  float positivos, negativos, zeros, divisor;
  int quant, num;

  //Ler os números
  printf("Quantidade de números: ");
  scanf("%d", &quant);
  printf("Digite os números inteiros: ");
  positivos = 0;
  negativos = 0;
  zeros = 0;
  divisor = 0;

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
    divisor++;
  }

  //Mostrar porcentagens
  printf("%.2f % valores positivos\n%.2f % valores negativos\n%.2f % valores zero\n", ((positivos/divisor)*100), ((negativos/divisor)*100), ((zeros/divisor)*100));
  
  return 0;
}