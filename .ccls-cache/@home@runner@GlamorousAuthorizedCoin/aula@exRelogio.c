#include <stdio.h>
#include <stdlib.h>

int main() {

  int primeiroNumero, segundoNumero, proximoNumero, i, n;

  primeiroNumero = 0;
  segundoNumero = 1;

  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("%d\n", primeiroNumero);

    proximoNumero = primeiroNumero + segundoNumero;
    primeiroNumero = segundoNumero;
    segundoNumero = proximoNumero;
  }

  // system("pause");

  return 0;
}
