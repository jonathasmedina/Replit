#include <stdio.h>
#include <math.h>

struct Ponto {
  int posicaoEixoX;
  int posicaoEixoY;
};

int mainEx2() {
  struct Ponto ponto1;
  struct Ponto ponto2;

  float distancia;
  
  printf("PONTO 1: Informe valor do eixo x para o ponto: ");
  scanf("%d", &ponto1.posicaoEixoX);

  printf("PONTO 1: Informe valor do eixo Y para o ponto: ");
  scanf("%d", &ponto1.posicaoEixoY);

  printf("PONTO 2: Informe valor do eixo x para o ponto: ");
  scanf("%d", &ponto2.posicaoEixoX);

  printf("PONTO 2:Informe valor do eixo Y para o ponto: ");
  scanf("%d", &ponto2.posicaoEixoY);

  distancia = sqrt(pow(ponto2.posicaoEixoX-ponto1.posicaoEixoX, 2) + pow(ponto2.posicaoEixoY-ponto1.posicaoEixoY, 2));

  printf("\nA distância entre o ponto A (Eixo X: %d e Eixo Y: %d) e o ponto B (Eixo X: %d e Eixo Y: %d) é: %.2f.", ponto1.posicaoEixoX,ponto1.posicaoEixoY, ponto2.posicaoEixoX, ponto2.posicaoEixoY, distancia);

  return 0;
}
