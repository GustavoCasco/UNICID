#include <stdio.h>

int main(){
    float salario,gastos;
    printf("Digite o valor do seu salário: \n");
    scanf("%f",&salario);

    printf("Digite o valor do seu gastos: \n");
    scanf("%f",&gastos);

    if (gastos > salario)
    {
        printf("Orçamento estourado");
    }else
    {
        printf("Gastos dentro do orçamento");
    }
    return 0;
}