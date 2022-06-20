#include <stdio.h>
/*
  Calcular quantidade de votos
  Clara Oliveira
  26/03/2022
*/
int main(void) {
  //variaveis
  int voto, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, nulo = 0, branco = 0;
  
  //ler numero dos votos e contabilizá-los
  printf("\nCódigo dos votos\n     1. Candidato 1\n     2. Candidato 2\n     3. Candidato 3\n     4. Candidato 4\n     5. Nulo\n     6. Branco\n");
  printf("\nPara finalizar contagem digite 0\n");
  while (voto != 0)
    {
      printf("\nVoto: ");
      scanf("%d", &voto);
      if (voto == 5)
      {
        nulo++;
      }
      else if (voto == 6)
      {
        branco++;
      }
      else if (voto == 4)
      {
        cand4++;
      }
      else if (voto == 3)
      {
        cand3++;
      }
      else if (voto == 2)
      {
        cand2++;
      }
      else if (voto == 1)
      {
        cand1++;
      }
      else
      {
        printf("Voto inválido\n");
      }
    }

  //exibir resultados
  printf("\nResultado\n    Candidato 1: %d voto(s)\n    Candidato 2: %d voto(s)\n    Candidato 3: %d voto(s)\n    Candidato 4: %d voto(s)\n    Nulo: %d voto(s)\n    Branco: %d voto(s)\n", cand1, cand2, cand3, cand4, nulo, branco);
  
  return 0;
}