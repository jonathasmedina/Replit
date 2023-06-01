#include <stdio.h>




struct Livro {
  char titulo[50];
  char autor[50];
  int ano_pub;
  float valor;
};


void funcaoLivro(struct Livro livrosVet[3]) {
  int i;
  int menor, posicaoDoMenor;
  float soma = 0;
  float media;
  for (i = 0; i < 3; i++) {
    printf("Livro - %d", (i + 1));
    printf("\nTítulo: %s", livrosVet[i].titulo);
    printf("\nAutor: %s", livrosVet[i].autor);
    printf("\nAno de publicação: %d", livrosVet[i].ano_pub);
    printf("\nValor: %.2f", livrosVet[i].valor);

    // média dos valores
    soma = soma + livrosVet[i].valor;
  }
  media = soma / 3;
  printf("A média dos valores dos livros é: %.2f", media);

  //título livro mais antigo
  /*forma mais simples
  if(livrosVet[0].ano_pub <livrosVet[1].ano_pub && 
    livrosVet[0].ano_pub < livrosVet[2].ano_pub){
    printf("Título do livro mais antigo é: %s", livrosVet[0].titulo);    
    }
  else if((livrosVet[1].ano_pub < livrosVet[0].ano_pub) 
 && (livrosVet[1].ano_pub < livrosVet[2].ano_pub)){
     printf("Título do livro mais antigo é: %s", livrosVet[1].titulo);
    }
  else{
    printf("Título do livro mais antigo é: %s", livrosVet[2].titulo);
  }*/
  
  //forma melhorada
  menor = livrosVet[0].ano_pub;
  posicaoDoMenor = 0;
  for(i = 0; i < 3; i++){
    if(livrosVet[i].ano_pub < menor)
      menor = livrosVet[i].ano_pub; 
      posicaoDoMenor =  i;    
  }
  printf("O título do livro mais antigo é: %s", livrosVet[posicaoDoMenor].titulo);
    
}

int mainLivros() {
  struct Livro livrosVet[3];
  int i;

  for (i = 0; i < 3; i++) {
    printf("\nInsira o título do livro %d: ", (i + 1));
    scanf(" %[^\n]", &livrosVet[i].titulo);

    printf("Insira o autor do livro %d: ", (i + 1));
    scanf(" %[^\n]", &livrosVet[i].autor);

    printf("Insira o ano de publicação do livro %d: ", (i + 1));
    scanf("%d", &livrosVet[i].ano_pub);

    printf("Insira o valor do livro %d:", (i + 1));
    scanf("%f", &livrosVet[i].valor);
  }

  funcaoLivro(livrosVet);

  return 0;
}