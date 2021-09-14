#include <stdio.h>

int main(void) {
  char genero;
  float altura, peso;

  printf("Digite o genero (OBS: tem que ser 'F' ou 'M': \n");
  scanf("%c", &genero);

  printf("Digite a altura: \n");
  scanf("%f", &altura);

  if(genero == 'M'){
      peso= (72.7*altura)-58;
      printf("O peso ideal é: %.2f",peso);
  }else if(genero == 'F'){
      peso= (62.1*altura)-44.7;
      printf("O peso ideal é: %.2f",peso);
  }
  return 0;
}