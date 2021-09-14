#include <stdio.h>

int main(void) {
  float nota1,nota2, nota3, media;

  printf("Digite a primeira nota: \n");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: \n");
  scanf("%f", &nota2);

  printf("Digite a terceira nota: \n");
  scanf("%f", &nota3);

  media= (nota1+nota2+nota3)/3;

  if(media >= 7.0){
    printf("APROVADO! Sua média foi de %.2f",media);
  }else if(media >= 5.0){
    printf("EXAME! Sua média é: %.2f! Você terá uma nova oportunidade",media);
  }else { 
    printf("REPROVADO! Sua média é: %.2f",media);
  }
  return 0;
}