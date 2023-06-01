#include <stdio.h>

int funcaoSomaMatriz(int matriz[5][5]) {
  int i, j, soma;
  soma = 0;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      soma = soma + matriz[i][j];
    }
  }
  return soma;
}

int main_Apag() {

  int i, j, matriz[5][5];

  srand(time(NULL));

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      matriz[i][j] = rand() % 10;
    }
  }
  int resultadoSoma = funcaoSomaMatriz(matriz);

  printf("O resultado da soma dos elementos da matriz é: %d", resultadoSoma);

  return 0;
}
