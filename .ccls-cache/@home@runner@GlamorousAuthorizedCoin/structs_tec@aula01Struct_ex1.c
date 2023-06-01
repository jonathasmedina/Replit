#include <stdio.h>

struct Pessoa {
  char nome[25];
  int idade;
  float altura;
};

int mainEx1() {
  struct Pessoa pessoa1;

  printf("Informe idade da pessoa: ");
  scanf("%d", &pessoa1.idade);

  printf("Informe nome da pessoa: ");
  scanf(" %[^\n]", &pessoa1.nome);

  printf("Informe a altura: ");
  scanf("%f", &pessoa1.altura);

  printf("A pessoa 1 tem nome = %s tem idade = %d e altura = %.2f",
         pessoa1.nome, pessoa1.idade, pessoa1.altura);

  return 0;
}
