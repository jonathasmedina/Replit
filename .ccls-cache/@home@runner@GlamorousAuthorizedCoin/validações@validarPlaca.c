#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validarPlaca(char placa[]);

int mainPlaca() {
    char placa[9];
    printf("Digite uma placa (formato ABC1234): ");
    fgets(placa, 9, stdin);
    if (validarPlaca(placa)) {
        printf("Placa válida!\n");
    } else {
        printf("Placa inválida!\n");
    }
    return 0;
}

int validarPlaca(char placa[]) {
    int i;
    // Verifica se a placa tem 7 caracteres
    if (strlen(placa) != 7) {
        return 0;
    }
    // Verifica se os 3 primeiros caracteres são letras maiúsculas
    for (i = 0; i < 3; i++) {
        if (!isupper(placa[i])) {
            return 0;
        }
    }
    // Verifica se os 4 últimos caracteres são dígitos
    for (i = 3; i < 7; i++) {
        if (!isdigit(placa[i])) {
            return 0;
        }
    }
    return 1;
}
