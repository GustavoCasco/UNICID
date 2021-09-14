#include <stdio.h>

int main(void) {
  int valor,ms100,ms50,ms10,ms5,ms1,resto;
  
  printf("Informa o valor que deseja: \n");
  scanf("%i",&valor);

  ms100 = valor/100;
  resto = valor%100;

  ms50 = resto/50;
  resto= resto%50;

  ms10 = resto/10;
  resto = resto%10;

  ms5 = resto/5;
  resto = resto%5;

  printf("A quantidade de moeda correspondente é: \n");
  printf("%i Moeda(s) de 100 \n", ms100);
  printf("%i Moeda(s) de 50\n", ms50);
  printf("%i Moeda(s) de 10\n", ms10);
  printf("%i Moeda(s) de 5\n", ms5);
  printf("%i Moeda(s) de 1\n", resto);
  return 0;
}