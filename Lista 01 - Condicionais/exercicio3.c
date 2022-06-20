#include <stdio.h>
/* 
   Calcular a idade de uma pessoa e verificar se ela já tem idade para conseguir Carteira de Habilitação
   Clara Oliveira
   23/03/2022
*/ 
int main(void) {
  //Variáveis
  int ano_nasc, idade;
  char aniversario;

  
  //Ver se pessoa fez aniversário
  printf("Fez aniversário:\n   Sim(S)\n   Não(N)\n");
  printf("> ");
  scanf("%c", &aniversario);
  aniversario = toupper(aniversario);

  //Leitura do ano de nascimento
  printf("Ano de nascimento: ");
  scanf("%d", &ano_nasc);
  
  //Calcular idade e exibir
  idade = (2022 - ano_nasc);
  if(aniversario == 'N')
   {
     idade = idade - 1;
     printf("Idade: %d\n", idade);
   }
   else
   {
     printf("Idade: %d\n", idade);
   }
  
  //Verificar possibilidade de conseguir a habilitação e exibir resultado
  if (idade >= 18)
  {
    printf("Pode obter habilitação\n");
  }
  else
  {
    printf("Não consegue obter habilitação\n");
  }

}