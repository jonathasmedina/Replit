#include <stdio.h>
#include <string.h>

struct Pessoa {
  int id;
  int idade;
  char nome[50];
};

void exibirPessoas(struct Pessoa pessoas[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("ID: %d\n", pessoas[i].id);
    printf("Idade: %d\n", pessoas[i].idade);
    printf("Nome: %s\n", pessoas[i].nome);
    printf("\n");
  }
}

void atualizarIdade(struct Pessoa pessoas[], int novaIdade) {
  pessoas[0].idade = novaIdade;
}

int mainEx() {
  struct Pessoa pessoas[3];

  pessoas[0].id = 1;
  pessoas[0].idade = 10;
  strcpy(pessoas[0].nome, "João");

  pessoas[1].id = 2;
  pessoas[1].idade = 20;
  strcpy(pessoas[1].nome, "Maria");

  pessoas[2].id = 3;
  pessoas[2].idade = 30;
  strcpy(pessoas[2].nome, "Pedro");

  exibirPessoas(pessoas, 3);

  printf("Atualizando a idade da primeira pessoa...\n");
  atualizarIdade(pessoas, 300);

  exibirPessoas(pessoas, 3);

  return 0;
}
