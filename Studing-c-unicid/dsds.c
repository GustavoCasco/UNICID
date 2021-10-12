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
    printf("A ordem crescente destes numeros são: %d,%d,%d", num3,num2,num1);

  }else if ( (num3==num1) ||(num2==num1) || (num2==num3)){
    printf("Dois ou todos os numero são iguais");
  }else if ((num2>num1) && (num1>num3)){
    printf("A ordem crescente destes numeros são: %d,%d,%d", num3,num1,num2);
  }else if ((num3>num1) && (num2>num1)){
    printf("A ordem crescente destes numeros são: %d,%d,%d", num1,num2,num3);
  }else if ((num3>num2) && (num1>num2)){
    printf("A ordem crescente destes numeros são: %d,%d,%d", num2,num1,num3);
  }

  return 0;
}