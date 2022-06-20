#include <stdio.h>
/*
  Calcular média de salário de N habitantes
  Clara Oliveira
  01/04/2022
*/
//procedimento: ler dados (salario e numero de filhos) e calcular de salario
void MediaSal(){
  int filhos, hab = 0, soma_sal = 0, soma_filhos = 0;
  float salario = 1;

  printf("\nDigite um salário negativo para encerrar o programa\n");
  
  //enquanto salario positivo rodar procedimento
  while (salario > 0)
  {
    printf("\nSalário: R$");
    scanf("%f", &salario);
    if (salario > 0)
    {
      printf("Número de filhos: ");
      scanf("%d", &filhos);
      soma_sal += salario;
      soma_filhos += filhos;
      hab++;
    }
  }
  printf("\nA média de salário é: R$%.2f\n", (float)(soma_sal/hab));
}

int main(void) {
  //rodar procedimento
  MediaSal();

  return 0;
}