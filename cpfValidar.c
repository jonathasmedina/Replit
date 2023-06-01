#include <stdio.h>
#include <stdlib.h>

int mainValidar() {
  int cpf[11], i, soma, resto, decimoDigito, multiplicador,
      decimoPrimeiroDigito;
  int valido = 0; // 0 falso, 1 verdadeiro
  int primeiroNumero, cont;

  for (i = 0; i < 11; i++) {
    printf("Informe cpf posicão %d: ", i);
    scanf("%d", &cpf[i]);
  }

  printf("nums informados cpf:\n");

  for (i = 0; i < 11; i++) {
    printf("%d ", cpf[i]);
  }

  // cálculo décimo dígito:
  soma = 0;
  multiplicador = 10;
  for (i = 0; i < 9; i++) {
    soma = soma + cpf[i] * multiplicador;
    multiplicador--;
  }

  printf("\n\n*** Cálculo - décimo elemento ***\n");
  printf("Soma dos dígitos: %d\n", soma);

  // cálculo resto da divisão da soma por 11
  resto = soma % 11;

  printf("Resto da divisão por 11: %d\n", resto);

  if (resto == 0 || resto == 1)
    decimoDigito = 0;
  else
    decimoDigito = 11 - resto;

  printf("Décimo dígito calculado: %d\n", decimoDigito);

  // cálculo décimo primeiro dígito:
  printf("\n\n*** Cálculo - décimo primeiro elemento ***\n");

  soma = 0;
  multiplicador = 11;
  for (i = 0; i < 10; i++) {
    soma = soma + cpf[i] * multiplicador;
    multiplicador--;
  }

  printf("Soma dos dígitos: %d\n", soma);

  // cálculo resto da divisão da soma por 11
  resto = soma % 11;

  printf("Resto da divisão por 11: %d\n", resto);

  if (resto == 0 || resto == 1)
    decimoPrimeiroDigito = 0;
  else
    decimoPrimeiroDigito = 11 - resto;

  printf("Décimo primeiro dígito calculado: %d\n", decimoPrimeiroDigito);

  // cálculos feitos, agora verificar se bate:
  if (cpf[9] == decimoDigito && cpf[10] == decimoPrimeiroDigito)
    valido = 1;
  else
    valido = 0;

  // agora, validar todos os números repetidos
  cont = 0;
  primeiroNumero = cpf[0];

  for (i = 0; i < 11; i++) {
    if (primeiroNumero == cpf[i]) {
      cont++;
    }
  }

  if (cont == 11)
    valido = 0;

  if (valido == 0)
    printf("CPF inválido");
  if (valido == 1)
    printf("CPF válido");
}
