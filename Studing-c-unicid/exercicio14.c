#include <stdio.h>

int main(void) {
  int num1,num2,num3;
  
  printf("Informa o numero que deseja: \n");
  scanf("%i",&num1);

  printf("Informa o numero que deseja: \n");
  scanf("%i",&num2);

  printf("Informa o numero que deseja: \n");
  scanf("%i",&num3);

  if((num1 > num2) && (num1 > num3))
  {
    printf("O maior numero digitado foi: %i", num1);
  }else if( (num1 == num2) && (num1 == num3) && (num2 == num3)){
     printf("Os numeros digitados são iguais");
  }else if((num2>num1) &&(num2>num3)){
    printf("O maior numero digitado foi: %i", num2);
  }else {
    printf("O maior numero digitado foi: %i", num3);
  }



  return 0;
}