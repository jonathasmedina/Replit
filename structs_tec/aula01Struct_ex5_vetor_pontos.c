#include <math.h>
#include <stdio.h>

struct Ponto {
  int posicaoEixoX;
  int posicaoEixoY;
};

int mainEx5() {
  struct Ponto pontoVet[5];

  int i;

  for (i = 0; i < 5; i++) {
    printf("\nPonto %d: Informe a posição no eixo x do ponto: ", (i + 1));
    scanf("%d", &pontoVet[i].posicaoEixoX);

    printf("\nPonto %d: Informe a posição no eixo y do ponto: ", (i + 1));
    scanf("%d", &pontoVet[i].posicaoEixoY);
  }

  // exibindo vetor de pontos
  for (i = 0; i < 5; i++) {
    printf("\nPonto %d: eixo x: %d", (i + 1), pontoVet[i].posicaoEixoX);
    printf("\nPonto %d: eixo y: %d", (i + 1), pontoVet[i].posicaoEixoY);
  }
  return 0;
}
