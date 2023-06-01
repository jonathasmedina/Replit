//verifique se um vetor de 10 números inteiros é um palíndromo

#include <stdbool.h>
#include <stdio.h>

bool ehPalindromo(int vet1[]) {
  for (int i = 0; i < 10 / 2; i++) {
    if (vet1[i] != vet1[10 - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  int vet1[10];

  for (int i = 0; i < 10; i++) {
    printf("Digite os números: ");
    scanf("%d", &vet1[i]);
  }
  if (ehPalindromo(vet1)) {
    printf("O vetor é um palíndromo.\n");
  } else {
    printf("O vetor não é um palíndromo.\n");
  }
  return 0;
}
