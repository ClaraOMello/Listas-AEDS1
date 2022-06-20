#include <stdio.h>
/* 
   Calcular ganhos de um hotel em dias normais e em dias com promoção e comparar ambos os valores
   Clara Oliveira
   23/03/2022
*/
int main(void) {
  //Variaveis
  float diaria_nor, diaria_promo, total_promo, total_nor;

  //Leitura do valor da diária normal
  printf("Diária em dias normais: R$");
  scanf("%f", &diaria_nor);

  //Calcular valor da diaria promocional
  diaria_promo = 0.75 * diaria_nor;
  printf("\nDiária promocional: R$%.2f\n", diaria_promo);

  //Calcular total arrecadocom diaria promocional
  total_promo = (0.8 * 75) * diaria_promo;
  printf("\nTotal com diária promocional (ocupação 80%): R$%.2f\n", total_promo);
    
  //Calcular total arrecado com diaria normal
  total_nor = (0.5 * 75) * diaria_nor;
  printf("\nTotal com diária normal (ocupação 50%): R$%.2f\n", total_nor);

  //Calcular a diferença dos valores
  printf("\nO lucro da diária promocional sobre a diária normal é de R$%.2f\n",(total_promo - total_nor));

  if ((total_promo - total_nor) < 0)
  {
    printf("A diária normal é mais vantajosa\n");
  }
  else if ((total_promo - total_nor) > 0)
  {
    printf("A diária promocional é mais vantajosa\n");
  }
  else
  {
    printf("Não há diferença de ganho entre as diárias\n");
  }
  return 0;
}