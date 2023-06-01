#include <stdio.h>
#include <stdlib.h>

int mainLuhn() {
  int numero_cartao[11];
  int tamanho, digito, digito_atual, soma = 0;

  printf("Digite o número a validar: ");
  for (int i = 0; i < 11; i++) {
    scanf("%d", &numero_cartao[i]);
  }

  for (int i = 10; i >= 0; i--) {
    digito_atual = numero_cartao[i];
    if (i % 2 != 0) { // só faço nas pos ímpar (luhn: penúltima até a o começo,
                      // pulando um)
      digito_atual *= 2;
      if (digito_atual > 9) {
        digito_atual -= 9; // 12 = 1+2; 15 = 1+5, etc
      }
    }
    soma += digito_atual;
  }

  digito = soma % 10;

  printf("\nSoma final: %d", soma);

  if (digito == 0) {
    printf("\nO número do cartão de crédito é válido.\n");
  } else {
    printf("\nO número do cartão de crédito é inválido.\n");
  }

  return 0;
}
