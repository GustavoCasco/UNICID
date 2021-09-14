#include <stdio.h>

int main(void) {
  int pontos;

  printf("Digite os pontos obtidos na prova: \n");
  scanf("%d", &pontos);

  if((pontos >= 0) && (pontos <= 30)){
    printf("Regular");
  }else if((pontos >= 31) && (pontos <60)){
    printf("BOM");
  }else if((pontos >=61) && (pontos < 90)) { 
    printf("Muito BOM!!");
  }else if((pontos >=91) && (pontos < 100)){
    printf("Ótimo!!!!");
  }else{
    printf("Pontuação inválida");
  }
  return 0;
}