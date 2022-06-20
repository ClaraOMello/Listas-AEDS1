#include <stdio.h>
/* Verificar a divisibilidade de 10 numeros quaisquer por 9, 2 ou 5
  Clara Oliveira
  03/04/2022
*/
int main(void) {
  //variaveis
  int num, quant=10, por2=0, por5=0, por9=0;

  //ler 10 numeros
  printf("Digite 10 números: ");
  while (quant > 0){
    printf("\n\n");
    scanf("%d", &num);
    printf("\nNúmero: %d", num);

  //dividir po 2, 5, 9   
    //verificar se resultados sao inteiros exibir mensagens
    if (num %2 == 0){
      printf("\n  Divisível por 2");
      por2++;
    }
    if (num %5 == 0){
      printf("\n  Divisível por 5");
      por5++;
    }
    if (num %9 == 0){
      printf("\n  Divisível por 3 e 9");
      por9++;
    }
    quant--;
    if (num %2 != 0 && num %5 != 0 && num %9 != 0){
      printf("\n  Não divisível pelos valores");
    }
  }
  printf("\n\nDivisiveis por 2: %d\nDivisiveis por 5: %d\nDivisiveis por 9: %d\n", por2, por5, por9);
  
  return 0;
}