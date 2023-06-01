/*/
  ALUNAS: RÌLLARY MORRONE. LARYSSA HENNES, RHADYJA PADILHA.
/*/

#include <stdio.h>

int main__temp(void) {

  int produtos[5],i,j,c,l,m,n;
  float custo[5], produtosLojas[5][4], imposto, vTotalLojas ;

    for (i=0;i<5;i++){
        printf("Informe o codigo do produto [%d]: ", i);
        scanf ("%d", &produtos[i]);
    }

    for (j=0;j<5;j++){
        printf("Informe o custo de transporte  [%d]: ", j);
        scanf ("%f", &custo[j]);
    }
   
    for (c=0;c<5;c++){
        for (l=0;l<4;l++){
            printf("Informe preço do produto [%d] na loja [%d]: ", c, l, m, n);
            scanf ("%f", &produtosLojas[c][l]);
        }
    }
   
    for (c=0;c<5;c++){
        for (l=0;l<5;l++){
            if(produtosLojas[c][l] <= 50.00){
                imposto = (produtosLojas[c][l] / 100) * 5;
                vTotalLojas = produtosLojas[c][l] + imposto;
                printf("%f", vTotalLojas);
            }
            if(produtosLojas[c][l] > 50.00 && produtosLojas[c][l] <= 100.00){
                imposto = (produtosLojas[c][l] / 100) * 10;
                vTotalLojas = produtosLojas[c][l] + imposto;
                printf("%f", vTotalLojas);
            }
            if(produtosLojas[c][l] > 100.00){
                imposto = (produtosLojas[c][l] / 100) * 20;
                vTotalLojas = produtosLojas[c][l] + imposto;
            }
        }
    }
       for (m=0;m<5;m++){
         
            for (n=0;n<4;n++){
              
                printf("\nCódigo do produto: %d",produtos[i]);
              printf("\nCusto do transporte do produto: %d é de %.2f",produtos[i], produtosLojas[c][l]);
              printf("\nCusto do transporte do produto: %d é de %.2f",produtos[i], produtosLojas[c][l]);
             
            }
    }
  
  return 0;
}
