#include <stdio.h>

int mainIdentidade() {

  int matriz[4][4], i, j;
  int naoEhIdentidade;

  naoEhIdentidade = 0;

  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      printf("Informe elemento da linha %d coluna %d: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

   for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      //detectar situação onde a matriz deixa de ser
      //identidade
      if(i ==j && matriz[i][j] != 1){
        //não é identidade
        naoEhIdentidade = 1;
      }
      //outros casos que não é identidade
      if(i != j && matriz[i][j] != 0){
        //não é identidade
        naoEhIdentidade = 1;
      }
    }
   }

for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      printf("%d ", matriz[i][j]);      
    }
  printf("\n");
  }

  
  if (naoEhIdentidade == 0){
    printf("é identidade");
  }
  if (naoEhIdentidade == 1){
    printf("não é identidade");
  }
  

  return 0;
}