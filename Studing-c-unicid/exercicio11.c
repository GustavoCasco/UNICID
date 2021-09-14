#include <stdio.h>

int main(void) {
  float x, y;

  printf("Digite o ponto x: \n");
  scanf("%f", &x);

  printf("Digite o ponto y: \n");
  scanf("%f", &y);

  if((y>0) && (x > 0)){
      printf("Primeiro quadrante");
  }else if((y>0) && (x<0)){
     printf("Segundo quadrante");
  }else if((y <0) && (x<0)){
     printf("Terceiro quadrante");
  }else if((y<0)&& (x>0)){
    printf("Quarto quadrante");
  }else if((x==0)&&(y ==0)){
    printf("ORIGEM");
  }else if((x==0)&&(y!=0)){
    printf("Eixo Y");
  }else if((x!=0)&&(y==0)){
    printf("Eixo X");
  }
  return 0;
}