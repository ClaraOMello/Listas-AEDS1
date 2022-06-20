#include <stdio.h>
/*
  Clara Oliveira
  28/04/2022
  Descobrir maior de 2 numeros
*/
int main(void) {
  //variaveis
  int num1, num2, *Pnum1, *Pnum2;
  
  //ler numeros
  printf("Digite: ");
  scanf("%d %d", &num1, &num2);
  Pnum1 = &num1;
  Pnum2 = &num2;

  //comparar
  //exibir resultado
  if (*Pnum1 > *Pnum2) printf("Maior:  %d\n", *Pnum1);
  else printf("Maior: %d\n", *Pnum2);


  
  return 0;
}