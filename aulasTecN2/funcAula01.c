#include <stdio.h>

int minhaFuncao(int n1OutraVariavel, int n2OutraVariavel, char nome[20],
                int vat1[10]) {
  int resultado;
  resultado = n1OutraVariavel + n2OutraVariavel;

  //printf("Nome na função: ");

  //fgets(nome, 20, stdin);
  vat1[0] = 50;
  vat1[1] = 500;
  vat1[2] = 5000;

  return resultado;
}

int mainFunc() {

  int n1, n2;
  char nome[20];

  int vet1[3];
  vet1[0] = 10;
  vet1[1] = 100;
  vet1[2] = 1000;

  printf("Digite um número: ");
  scanf("%d", &n1);

  printf("Digite outro número: ");
  scanf("%d", &n2);

  getchar();
  printf("Nome: ");

  fgets(nome, 20, stdin);

  //printf("Nome antes função: %s", nome);

  int resultadoFuncao = minhaFuncao(n1, n2, nome, vet1);

  printf("O resultado é: %d", resultadoFuncao);

  //printf("Nome após função: %s", nome);
  
  printf("\nVetor após função: %d", vet1[0]);
  
  return 0;
}
