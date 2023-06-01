#include <stdio.h>

struct Produto {
  int codigo;
  char descricao[25];
  float valor;
  int quantidade;
};

void cadastrarProduto(struct Produto produtoVet[50], int qtdProduto) {
  printf("\n-- Cadastrando produto num %d --", qtdProduto);

  printf("\nInforme código do produto: ");
  scanf("%d", &produtoVet[qtdProduto].codigo);

  printf("\nInforme descrição do produto: ");
  scanf(" %[^\n]", &produtoVet[qtdProduto].descricao);

  printf("\nInforme valor do produto: ");
  scanf("%f", &produtoVet[qtdProduto].valor);

  printf("\nInforme quantidade do produto: ");
  scanf("%d", &produtoVet[qtdProduto].quantidade);
}

void exibirProduto(struct Produto produtoVet[50], int qtdProduto) {
  int i;
  for (i = 0; i < qtdProduto; i++) {
    printf("\nProduto %d", i);
    printf("\ncódigo do produto: %d", produtoVet[i].codigo);

    printf("\ndescrição do produto: %s", produtoVet[i].descricao);

    printf("\nvalor do produto: %.2f", produtoVet[i].valor);

    printf("\nquantidade do produto: %d", produtoVet[i].quantidade);
    printf("\n");
  }
}

void pesquisarProduto(struct Produto produtoVet[50], int qtdProduto) {
  int codigo;
  int i;
  int existe = 0;

  printf("Informe código do produto a pesquisar: ");
  scanf("%d", &codigo);

  for (i = 0; i < qtdProduto; i++) {
    if (codigo == produtoVet[i].codigo) {
      existe = 1;
    }
  }

  if (existe == 1)
    printf("Produto existe.");
  else
    printf("Produto não existe.");
}

void atualizarProduto(struct Produto produtoVet[50], int qtdProduto) {
  int codigo;
  int i;
  int posicao;
  int existe = 0;

  printf("Informe código do produto a ser alterado: ");
  scanf("%d", &codigo);

  for (i = 0; i < qtdProduto; i++) {
    if (codigo == produtoVet[i].codigo) {
      existe = 1;
      posicao = i;
    }
  }

  if (existe == 1) {
    printf("Produto existe. Insira novos valores.");
    printf("\nInforme NOVO código do produto: ");
    scanf("%d", &produtoVet[posicao].codigo);

    printf("\nInforme NOVA descrição do produto: ");
    scanf(" %[^\n]", &produtoVet[posicao].descricao);

    printf("\nInforme NOVO valor do produto: ");
    scanf("%f", &produtoVet[posicao].valor);

    printf("\nInforme NOVA quantidade do produto: ");
    scanf("%d", &produtoVet[posicao].quantidade);

  } else
    printf("Produto não existe.");
}

int main() {

  struct Produto produtoVet[50];
  int qtdProduto = 0;

  int op;

  do {
    printf("\n\n1 - Cadastrar produto ");
    printf("\n2 - Exibir todos os produtos");
    printf("\n3 - Pesquisar um produto");
    printf("\n4 - Atualizar um produto");
    printf("\n5 - Sair ");
    printf("\nInforme a opção: ");
    scanf("%d", &op);

    if (op == 1) {
      cadastrarProduto(produtoVet, qtdProduto);
      qtdProduto++;
    }
    if (op == 2) {
      exibirProduto(produtoVet, qtdProduto);
    }
    if (op == 3) {
      pesquisarProduto(produtoVet, qtdProduto);
    }
    if (op == 4) {
      atualizarProduto(produtoVet, qtdProduto);
    }

    if (op < 1 || op > 5)
      printf("Opção inválida.");

  } while (op != 5);

  return 0;
}
