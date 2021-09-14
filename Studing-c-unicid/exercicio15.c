#include <stdio.h>

int main(void) {
  int num1,num2,num3,soma;
  
  printf("Informa o numero que deseja: \n");
  scanf("%i",&num1);

  printf("Informa o numero que deseja: \n");
  scanf("%i",&num2);

  printf("Informa o numero que deseja: \n");
  scanf("%i",&num3);

  if((num1 > num2) && (num2 > num3))
  {
    soma = num1+num2;
    printf("A soma dos maiores numeros digitados %d e %d tem o valor de: %i", num1,num2,soma);

  }else if( (num1 == num2) || (num1 == num3) || (num2 == num3)){
     printf("Dois numeros ou todos os numeros digitados são iguais, digite novamente com numeros diferentes");

  }else if((num2>num1) &&(num1<num3)){
    soma = num2+num3;
    printf("A soma dos maiores numeros digitados %d e %d tem o valor de: %i", num2,num3,soma);
    
  }else if((num1>num2) &&(num3>num2)){
    soma = num1+num3;
    printf("A soma dos maiores numeros digitados %d e %d tem o valor de: %i", num1,num3,soma);
  }

  return 0;
}