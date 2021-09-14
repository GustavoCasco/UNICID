#include <stdio.h>

int main(){
    int a,b;

    printf("Digite um numero: \n");
    scanf("%d",&a);

    printf("Digite um segundo numero: \n");
    scanf("%d",&b);

    if (a > b)
    {
        printf("A ordem crescente desses dois numeros é: %d, %d", b,a);
    }else
    {
        printf("A ordem crescente desses dois numeros é: %d,%d",a,b);
    }
    return 0; 
}