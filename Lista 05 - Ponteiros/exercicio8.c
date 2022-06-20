#include <stdio.h>
/*
  Clara Oliveira
  30/04/2022
  Ordenar numeros atraves de ponteiros
*/
//função
int ordenar(int *n1, int *n2, int *n3)
{
  int a;
  
  if ((*n1 == *n2) && (*n2 == *n3)) return 1;
  else
  {
    if((*n1 > *n2) && (*n1 > *n3))
    {
      a = *n3;
      *n3 = *n1;
      *n1 = a;
    }
    else if ((*n2 > *n1) && (*n2 > *n3))
    {
      a = *n3;
      *n3 = *n2;
      *n2 = a;
    }

    if (*n1 > *n2)
    {
      a = *n2;
      *n2 = *n1;
      *n1 = a;
    }
    return 0;
  }
}

int main(void) {
  //variaveis
  int num1, num2, num3;
  
  //leitura de 3 valores
  printf("Digite 3 numeros: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  ordenar(&num1, &num2, &num3);
  
  //Exibir
  printf("\n%d, %d, %d\n", num1, num2, num3);
  
  return 0;
}