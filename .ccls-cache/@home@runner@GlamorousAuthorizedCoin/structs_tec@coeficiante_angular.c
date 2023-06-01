#include <math.h>
#include <stdio.h>

double calcularCoeficienteAngular(double x1, double y1, double x2, double y2) {
  return (y2 - y1) / (x2 - x1);
}

double calcularAnguloEmGraus(double x1, double y1, double x2, double y2) {
  // cálculo do ângulo, em radianos
  //ângulo (em graus) = atan2(y2 - y1, x2 - x1) * (180 / π)
  double anguloRad = atan2(y2 - y1, x2 - x1);
  double anguloGraus = anguloRad * (180.0 / 3.14);
  return anguloGraus;
}

int mainCoef() {
  double x1, y1, x2, y2;

  printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
  scanf("%lf %lf", &x1, &y1);

  printf("Digite as coordenadas do segundo ponto (x2, y2): ");
  scanf("%lf %lf", &x2, &y2);

  double coeficienteAngular = calcularCoeficienteAngular(x1, y1, x2, y2);
  double anguloGraus = calcularAnguloEmGraus(x1, y1, x2, y2);

  printf("Coeficiente Angular: %.2lf\n", coeficienteAngular);
  printf("Ângulo em Graus: %.2lf\n", anguloGraus);

  return 0;
}
