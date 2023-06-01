#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validarCartaoCredito(char cartao[]);

int mainCartao() {
    char cartao[17];
    printf("Digite um número de cartão de crédito: ");
    fgets(cartao, 17, stdin);
    if (validarCartaoCredito(cartao)) {
        printf("Cartão de crédito válido!\n");
    } else {
        printf("Cartão de crédito inválido!\n");
    }
    return 0;
}

int validarCartaoCredito(char cartao[]) {
    int i, j, soma = 0, tamanho = strlen(cartao) - 1;
    // Verifica se o cartão tem 16 dígitos
    if (tamanho != 16) {
        return 0;
    }
    // Verifica se os caracteres são dígitos
    for (i = 0; i < tamanho; i++) {
        if (!isdigit(cartao[i])) {
            return 0;
        }
    }
    // Realiza a soma dos dígitos de acordo com o algoritmo de Luhn
    for (i = tamanho - 1, j = 1; i >= 0; i--, j++) {
        int digito = cartao[i] - '0';
        if (j % 2 == 0) {
            digito *= 2;
            if (digito > 9) {
                digito -= 9;
            }
        }
        soma += digito;
    }
    // Verifica se a soma é múltipla de 10
    if (soma % 10 == 0) {
        return 1;
    } else {
        return 0;
    }
}
