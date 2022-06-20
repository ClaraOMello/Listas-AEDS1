#include <stdio.h>
/* 
   Adição de um número à soma de dois números inteiros
   Clara Oliveira
   23/03/2022
*/
int main(void) {
  //variaveis
  int num1, num2, soma;
  
  //Solicitar dois numeros
  printf("Digite dois números inteiros: ");
  scanf("%d %d", &num1, &num2);
  
  //soma
  soma = num1 + num2;
  
  //condições dependentes da soma
  if (soma >= 10) {
    soma += 5;
  }
  else {
    soma += 7;
  }

  //resultado
  printf("Resultado: %d\n", soma);
  return 0;
}