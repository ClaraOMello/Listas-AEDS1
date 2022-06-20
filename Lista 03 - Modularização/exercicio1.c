#include <stdio.h>
/*
  Calcular a média aritmética de 3 notas
  Clara Oliveira
  09/04/2022
*/
//Procedimento com os parametros: 3 notas e uma letra
void MediaNotas (float nota1, float nota2, float nota3, char comando){
  float media;
  // calcular media aritmetica
  if (comando == 'A')
  {
    media = (nota1 + nota2 + nota3)/3;
  }

  //calcular media ponderada (pesos 5, 3, 2)
  else if (comando == 'P')
  {
    media = ((5*nota1)+(3*nota2)+(2*nota3))/10;
  }

  //exibir
  printf("A media é %.2f\n", media);
}

int main(void) {
  //variaveis
  int quant;
  float n1, n2, n3;
  char letra;

  //ler quantidade de alunos e comando
  printf("Digite a quantidade de alunos: ");
  scanf("%d", &quant);
  printf("\n  Média aritmética (A)\n  Média ponderada (P)\nDigite letra do comando: ");
  scanf(" %c", &letra);
  letra = toupper(letra);

  //realizar o procedimento para os N  alunos
  for (quant = quant; quant > 0; quant--){
      printf("\nDigite as notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    MediaNotas(n1, n2, n3, letra);
  }
  
  return 0;
}