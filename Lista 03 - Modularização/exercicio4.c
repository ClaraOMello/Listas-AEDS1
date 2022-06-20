#include <stdio.h>
/*
  Verificar se 3 valores formam um triângulo
  Clara Oliveira
  01/04/2022
*/
//procedimento: verificar se medidas podem formar um triangulo e identificar o tipo

void Triangulo(float x, float y, float z){
  if (x < (y+z) && y < (x+z) && z < (x+y)){
    if((x == y) || (x == z) || (y == z)){
      if(x == y && (x == z)){
        printf("Triângulo equilátero\n");
      }
      else{
        printf("Triângulo isósceles\n");
      }
    }
    else{
      printf("Triângulo escaleno\n");
    }
  }
  else{
    printf("Não forma triângulo\n");
  }
}

int main(void) {
  //variaveis
  float lado1, lado2, lado3;

  //Ler lados
  printf("Digite os lados: ");
  scanf("%f %f %f", &lado1, &lado2, &lado3);
  //executar procedimento
  Triangulo(lado1, lado2, lado3);
  
  return 0;
}