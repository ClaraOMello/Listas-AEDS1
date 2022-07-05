#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define N 10
/*
  Clara Oliveira
  03/07/2022
  Criar um arquivo com a data de aniversario das pessoas por mes
*/

class Pessoa {
private:
  string nome;
  int diaNiver, mesNiver;
  void Inicializar(string nNome, int nDia, int nMes) {
    SetNome(nNome);
    SetDia(nDia);
    SetMes(nMes);
  }

public:
  Pessoa() { Inicializar("Fulano", 25, 12); }
  void SetNome(string nNome) {
    if (nNome.length() >= 2)
      nome = nNome;
    else
      cout << "Nome inválido\n";
  }
  void SetDia(int nDia) {
    if (nDia > 0 && nDia <= 31)
      diaNiver = nDia;
    else
      cout << "Dia inválido\n";
  }
  void SetMes(int nMes) {
    if (nMes > 0 && nMes <= 12)
      mesNiver = nMes;
    else
      cout << "Mes inválido\n";
  }

  string GetNome() { return nome; }
  int GetDia() { return diaNiver; }
  int GetMes() { return mesNiver; }
};

int main() { 
  Pessoa grupo[N];
  string nome;
  int dia, mes;
  char nomeArq[30];
  FILE *arq;
  bool aniversariante;

  cout << "Nome do arquivo (colocar '.txt'): ";
  cin >> nomeArq;

  arq = fopen(nomeArq, "w");
  
  for (int i = 0; i < N; i++)
  {
    cout << "Pessoa: " << i << endl;
    cout << "Nome: ";
    cin >> nome;
    grupo[i].SetNome(nome);
    cout << "Dia: ";
    cin >> dia;
    grupo[i].SetDia(dia);
    cout << "Mes: ";
    cin >> mes;
    grupo[i].SetMes(mes);
  }

  for (int mesNum = 1; mesNum <= 12; mesNum++)
  {
    aniversariante = false;

    for (int i = 0; i < N; i++)
    {
      if (grupo[i].GetMes() == mesNum) aniversariante = true;
    }

    if(aniversariante)
    {
      switch (mesNum){
      case 1: fprintf(arq, "    Janeiro\n"); break;
      case 2: fprintf(arq, "    Fevereiro\n"); break;
      case 3: fprintf(arq, "    Março\n"); break;
      case 4: fprintf(arq, "    Abril\n"); break;
      case 5: fprintf(arq, "    Maio\n"); break;
      case 6: fprintf(arq, "    Junho\n"); break;
      case 7: fprintf(arq, "    Julho\n"); break;
      case 8: fprintf(arq, "    Agosto\n"); break;
      case 9: fprintf(arq, "    Setembro\n"); break;
      case 10: fprintf(arq, "    Outubro\n"); break;
      case 11: fprintf(arq, "    Novembro\n"); break;
      case 12: fprintf(arq, "    Dezembro\n"); break;
    }
    }
    
    for (int i = 0; i < N; i++)
    {
      if (grupo[i].GetMes() == mesNum) fprintf(arq, "%s: %d/%d\n", grupo[i].GetNome().c_str(), grupo[i].GetDia(), grupo[i].GetMes());
    }

  }

  fclose(arq);
}