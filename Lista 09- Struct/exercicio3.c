#include <stdio.h>
/*
  Clara Oliveira
  09/06/2022
  Criar cadastro dos clientes e calcular quanto cada um deve pagar
*/
typedef struct Cliente
{
  int codigo;
  char email[30];
  float horas;
  char pagina;
} Cliente;

//procedimento para preencher cadastros
void preencher(Cliente *cadastros, int quant){
  for (int i = 0; i < quant; i++)
    {
      printf("Codigo cliente: ");
      scanf("%d", &cadastros[i].codigo);
      printf("Email cliente: ");
      scanf(" %[^\n]", cadastros[i].email);
      printf("Horas de acesso: ");
      scanf("%f", &cadastros[i].horas);
      printf("Página: ");
      scanf(" %c", &cadastros[i].pagina);
      printf("\n");
    }
}

int main(void) {
  Cliente cadastros[500];
  int quantidade;
  float horas;
  double totalPreco;
  
  printf("Quantos clientes (max 500): ");
  scanf("%d", &quantidade);

  preencher(cadastros, quantidade);

  //calcular quanto cliente devera pagar
  printf("Total a pagar por cliente: \n");
  for (int i = 0; i < quantidade; i++)
    {
      totalPreco = 35;
      horas = cadastros[i].horas - 20;

      if(horas > 0) totalPreco += horas * 2.5;

      if(cadastros[i].pagina == 'S' || cadastros[i].pagina == 's') totalPreco += 40;

      printf(" %d - R$%.2lf\n", cadastros[i].codigo, totalPreco);
    }
  return 0;
}