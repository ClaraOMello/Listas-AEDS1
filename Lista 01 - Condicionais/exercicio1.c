#include <stdio.h>
/* 
   Imprimir maior de dois números
   Clara Oliveira
   23/03/2022
*/
int main(void) {
  //variaveis
  float num1, num2, maior;
  
  // solicitar 2 numeros
  printf("Digite 2 números: ");
  scanf("%f %f", &num1, &num2);
  
  //imprimir maior dos numeros
  if (num1 > num2){
    printf("Maior número: %.2f", num1);
  }
  else{
    printf("Maior número: %.2f", num2);
  }
  return 0;
}