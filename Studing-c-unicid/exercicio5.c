#include <stdio.h>

int main(){
    float salarioatual,salariofinal;

    printf("Digite o seu salario atual: \n");
    scanf("%f",&salarioatual);

    if (salarioatual <= 2000)
    {

        salariofinal = salarioatual+(0.5*salarioatual);
        printf("O seu salario vai receber um reajuste de 50 porcento e o valor final é de: %.2f", salariofinal);
    
    }else if (salarioatual > 2000 && salarioatual < 5000)
    {

        salariofinal = salarioatual+(0.2*salarioatual);
        printf("O seu salario vai receber um reajuste de 20 porcento e o valor final é de: %.2f", salariofinal);
    
    }else {

        salariofinal = salarioatual+(0.1*salarioatual);
        printf("O seu salario vai receber um reajuste de 10 porcento e o valor final é de: %.2f", salariofinal);

    }
    return 0; 
}