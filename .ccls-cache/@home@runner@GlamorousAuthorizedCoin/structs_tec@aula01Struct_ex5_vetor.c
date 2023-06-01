#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 3

 struct Aluno {
    char nome[50];
    int idade;
    float nota;
} ;

int main() {
    struct Aluno alunos[MAX_ALUNOS];

    // Cadastro de alunos
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

        printf("\n");
    }

    // Exibição dos alunos cadastrados
    printf("Alunos cadastrados:\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n\n", alunos[i].nota);
    }

    return 0;
}
