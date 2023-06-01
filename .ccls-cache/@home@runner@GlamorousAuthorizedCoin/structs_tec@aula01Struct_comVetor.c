#include <stdio.h>

struct Pessoa {
  int idade;
  float altura;  
};

int main() {
  struct Pessoa p1;
  struct Pessoa p2;

  p1.idade = 30;
  p1.altura = 2.0;
  
  printf("Os valores de p1 são: %d para idade e %.2f para altura.", p1.idade,
         p1.altura);


  p2.idade = 20;
  p2.altura = 1.5;
  
  printf("\nOs valores de p2 são: %d para idade e %.2f para altura.", p2.idade,
         p2.altura);
  return 0;
}
