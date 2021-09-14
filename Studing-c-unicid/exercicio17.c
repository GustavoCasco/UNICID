#include <stdio.h>

int main(void) {
  char combustivel;
  float litros, custo, desconto, valorFinal;

  printf("Digite a quantidade de litros que deseja: \n");
  scanf("%f",&litros);

   printf("Digite o tipo de gasolina: ('a' para alcool OU 'g' para gasolina)\n");
   scanf("%s",&combustivel);

  if(combustivel == 'a'){
    custo = litros*3.9;
    if(litros < 20)
    {
      desconto = (custo*0.03);
      valorFinal = custo-desconto;
      printf("O valor inicial era de: %.2f e o valor final com desconto de 3 porcento é: %.2f", custo,valorFinal);
    }
     if(litros > 20)
    {
      desconto = (custo*0.05);
      valorFinal = custo-desconto;
      printf("O valor inicial era de: %.2f e o valor final com desconto de 5 porcento é: %.2f", custo,valorFinal);
    }
  }else if(combustivel == 'g'){
    custo = litros*5.3;
    if(litros < 20)
    {
      desconto = (custo*0.04);
      valorFinal = custo-desconto;
      printf("O valor inicial era de: %.2f e o valor final com desconto de 4 porcento é: %.2f", custo,valorFinal);
    }
     if(litros > 20)
    {
      desconto = (custo*0.06);
      valorFinal = custo-desconto;
      printf("O valor inicial era de: %.2f e o valor final com desconto de 6 porcento é: %.2f", custo,valorFinal);
    }
  }else {
    printf("Parametro invalido");
  }
  
  return 0;
}