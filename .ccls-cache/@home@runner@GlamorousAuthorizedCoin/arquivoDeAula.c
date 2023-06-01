#include <stdio.h>
#include <stdlib.h>

int maasdasdin() {
  int cpf[11], i, valido, soma, cont, multiplicador, resto, decimoDigito, decimoPrimeiroDigito;

  valido = 0; // falso, 1 para verdadeiro
  

  for(i = 0; i <11; i++){
    printf("Informe cpf posicao %d: ", i);
    scanf("%d", &cpf[i]);    
  }

  for(i = 0; i <11; i++){
    printf("%d ", cpf[i]);    
  }

  soma = 0;
  multiplicador = 10;
  //cálculo do décimo dígito
  for(i = 0; i < 9; i++){
    soma = soma + cpf[i] * multiplicador;
      multiplicador--;
  }

  resto = soma % 11;

  if(resto == 0 || resto == 1)
    decimoDigito = 0;
  else
    decimoDigito = 11 - resto;

    //cálculo décimo primeiro dígito
  soma = 0;
  multiplicador = 11;
  //cálculo do décimo dígito
  for(i = 0; i < 10; i++){
    soma = soma + cpf[i] * multiplicador;
      multiplicador--;
  }

  resto = soma % 11;
  
  if(resto == 0 || resto == 1)
    decimoPrimeiroDigito = 0;
  else
    decimoPrimeiroDigito = 11 - resto;

  if(decimoDigito == cpf[9] && decimoPrimeiroDigito == cpf[10]){
    valido = 1;
  }
  else
    valido = 0;


  cont = 0;
  for(i = 0; i < 11; i++){
    if(cpf[i] == cpf[0]){
      cont++;
    }
  }

  if(cont == 11)
    valido = 0;

  if(valido == 0){
    printf("CPF Inválido");
  }
  if(valido == 1){
    printf("CPF Válido");
  }
  
}
