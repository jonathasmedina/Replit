#include <stdio.h>

int mainS(){

  char frase[50];

  printf("Digite frase: ");
  scanf(" %[^\n]", &frase);

  printf("Frase lida: %s", frase);



  return 0;
}