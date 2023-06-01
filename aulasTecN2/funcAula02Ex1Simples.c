// verifique se um vetor de 10 números inteiros é um palíndromo

#include <stdbool.h>
#include <stdio.h>

bool palindromo(int vet1[10]) {
  
  for (int i = 0; i < 10 / 2; i++) {
    if (vet1[i] != vet1[10 - i - 1]) {
      return false;
    }
  }
  return true;

  
}

int mainPalind() {
  int vet1[10];

  for (int i = 0; i < 10; i++) {
    printf("Digite os números: ");
    scanf("%d", &vet1[i]);
  }

  if(palindromo(vet1))
  {
    printf("é palindromo");
  }    
  else{
    printf("não é palindromo");
  }

  return 0;
}
