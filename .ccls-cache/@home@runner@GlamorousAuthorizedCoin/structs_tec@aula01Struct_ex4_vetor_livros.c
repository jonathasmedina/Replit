#include <stdio.h>

struct Livro {
  char titulo[50];
  char autor[50];
  int anoPublicacao;
  float valor;
};

void funcao2(struct Livro livrosVet[]) {
  int i, menor, posicaoDoMenor;
  float media = 0;
  for (i = 0; i < 3; i++) {
    printf(
        "\n--Livro %d-- \nTítulo: %s\nAutor: %s\nAno de Publicação: %d\nValor: "
        "%.2f",
        (i + 1), livrosVet[i].titulo, livrosVet[i].autor,
        livrosVet[i].anoPublicacao, livrosVet[i].valor);
  }

  media = (livrosVet[0]  .valor + livrosVet[1].valor + livrosVet[2].valor) / 3;
  printf("\n\nMédia dos valores dos livros: %.2f", media);

  // mais antigo - forma mais simples
  /*
  if (livrosVet[0].anoPublicacao <= livrosVet[1].anoPublicacao &&
      livrosVet[0].anoPublicacao <= livrosVet[2].anoPublicacao) {
    printf("\n\nTítulo do livro mais antigo: %s)", livrosVet[0].titulo);
  } else if (livrosVet[1].anoPublicacao <= livrosVet[0].anoPublicacao &&
             livrosVet[1].anoPublicacao <= livrosVet[2].anoPublicacao) {
    printf("\n\nTítulo do livro mais antigo: %s)", livrosVet[1].titulo);
  } else {
    printf("\n\nTítulo do livro mais antigo: %s)", livrosVet[2].titulo);
  }*/
  //forma melhorada
  menor = livrosVet[0].anoPublicacao;
  posicaoDoMenor = 0;
  for(i = 0; i < 3; i++){
    if(livrosVet[i].anoPublicacao < menor)
      menor = livrosVet[i].anoPublicacao; 
      posicaoDoMenor = i;    
  }
  printf("O título do livro mais antigo é: %s", livrosVet[posicaoDoMenor].titulo);
}

int mainEx4Livros() {
  struct Livro livrosVet[3];
  float media;
  char tituloMaisAntigo[50];
  int i;

  for (i = 0; i < 3; i++) {
    printf("Insira título do livro %d: ", (i + 1));
    scanf(" %[^\n]", &livrosVet[i].titulo);
    printf("Insira autor do livro %d: ", (i + 1));
    scanf(" %[^\n]", &livrosVet[i].autor);
    printf("Insira ano de publicação do livro %d: ", (i + 1));
    scanf("%d", &livrosVet[i].anoPublicacao);
    printf("Insira valor do livro %d: ", (i + 1));
    scanf("%f", &livrosVet[i].valor);
  }

  funcao(livrosVet);

  return 0;
}