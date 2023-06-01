
#include <stdio.h>

int main_2() {
  int pais, contadorProdutos;
  float precoUni, valorTransp, seguro, valorFinal, imp;
  float valorTotalImpostosSomados, valorTotalPrecoUnitarioSomados,
      mediaPrecoUnitario;
  float menorValorInformado, maiorValorInformado;
  char meioTransp, cargaP;
  char descricao[50], descricaoMaiorValor[50], descricaoMenorValor[50];

  valorTransp = 0;
  imp = 0;
  seguro = 0;
  valorTotalImpostosSomados = 0;
  contadorProdutos = 0;
  valorTotalPrecoUnitarioSomados = 0;
  menorValorInformado = 0;
  maiorValorInformado = 0;

  do {

    printf("Escreva o produto desejado: ");
    scanf("%s", &descricao);

    printf("\nInforme país de origem. '1' - EUA, '2' - MÉXICO, '3' - OUTROS: ");
    scanf("%d", &pais);

    printf("Informe meio de transporte da carga. 'T' - TERRESTRE, 'F' - "
           "FLUVIAL, 'A' - AEREO: ");
    scanf("%s", &meioTransp);

    printf("É carga perigosa? 'S' - Sim, 'N' - Não: ");
    scanf("%s", &cargaP);

    printf("Informe o preço unitário: ");
    scanf("%f", &precoUni);

    if (pais == 1 && cargaP == 'S') {
      valorTransp = 50;
    }
    if (pais == 2 && cargaP == 'S') {
      valorTransp = 21;
    }

    if (pais == 3 && cargaP == 'S') {
      valorTransp = 24;
    }
    if (pais == 1 && cargaP == 'N') {
      valorTransp = 12;
    }
    if (pais == 2 && cargaP == 'N') {
      valorTransp = 21;
    }
    if (pais == 3 && cargaP == 'N') {
      valorTransp = 60;
    }

    if (pais == 2 || meioTransp == 'A') {
      seguro = precoUni / 2;
    }

    if (precoUni <= 100) { // 5%
      imp = precoUni * 0.05;
    }
    if (precoUni > 100) { // 10%
      imp = precoUni * 0.1;
    }

    if (precoUni > 0) {

      // primeiro produto lido, menor && maior = ele
      if (contadorProdutos == 0) {
        menorValorInformado = precoUni;
        for (int i = 0; i < 50; i++) {
          descricaoMenorValor[i] = descricao[i];
        }

        maiorValorInformado = precoUni;
        for (int i = 0; i < 50; i++) {
          descricaoMaiorValor[i] = descricao[i];
        }
      } else { // segundo produto lido em diante, atualizar menor e maior caso
               // necessC!rio

        // considerando que nC#o hC! valores repetidos
        if (precoUni >= maiorValorInformado) {
          maiorValorInformado = precoUni;
          for (int i = 0; i < 50; i++) {
            descricaoMaiorValor[i] = descricao[i];
          }
        }

        if (precoUni <= menorValorInformado) {
          menorValorInformado = precoUni;
          for (int i = 0; i < 50; i++) {
            descricaoMenorValor[i] = descricao[i];
          }
        }
      }

      valorTotalImpostosSomados = valorTotalImpostosSomados + imp;
      contadorProdutos = contadorProdutos + 1;
      valorTotalPrecoUnitarioSomados =
          valorTotalPrecoUnitarioSomados + precoUni;

      valorFinal = precoUni + imp + valorTransp + seguro;

      printf("Produto %s possui valor final igual a: %f \n\n ", descricao,
             valorFinal);
    }

  } while (precoUni > 0);

  if (contadorProdutos > 0) {
    printf("O valor total dos impostos somados é: %f \n",
           valorTotalImpostosSomados);
    mediaPrecoUnitario = valorTotalPrecoUnitarioSomados / contadorProdutos;
    printf("A média de preço unitário é: %f \n", mediaPrecoUnitario);
    printf("O maior preço unitário é: %f. Descrição do produto: %s \n",
           maiorValorInformado, descricaoMaiorValor);
    printf("O menor preço unitário lido é: %f. Descrição do produto: %s \n",
           menorValorInformado, descricaoMenorValor);
  } else {
    printf("nenhum produto lido...");
  }

  return 0;
}