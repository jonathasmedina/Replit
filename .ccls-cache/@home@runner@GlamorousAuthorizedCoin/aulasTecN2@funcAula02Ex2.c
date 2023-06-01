/* duas funções: 
- uma lê uma matriz 3x3;
- outra imprime a matriz;

importante: em c, vetores e matrizes em parâmetros = passagem por referência, e não por cópia. próxima aula: diferença entre cópia e referência
*/

#include <stdio.h>

// Função para imprimir uma matriz quadrada
void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }  
}

// Função para preencher uma matriz quadrada com valores consecutivos
void preencherMatriz(int matriz[3][3]) {
    int valor = 10;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = valor++;
        }
    }  
}

int mainP() {
    int matriz[3][3];
    preencherMatriz(matriz);
    imprimirMatriz(matriz);
    return 0;
}


