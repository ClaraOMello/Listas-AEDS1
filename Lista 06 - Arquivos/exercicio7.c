#include <stdio.h>
#include <stdlib.h>
/*
  Clara Oliveira
  14/05/2022
  Faça um programa para inserir N letras informadas pelo usuário em um arquivo texto. Onde N  é  uma  quantidade  de  letras  definida  pelo  usuário.  Depois  de  inseridas  as  N  letras,  o programa deverá ler todas as N letras do arquivo, calcular e mostrar a quantidade de vogais, ou seja,  quantas letras a, e, i, o, u. 
*/

//procedimento escrever N letras em um arquivo
void escrever(int N){
  FILE *escrita = fopen("texto.txt", "w");
  char caracter;

  printf("Texto: ");
  scanf(" %c", &caracter);
  
  while (N > 0)
    {
      fprintf(escrita, "%c", caracter);
      scanf("%c", &caracter);
      N--;
    }
  
  fclose(escrita);
}

//função que calcula quantidade de vogais
int vogais()
{
  FILE *conta = fopen("texto.txt", "r");
  int soma = 0;
  char letra;

  while (fscanf(conta, "%c", &letra) != EOF)
    {
      if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
      {
        soma++;
      }
    }

  fclose(conta);
  return soma;
}


int main(void) {
  int quant;

  //ler quantidade N
  printf("Digite a quantidade de caracteres: ");
  scanf("%d", &quant);

  escrever(quant);

  //escrever quantidade de vogais
  quant = vogais();
  printf("Quantidade de vogais: %d\n", quant);
  
  return 0;
}