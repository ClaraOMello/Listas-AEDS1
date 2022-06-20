#include <stdio.h>
/*
  Clara Oliveira
  30/04/2022
  Alterar o conteúdo de variáveis e ponteiros
*/
int main(void) {
  //variaveis: int, float, char + ponteiros
  int num = 10, *numPtr;
  float valor = 13.5, *valorPtr;
  char letra = 'a', *letraPtr;

  numPtr = &num;
  valorPtr = &valor;
  letraPtr = &letra;
  
  //exibição
  printf("\nNum: %p\n  cont: %d\n", &num, num);
  printf("\nNumPtr: %p\n  cont: %p\n", &numPtr, numPtr);
  
  printf("\nValor: %p\n  cont: %f\n", &valor, valor);
  printf("\nValorPtr: %p\n  cont: %p\n", &valorPtr, valorPtr);
  
  printf("\nLetra: %p\n  cont: %c\n", &letra, letra);
  printf("\nLetraPtr: %p\n  cont: %p\n", &letraPtr, letraPtr);

  //novos dados
  printf("\nDigite inteiro, decimal e caracter: ");
  scanf("%d %f %c", &(*numPtr), &(*valorPtr), &(*letraPtr));

  //exibição
  printf("\nNum: %p\n  cont: %d\n", &num, num);
  printf("\nNumPtr: %p\n  cont: %p\n", &numPtr, numPtr);
  
  printf("\nValor: %p\n  cont: %f\n", &valor, valor);
  printf("\nValorPtr: %p\n  cont: %p\n", &valorPtr, valorPtr);
  
  printf("\nLetra: %p\n  cont: %c\n", &letra, letra);
  printf("\nLetraPtr: %p\n  cont: %p\n", &letraPtr, letraPtr);
  
  return 0;
}