#include <stdio.h>

struct Aluno {
  char nome[50];
  int idade;
  float media;
};

int main() {
  struct Aluno alunos[5];

  for (int i = 0; i < 5; i++) {
    printf("Digite o nome do aluno %d: ", i+1);
    scanf("%s", alunos[i].nome);

    printf("Digite a idade do aluno %d: ", i+1);
    scanf("%d", &alunos[i].idade);

    printf("Digite a média do aluno %d: ", i+1);
    scanf("%f", &alunos[i].media);

    printf("\n");
  }

  printf("Dados dos alunos:\n");
  for (int i = 0; i < 5; i++) {
    printf("Aluno %d\n", i+1);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Idade: %d\n", alunos[i].idade);
    printf("Média: %.2f\n", alunos[i].media);
    printf("\n");
  }

  return 0;
}
