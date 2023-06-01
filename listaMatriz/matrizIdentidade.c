
#include <stdio.h>

int mainIdentidade() {
  int matriz[4][4];
  int i, j;
  int identidade; // 0 não é matriz identidade, 1 é.

  // leitura dos valores
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("Informe elemento da matriz, linha %d coluna %d: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // verifica se a matriz é identidade ou não
  identidade = 1;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (i == j && matriz[i][j] != 1) { // i == j é a diagonal principal
        /* se elemento da diagonal principal não for 1 */
        identidade = 0;
      }
      if (i != j && matriz[i][j] != 0) {
        /* se elemento que não é da diagonal principal não for 0 */
        identidade = 0;
      }
    }
  }

  /* se é uma matriz identidade */
  if (identidade == 1) {
    printf("\nA matriz informada é uma matriz identidade.\n");

    // exibindo
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        printf("%d ", matriz[i][j]);
      }
      printf("\n");
    }
  } else {
    printf("a matriz informada não é uma matriz identidade.");
  }
  return 0;
}