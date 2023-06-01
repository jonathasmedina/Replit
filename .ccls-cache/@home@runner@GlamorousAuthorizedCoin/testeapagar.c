#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main_________--(void) {
  int v[11], i, k, resto1, resto2, opcao, soma1, soma2, cont, teste, l,
      contrepetido, sorteado;
  k = 10;
  resto1 = 0;
  resto2 = 0;
  soma1 = 0;
  soma2 = 0;
  cont = 0;
  teste = 0;
  l = 11;
  contrepetido = 0;
  srand(time(NULL));
  do {
    printf("Digite a opcao 1 se deseja verificar se o CPF é válido ou ");
    printf("digite a opcao 2 se deseja gerar um CPF: ");
    scanf("%d", &opcao);
  } while (opcao != 1 && opcao != 2);
  if (opcao == 1) {
    for (i = 0; i < 11; i++) {
      printf("Informe a posicao %d", i + 1);
      printf(" do CPF: ");
      scanf("%d", &v[i]);
    }
    for (i = 0; i < 9; i++) {
      soma1 += v[i] * k;
      k--;
    }
    resto1 = soma1 % 11;
    if (resto1 == 0 || resto1 == 1) {
      if (v[9] == 0) {
        cont++;
      }
    } else {
      teste = 11 - resto1;
      if (teste == v[9]) {
        cont++;
      }
    }
    for (i = 0; i < 10; i++) {
      soma2 += v[i] * l;
      l--;
    }
    resto2 = soma2 % 11;
    if (resto2 == 0 || resto2 == 1) {
      if (v[10] == 0) {
        cont++;
      }
    } else {
      teste = 11 - resto2;
      if (teste == v[10]) {
        cont++;
      }
    }
    for (i = 0; i < 11; i++) {
      if (v[0] == v[i]) {
        contrepetido++;
      }
    }
    printf("\n");
    if (cont == 2 && contrepetido != 11) {
      printf("Você digitou o CPF válido.");
    } else {
      printf("CPF inválido.");
    }
  }

  if (opcao == 2) {
    do {     
      k = 10;
      resto1 = 0;
      resto2 = 0;
      soma1 = 0;
      soma2 = 0;
      cont = 0;
      teste = 0;
      l = 11;
      contrepetido = 0;      
      for (i = 0; i < 11; i++) {
        v[i] = rand() % 10;
      }
      for (i = 0; i < 9; i++) {
        soma1 += v[i] * k;
        k--;
      }
      resto1 = soma1 % 11;
      if (resto1 == 0 || resto1 == 1) {
        if (v[9] == 0) {
          cont++;
        }
      } else {
        teste = 11 - resto1;
        if (teste == v[9]) {
          cont++;
        }
      }
      for (i = 0; i < 10; i++) {
        soma2 += v[i] * l;
        l--;
      }
      resto2 = soma2 % 11;
      if (resto2 == 0 || resto2 == 1) {
        if (v[10] == 0) {
          cont++;
        }
      } else {
        teste = 11 - resto2;
        if (teste == v[10]) {
          cont++;
        }
      }
      for (i = 0; i < 11; i++) {
        if (v[0] == v[i]) {
          contrepetido++;
        }
      }      
    } while (cont != 2 || contrepetido == 11);    
    printf("O número de CPF gerado é: \n");
    for (i = 0; i < 11; i++) {
      printf("%d ", v[i]);
    }
  }
}