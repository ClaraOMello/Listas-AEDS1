#include <stdio.h>
/*
  Fazer levantamento do lucro de mercadorias
  Clara Oliveira
  26/03/2022
*/
int main(void) {
  //variaveis
  float valor_compra = 1, valor_venda, lucro, porcentagem, soma_compra = 0, soma_venda = 0, soma_lucro = 0;
  int lucro_10 = 0, lucro_20 = 0, lucro_medio = 0;
  
  //ler preço de compra e venda (ultima linha preço de compra ==0)
  while (valor_compra != 0)
  {
    printf("\nValor compra: R$");
    scanf("%f", &valor_compra);
    if (valor_compra != 0)
    {
      printf("Valor venda: R$");
      scanf("%f", &valor_venda);
      lucro = valor_venda - valor_compra;
      soma_compra += valor_compra;
      soma_lucro += lucro;
      soma_venda += valor_venda;
      
        //Determinar a porcentagem do lucro
      porcentagem = lucro/valor_compra;
      if (porcentagem < 0.1)
      {
        lucro_10++;
      }
      else if (porcentagem > 0.2)
      {
        lucro_20++;
      }
      else
      {
        lucro_medio++;
      }
    }
  }
  
  //Exibir valor total de compra, de venda e do lucro
  printf ("\nQuantidade de mercadorias com lucro:\n   Inferior a 10%: %d\n   De 10 a 20%: %d\n   Superior a 20%: %d\n", lucro_10, lucro_medio, lucro_20);
  printf("\nValor total de compra: R$%.2f\nValor total de venda: R$%.2f\nValor total do lucro: R$%.2f\n", soma_compra, soma_venda, soma_lucro);
  
  return 0;
}