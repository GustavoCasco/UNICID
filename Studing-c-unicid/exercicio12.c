#include <stdio.h>

int main(void) {
  int mes;

  printf("Digite o numero do mês: \n");
  scanf("%i", &mes);

  switch(mes){

    case 1:
      printf("Esse é o mês de Janeiro");
    break;

    case 2:
      printf("Esse é o mês de Fevereiro");
    break;

    case 3:
      printf("Esse é o mês de Março");
    break;

    case 4:
      printf("Esse é o mês de Abril");
    break;

    case 5:
      printf("Esse é o mês de Maio");
    break;

    case 6:
      printf("Esse é o mês de Junho");
    break;

    case 7:
      printf("Esse é o mês de Julho");
    break;

    case 8:
      printf("Esse é o mês de Agosto");
    break;

    case 9:
      printf("Esse é o mês de Setembro");
    break;

    case 10:
      printf("Esse é o mês de Outubro");
    break;

    case 11:
     printf("Esse é o mês de Novembro");
    break;

    case 12:
      printf("Esse é o mês de Dezembro");
    break;
  }
  
  return 0;
}