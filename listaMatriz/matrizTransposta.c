#include <stdio.h>

int mainTransposta() {
  int matrizOriginal[3][3];
  int matrizTransposta[3][3];

  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Informe elemento da matriz, linha %d coluna %d: ", i, j);
      scanf("%d", &matrizOriginal[i][j]);
    }
  }

  // calculando matriz transposta
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      matrizTransposta[j][i] = matrizOriginal[i][j];
    }
  }

  /* Exibindo matriz original */
  printf("\Matriz original: \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", matrizOriginal[i][j]);
    }
    printf("\n");
  }

  /* Exibindo matriz transposta */
  printf("\nMatrix Transposta: \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", matrizTransposta[i][j]);
    }
    printf("\n");
  }

  return 0;
}