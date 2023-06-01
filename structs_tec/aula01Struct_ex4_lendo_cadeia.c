#include <stdio.h>

struct Livro {
  char titulo[50];
  char autor[50];
  int anoPublicacao;
  float valor;
};

int mainEx4() {
  struct Livro livro1, livro2, livro3;
  float media;
  char tituloMaisAntigo[50];

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

  printf("\n--Livro 1-- \nTítulo: %s\nAutor: %s\nAno de Publicação: %d\nValor: %.2f", livro1.titulo,
         livro1.autor, livro1.anoPublicacao, livro1.valor);

  printf("\n--Livro 2-- \nTítulo: %s\nAutor: %s\nAno de Publicação: %d\nValor: %.2f", livro2.titulo,
         livro2.autor, livro2.anoPublicacao, livro2.valor);

  printf("\n--Livro 3-- \nTítulo: %s\nAutor: %s\nAno de Publicação: %d\nValor: %.2f", livro3.titulo,
         livro3.autor, livro3.anoPublicacao, livro3.valor);

  media =(livro1.valor+livro2.valor+livro3.valor)/3;
  printf("\n\nMédia dos valores dos livros: %.2f", media);


  //mais antigo
  if (livro1.anoPublicacao <= livro2.anoPublicacao && livro1.anoPublicacao <= livro3.anoPublicacao) {
       printf("\n\nTítulo do livro mais antigo: %s)", livro1.titulo);
   } else if (livro2.anoPublicacao <= livro1.anoPublicacao && livro2.anoPublicacao <= livro3.anoPublicacao) {
       printf("\n\nTítulo do livro mais antigo: %s)", livro2.titulo);
   } else {
       printf("\n\nTítulo do livro mais antigo: %s)", livro3.titulo);
   }
  
  
  return 0;

  
}