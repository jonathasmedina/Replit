#include <stdio.h>

//retornando uma matriz em uma função
int** funcMat(int matriz[10][10]){
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      matriz[i][j] = 500;
    }
  }
  return matriz;
}

//retornando um vetor em uma função
int* funcVet(int vet[10]){
 
  for(int i = 0; i < 9; i++){
    vet[i] = 500;
  }

  return vet;  
}


int mainRef() {

  int vet1[10];
  int matriz1[10][10];

  //lendo vetor
  for(int i = 0; i < 9; i++){
    vet1[i] = 10;
  }

  //lendo matriz
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      matriz1[i][j] = 10;
    }
  }

  //ponteiro para receber o vetor
  int* vet2 = funcVet(vet1);

  //ponteiro para receber a matriz
  int** matriz2 = funcMat(matriz1);

  //percorrendo vetor depois da função:
  for(int i = 0; i < 9; i++){
    printf("\ni = %d", i); 
    printf("\nVetor: %d", vet2[i]);
  }

  //percorrendo matriz depois da função:
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
    printf("\Matriz: %d", matriz2[i][j]);
    }
  }
  
  
  return 0;
}