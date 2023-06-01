#include <stdio.h>

int mainTeste_2(void) {

  int matriz[7][7], i, j;
  int vet1[7], vet2[7];
  int maior, menor;
  
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 7; j++) {
      printf("Digite número, linha %d, coluna %d:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < 7; i++) {
    maior = matriz[i][0];
    for (j = 0; j < 7; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
      }
    }
    vet1[i] = maior;
  }

  for (i = 0; i < 7; i++) {
    menor = matriz[0][i];
    for (j = 0; j < 7; j++) {
      if(matriz[j][i] < menor){
        menor = matriz[j][i];
      }
    }
    vet2[i] = menor;
  }

  printf("Vetor 1\n");
  for(i = 0; i<7; i++)
    printf(" %d ", vet1[i]);

  printf("\nVetor 2\n");
  for(i = 0; i<7; i++)
    printf(" %d ", vet2[i]);

  return 0;
}