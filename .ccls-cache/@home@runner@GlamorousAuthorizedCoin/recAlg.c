#include <stdio.h>

int main______________() {

  int codigosProdutos[5];
  float precoProdutosLojas[5][4];
  float custoTransporte[5];

  float valoresImpostos[5][4];

  int i, j;

  for (i = 0; i < 5; i++) {
    printf("Informe código do produto (%d): ", i);
    scanf("%d", &codigosProdutos[i]);
  }
  
  printf("\n");

  for (i = 0; i < 5; i++) {
    printf("Informe o custo de transporte do produto (%d): ", i);
    scanf("%f", &custoTransporte[i]);
  }

  printf("\n");

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      printf("Informe preço do produto (%d) na loja (%d): ", i, j);
      scanf("%f", &precoProdutosLojas[i][j]);
    }
  }

  // cálculo imposto
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      if (precoProdutosLojas[i][j] <= 50) {
        valoresImpostos[i][j] = precoProdutosLojas[i][j] * 5 / 100;
      } else if (precoProdutosLojas[i][j] > 50 &&
                 precoProdutosLojas[i][j] <= 100) {
        valoresImpostos[i][j] = precoProdutosLojas[i][j] * 10 / 100;
      } else {
        valoresImpostos[i][j] = precoProdutosLojas[i][j] * 20 / 100;
      }
    }
  }
  printf("\n");

  for (i = 0; i < 5; i++) {
    printf("*** Código do produto: %d.***\n", codigosProdutos[i]);
    printf("Custo do transporte do produto: %.2f.\n\n", custoTransporte[i]);

    for (j = 0; j < 4; j++) {
      printf("Preço do produto na loja %d: %.2f.\n", j, precoProdutosLojas[i][j]);
    }
    printf("\n");

    for (j = 0; j < 4; j++) {
      printf("Valor do imposto do produto na loja %d: %.2f.\n", j,
             valoresImpostos[i][j]);
    }
    printf("\n");

    for (j = 0; j < 4; j++) {
      printf("Valor final do produto na loja %d: %.2f.\n", j,
             (valoresImpostos[i][j]) + precoProdutosLojas[i][j] +
                 custoTransporte[i]);
    }
    printf("\n");
  }
}