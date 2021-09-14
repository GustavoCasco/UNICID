#include <stdio.h>

int main(void) {
  int h1,h2,m1,m2,soma;

  printf("Digite a idade do primeiro homem: \n");
  scanf("%d", &h1);

  printf("Digite a idade do segundo homem: \n");
  scanf("%d", &h2);

  printf("Digite a idade da primeira mulher: \n");
  scanf("%d", &m1);

  printf("Digite a idade da segunda mulher: \n");
  scanf("%d", &m2);

  if((h1 > h2) && (m2>m1)){
    soma = (h1+m2);
    printf("A soma do homem mais velho(idade: %i) com a mulher mais nova(idade: %i) é: %i",h1,m2,soma);
  }else {
    soma = (h2+m1);
    printf("A soma do homem mais velho(idade: %i) com a mulher mais nova(idade: %i) é: %i",h2,m1,soma);
  }

 if((h2 > h1) && (m1>m2)){
    soma = (h1*m2);
    printf("O produto do homem mais novo(idade: %i) com a mulher mais velha(idade: %i) é: %i",h1,m2,soma);
  }else {
    soma = (h2*m1);
    printf("O produto do homem mais novo(idade: %i) com a mulher mais velha(idade: %i) é: %i",h2,m1,soma);
  }
  return 0;
}