#include <stdio.h>

struct Data {
  int dia;
  int mes;
  int ano;
};

int mainEx3() {
  
  struct Data hoje;
  
  hoje.dia = 17;
  hoje.mes = 5;
  hoje.ano = 2023;

  printf("Data de hoje: %d/%d/%d", hoje.dia, hoje.mes, hoje.ano);
  
  return 0;
}
