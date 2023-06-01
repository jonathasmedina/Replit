#include <stdio.h>

int mainAqui() {

  int n1, n2, i, j, sorteado;
  int vet1[10];
  int matriz1[3][3];

  // necessário para sortear
  srand(time(NULL));

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      // printf("insira elemento da matriz: ");
      // scanf("%d", &matriz1[i][j]);
    }
  }

  for (i = 0; i < 10; i++) {
    // printf("insira elemento: ");
    // scanf("%d", &vet1[i]);
  }

  n1 = 10;
  n2 = 20;

  printf("\nInsira o valor: ");
  // scanf("%d", &n1);

  printf("variável n1 =  %d e variável n2 = %d", n1, n2);

  if (n1 > 10 && n2 < 1000) {
    printf("n1 maior que 10");
  } else if (n1 != 10 || n2 <= 30) {

  } else {
  }

  for (i = 0; i < 10; i++) {
  }

  i = 0;
  while (i < 1000) {
    i++;
  }

  i = 0;
  do {
    // sortear número
    sorteado = rand() % 10;

    printf("\nSorteado: %d", sorteado);
    i++;
  } while (i < 10);

  return 0;
}
