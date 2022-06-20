#include <stdio.h>
/* 
  Ler se o a velocidade está dentro do limite de uma avenida, caso contrário encontrar o valor da multa
  Clara Oliveira
  23/03/2022
*/
int main(void) {
  //variaveis
  float veloc_max, veloc_motorista, multa, diferenca_v;
  
  //leitura da velocidades
  printf("Velocidade máxima permitida: ");
  scanf("%f", &veloc_max);
  printf("Velocidade do motorista: ");
  scanf("%f", &veloc_motorista);

  //Calcular multa ou exibir mensagem
  if (veloc_motorista > veloc_max)
  {
    diferenca_v = veloc_motorista -veloc_max;
    if (diferenca_v <= 10)
    {
      multa = 50;
    }
    else if (diferenca_v <= 30 && diferenca_v >= 11)
    {
      multa = 100;
    }
    else
    {
      multa = 200;
    }
    printf("\nMulta: R$%.2f\n", multa);
  }
  else
  {
    printf("\nMotorista respeitou a lei\n");
  }


  return 0;
}