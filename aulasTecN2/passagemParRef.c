#include <stdio.h>

void func(int *n1e){

  //*n1e colocar * torna a variável especial, chamada PONTEIRO, que armazena endereço de memória.

printf("\nO endereço de memória armazenado no ponteiro: %p", n1e);
  
  //não confundir com a posição de memória da própria variável do ponteiro, que é outra:
  //printf("\nO endereço de memória do próprio ponteiro: %p", &n1e);
  
  *n1e = 1000;

  //se alterar a variável sem o *, não altera-se mais o valor na posição de memória a qual ela faz referência, mas sim o conteúdo dela. LEmbre-se que neste momento o conteúdo é a posição de memória. Então a linha debaixo não alera a variável n1 na função main:
  //n1e = 1000;
}

int mainPassagR() {

  int n1;

  n1 = 10;

printf("O endereço de memória da variável n1 é: %p", &n1);
  
  //passagem de parâmetro por referência
  //& envia o endereço de memória da variável n1, e não o valor
  func(&n1);

  printf("\n\nValor final de n1: %d", n1);
 
  return 0;
}