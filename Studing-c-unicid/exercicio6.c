#include <stdio.h>

int main(void) {
  float peso,altura,imc;

  printf("Digite a altura: \n");
  scanf("%f", &altura);

  printf("Digite o peso: \n");
  scanf("%f",&peso);

  imc = peso/(altura*altura);

  if(imc <=18.5){
    printf("Seu IMC é de: %.2f você está magro",imc);
  }else if(imc <= 25){
    printf("Seu IMC é de: %.2f você está no peso ideal",imc);
  }else if(imc <= 30){
    printf("Seu IMC é de: %.2f você está sobrepeso",imc);
  }else {
    printf("Seu IMC é de: %.2f você está obeso",imc);
  }
  return 0;
}