#include <stdio.h>
/*
  Clara Oliveira
  30/04/2022
  Exibir maior valor na primeira variavel
*/
//declarar função
int MaiorMenor(int *num1, int *num2)
{
  int a;
  if (*num2 > *num1) 
  {
    a = *num1; 
    *num1 = *num2;
    *num2 = a;
  }
  return 0;
}

int main(void) {
  //variaveis
  int n1, n2;

  //leitura de variaveis
  printf("Digite dois numeros: ");
  scanf("%d %d", &n1, &n2);

  MaiorMenor(&n1, &n2);

  printf("Maior: %d\n", n1);
  printf("Menor: %d\n", n2);

  
  return 0;
}