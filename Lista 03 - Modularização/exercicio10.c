#include <stdio.h>
/*
  Classificar categoria de acordo com a idade
  Clara Oliveira
  05/04/2022
*/
//função que retorna categoria
char Categoria(int idade)
{
  //variaveis
  char categoria;
  
  //condições para cada categoria
  if (idade >= 5 && idade <= 7)
  {
    categoria = 'F';
  }
  else if (idade >= 8 && idade <= 10)
  {
    categoria = 'E';
  }
  else if (idade >= 11 && idade <= 13)
  {
    categoria = 'D';
  }
  else if (idade >= 14 && idade <= 15)
  {
    categoria = 'C';
  }
  else if (idade >= 16 && idade <= 17)
  {
    categoria = 'B';
  }
  else
  {
    categoria = 'A';
  }

  return categoria;
}
int main(void) {
  //variaveis
  int idade;
  char categoria;
  
  //ler idade
  printf("Idade: ");
  scanf("%d", &idade);

  //exibir categoria
  categoria = Categoria(idade);
  printf("Categoria: %c\n", categoria);
  
  return 0;
}