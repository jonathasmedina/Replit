#include <stdio.h>

struct Aluno {
  char nome[50];
  float notas[3];
  float media;
};

void funcao(struct Aluno alunos[5]) {
  int i, j;
  // Calculando a média das notas
  for (i = 0; i < 5; i++) {
    alunos[i].media = 0;
    for (j = 0; j < 3; j++) {
      alunos[i].media += alunos[i].notas[j];
    }
    alunos[i].media = alunos[i].media / 3;
  }
}

int mainex6ComFuncao() {
  struct Aluno alunos[5];

  int numAlunos;
  int i, j;
  // Cadastrar os alunos
  for (i = 0; i < 5; i++) {
    printf("\n\nAluno %d\n", i + 1);

    printf("Digite o nome: ");
    scanf(" %[^\n]s", alunos[i].nome);

    for (j = 0; j < 3; j++) {
      printf("Digite a nota %d: ", j + 1);
      scanf("%f", &alunos[i].notas[j]);
    }
  }

  funcao(alunos);

  // Exibir os dados dos alunos, após cálculo da média
  printf("\n---Dados dos alunos---\n");
  for (i = 0; i < 5; i++) {
    printf("\n\nAluno %d:\n", i + 1);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Notas: %.2f, %.2f, %.2f\n", alunos[i].notas[0], alunos[i].notas[1],
           alunos[i].notas[2]);
    printf("Média: %.2f\n", alunos[i].media);
  }

  return 0;
}
