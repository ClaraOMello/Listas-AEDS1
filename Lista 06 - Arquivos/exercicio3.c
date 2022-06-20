#include <stdio.h>
#include <stdlib.h>
/*
  Clara Oliveira
  11/05/2022
  Implemente um programa que abra o arquivo texto (criado no exercício anterior) e conte a quantidade de caracteres ‘a’ que estão presentes nele. Imprima a quantidade na tela.
*/
void criaArquivo() {
  char caracter;
  FILE *arq = fopen("texto.txt", "w");
  
  printf("Digite 0 para concluir\n Texto: ");
  scanf("%c", &caracter);
  
  while (caracter != '0'){
    fprintf(arq, "%c", caracter);
    scanf("%c", &caracter);
  }

  fclose(arq);
}

int main(void) {
  criaArquivo();
  FILE *conta = fopen("texto.txt", "r");
  int quant = 0;
  char caracter;

  while (fscanf(conta, "%c", &caracter) != EOF){
    if (caracter == 'a') quant++;
  }

  printf("Quantidade de caracters 'a': %d\n", quant);

  fclose(conta);
  
  return 0;
}