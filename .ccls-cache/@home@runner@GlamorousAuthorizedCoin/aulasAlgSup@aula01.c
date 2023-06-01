#include <stdio.h>

int somar(int n1, int n2) {
  int resultado = n1 + n2; 
  return resultado;
}

int main____() {

  int n1, n2;
  n1 = 10;
  n2 = 20;

  int resultadoAqui = somar(n1, n2);

  

  printf("Resultado: %d", resultadoAqui);

  return 0;
}

