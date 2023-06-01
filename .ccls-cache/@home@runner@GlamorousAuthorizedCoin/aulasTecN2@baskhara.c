#include <stdio.h>
#include <math.h>

void bhaskara(float a_, float b_, float c_){
  float delta, x1, x2;
  delta = b_*b_ - 4*a_*c_;

  if(delta < 0){
    printf("A equação não possui raízes.");
  }
  else if (delta == 0){
    x1 = -b_/(2*a_);
    printf("A equação possui uma raiz: %.2f", x1);
  }
  else{ //delta > 0
    x1 = (-b_ + sqrt(delta))/(2*a_);
    x2 = (-b_ - sqrt(delta))/(2*a_);
    printf("A equação possui duas raízes: %.2f e %.2f.", x1, x2);
  }
    
}

int mainB(){
  float a, b, c;

  printf("Informe a: ");
  scanf("%f", &a);

  printf("Informe a: ");
scanf("%f", &b);
  
  printf("Informe a: ");
  scanf("%f", &c);

  bhaskara(a, b, c);

  return 0;
}
