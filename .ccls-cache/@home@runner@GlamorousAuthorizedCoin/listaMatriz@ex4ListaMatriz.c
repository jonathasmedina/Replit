#include <stdio.h>

int mainTeste_(void) {
  int matriz[4][7], i, j, bolaQuadrada, menor, k, maiorElemento, linhaDoMenorElemento, coluna;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 7; j++) {
      printf("Digite número, linha %d, coluna %d:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  menor = matriz[0][0];
  linhaDoMenorElemento = 0;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 7; j++) {
      if(matriz[i][j] < menor){
        menor = matriz[i][j];
        linhaDoMenorElemento = i;
      }
    }
  }

  
  maiorElemento = matriz[linhaDoMenorElemento][0];
  coluna = 0;
  for( k = 0; k < 7; k++){
    if(matriz[linhaDoMenorElemento][k] > maiorElemento){
      maiorElemento = matriz[linhaDoMenorElemento][k];
      coluna = k;
    }
  }

  printf("Elemento: %d, na linha %d na coluna %d", maiorElemento, linhaDoMenorElemento);

  

  return 0;
}