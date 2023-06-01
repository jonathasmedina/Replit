#include <stdio.h>

struct Livro {
  char titulo[50];
  char autor[50];
  int anoPublicacao;
  float valor;
};

int main() {
  struct Livro livro1, livro2, livro3;
  float media;

  printf("Insira título do primeiro livro: ");
  scanf(" %[^\n]", &livro1.titulo);
  printf("Insira autor do primeiro livro: ");
  scanf(" %[^\n]", &livro1.autor);
  printf("Insira ano de publicação do primeiro livro: ");
  scanf("%d", &livro1.anoPublicacao);
  printf("Insira valor do primeiro livro: ");
  scanf("%f", &livro1.valor);

  printf("\nInsira título do segundo livro: ");
  scanf(" %[^\n]", &livro2.titulo);
  printf("Insira autor do segundo livro: ");
  scanf(" %[^\n]", &livro2.autor);
  printf("Insira ano de publicação do segundo livro: ");
  scanf("%d", &livro2.anoPublicacao);
  printf("Insira valor do segundo livro: ");
  scanf("%f", &livro2.valor);

  printf("\nInsira título do terceiro livro: ");
  scanf(" %[^\n]", &livro3.titulo);
  printf("Insira autor do terceiro livro: ");
  scanf(" %[^\n]", &livro3.autor);
  printf("Insira ano de publicação do terceiro livro: ");
  scanf("%d", &livro3.anoPublicacao);
  printf("Insira valor do terceiro livro: ");
  scanf("%f", &livro3.valor);

  printf("\nLivro 1: Título: %s\nAutor: %s\nAno de Publicação: %d\nValor: %f", livro1.titulo,
         livro1.autor, livro1.anoPublicacao, livro1.valor);

  printf("\nLivro 2: Título: %s\nAutor: %s\nAno de Publicação: %d\nValor: %f", livro2.titulo,
         livro2.autor, livro2.anoPublicacao, livro2.valor);

  printf("\nLivro 3: Título: %s\nAutor: %s\nAno de Publicação: %d\nValor: %f", livro3.titulo,
         livro3.autor, livro3.anoPublicacao, livro3.valor);
  return 0;

  
}