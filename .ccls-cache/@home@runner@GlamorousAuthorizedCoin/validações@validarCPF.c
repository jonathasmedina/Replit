#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validarCPF(char cpf[]);

int mainCPF() {
    char cpf[12];
    printf("Digite um CPF (apenas números): ");
    fgets(cpf, 12, stdin);
    if (validarCPF(cpf)) {
        printf("CPF válido!\n");
    } else {
        printf("CPF inválido!\n");
    }
    return 0;
}

int validarCPF(char cpf[]) {
    int i, j, digito1 = 0, digito2 = 0;
    char digitoVerif1, digitoVerif2;

    // Remove qualquer caractere não numérico do CPF
    for (i = 0, j = 0; cpf[i] != '\0'; i++) {
        if (isdigit(cpf[i])) {
            cpf[j++] = cpf[i];
        }
    }
    cpf[j] = '\0';

    // Verifica se o CPF tem 11 dígitos
    if (strlen(cpf) != 11) {
        return 0;
    }

    // Calcula o primeiro dígito verificador
    for (i = 0, j = 10; i < 9; i++, j--) {
        digito1 += (cpf[i] - '0') * j;
    }
    digito1 = 11 - (digito1 % 11);
    if (digito1 >= 10) {
        digito1 = 0;
    }
    digitoVerif1 = digito1 + '0';

    // Calcula o segundo dígito verificador
    for (i = 0, j = 11; i < 10; i++, j--) {
        digito2 += (cpf[i] - '0') * j;
    }
    digito2 = 11 - (digito2 % 11);
    if (digito2 >= 10) {
        digito2 = 0;
    }
    digitoVerif2 = digito2 + '0';

    // Verifica se os dígitos verificadores estão corretos
    if (cpf[9] == digitoVerif1 && cpf[10] == digitoVerif2) {
        return 1;
    } else {
        return 0;
    }
}
