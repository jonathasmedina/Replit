#include <stdio.h>

int main2(void) {

  int matriz[9][9], i, j, op, contador, contadorLinha, contadorColuna,
      numAVerificar, linha, coluna;

  printf("Insira opção: ");
  scanf("%d", &op);

  if (op == 1) {
    for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++) {
        matriz[i][j] = rand() % 9 + 1;
      }
    }

    printf("*** Matriz gerada aleatoriamente ***\n");
    for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++) {
        printf(" %d ", matriz[i][j]);
      }
      printf("\n");
    }

    // verificando
    for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++) {
        numAVerificar = matriz[i][j];
        contador = 0;
        for (coluna = 0; coluna < 9; coluna++) {
          if (matriz[i][coluna] == numAVerificar)
            contador++;
        }

        for (linha = 0; linha < 9; linha++) {
          if (matriz[linha][j] == numAVerificar)
            contador++;
        }
      }
    }
    if (contador > 1)
      printf("Não é sudoku.\n");
    else
      printf("É sudoku.\n");

    // motivo de não ser sudoku:
    printf("*** Motivos ***\n");
    for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++) {
        numAVerificar = matriz[i][j];
        contadorLinha = 0;
        contadorColuna = 0;
        for (coluna = 0; coluna < 9; coluna++) {
          if (matriz[i][coluna] == numAVerificar)
            contadorColuna++;
        }
        if (contadorColuna > 1) {          
            printf("Elemento %d encontrado %d vezes na linha %d.\n",
                   numAVerificar, contadorColuna, i);  
          }

        for (linha = 0; linha < 9; linha++) {
          if (matriz[linha][j] == numAVerificar)
            contadorLinha++;
        }
        if (contadorLinha > 1)          {          
            printf("Elemento %d encontrado %d vezes na coluna %d.\n",                    numAVerificar, contadorLinha, j);         
        }
      }
    }
  }
  if (op == 2) {
    printf("*** Matriz informada no código ***\n");
    int matriz[9][9] = {
        {3, 1, 6, 5, 7, 8, 4, 9, 2}, {5, 2, 9, 1, 3, 4, 7, 6, 8},
        {4, 8, 7, 6, 2, 9, 5, 3, 1}, {2, 6, 3, 4, 1, 5, 9, 8, 7},
        {9, 7, 4, 8, 6, 3, 1, 2, 5}, {8, 5, 1, 7, 9, 2, 6, 4, 3},
        {1, 3, 8, 9, 4, 7, 2, 5, 6}, {6, 9, 2, 3, 5, 1, 8, 7, 4},
        {7, 4, 5, 2, 8, 6, 3, 1, 9}};

    for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++) {
        printf(" %d ", matriz[i][j]);
      }
      printf("\n");
    }
    // verificando
    for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++) {
        numAVerificar = matriz[i][j];
        contador = 0;
        for (coluna = 0; coluna < 9; coluna++) {
          if (matriz[i][coluna] == numAVerificar)
            contador++;
        }
        for (linha = 0; linha < 9; linha++) {
          if (matriz[linha][j] == numAVerificar)
            contador++;
        }
      }
    }
    if (contador > 2)
      printf("Não é sudoku.");
    else
      printf("É sudoku.");
  }

  return 0;
}