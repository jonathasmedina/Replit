#include <stdio.h>

int mainTestes(void) {

   int matriz[3][3],i, j;
  int entreiNoIf;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Digite número, linha %d, coluna %d:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  entreiNoIf = 0;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if(matriz[i][j] != matriz[j][i]){
        entreiNoIf = 1;
      }
    }
  }
  if(entreiNoIf == 0){
    printf("A matriz é simétrica.");
  }

  
  

  
  return 0; 
}