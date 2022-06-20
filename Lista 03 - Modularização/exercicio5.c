#include <stdio.h>
/*
  Exibir conceito de acordo com média final
  Clara Oliveira
  01/04/2022
*/
//procedimento que calcula a media de notas e exibe conceito
void Conceito(float media){
  if (media<=39){
    printf("Conceito: F\n");
  }
  else if (media <=59){
    printf("Conceito: E\n");
  }
  else if (media <=69){
    printf("Conceito: D\n");
  }
  else if (media <=79){
    printf("Conceito: C\n");
  }
  else if (media <=89){
    printf("Conceito: B\n");
  }
  else if (media >= 90){
    printf("Conceito: A\n");
  }
}
int main(void) {
  //variaveis
  float valor;
  int quant;

  printf("Quantidade de alunos: ");
  scanf("%d", &quant);

  //executar procedimento N vezes
  for(quant = quant; quant > 0; quant--){
    printf("\nMédia: ");
    scanf("%f", &valor);
    Conceito(valor);
  }
  
  return 0;
}