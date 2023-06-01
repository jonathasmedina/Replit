#include <stdio.h>

int mainTeste(void) {

  int matriz[5][5], soma[5], i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("Digite número, linha %d, coluna %d:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < 5; i++) {
    soma[i] = 0;
    for (j = 0; j < 5; j++) {
      soma[i] = soma[i] + matriz[i][j];
    }
  }
  /*for para verificar se vetor ta com a soma certa
  for(int k = 0; k < 5; k++){
    printf("\nvetor: %d", soma[k]);
    
  }*/

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      matriz[i][j] = matriz[i][j] * soma[i];
    }  
  }
  
  printf("Exibindo matriz multiplicada pela soma das linhas.\n");
   for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {      
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}