
// 3) Estrelas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, diferenca, numTentativas;

    srand(time(NULL));
    int numRandom = (rand() % 97) + 32;

    printf("Digite Entre com um valor entre 32 e 128: ");
    scanf("%i", &numero);

    if (numero < 32 || numero > 128)
    {
        printf("Intervalo de numeros incorreto.\n");
        printf("Digite Entre com um valor entre 32 e 128: ");
        scanf("%i", &numero);
    }

    while (numero < 32 || numero > 128)
    {
        printf("Intervalo de numeros incorreto.\n");
        printf("Digite Entre com um valor entre 32 e 128: ");
        scanf("%i", &numero);
    }

    numTentativas = 0;

    if (numero > numRandom)
    {
        diferenca = numero - numRandom;
    }
    else
    {
        diferenca = numRandom - numero;
    }

    if (diferenca == 0)
    {
        numTentativas++;
        printf("Vencedor após %i tentativas", numTentativas);
        return 0;
    }
    else if (diferenca == 1)
    {
        printf("*******\n");
    }
    else if (diferenca >= 64)
    {
        printf("*\n");
    }
    else if (diferenca >= 32)
    {
        printf("**\n");
    }
    else if (diferenca >= 16)
    {
        printf("***\n");
    }
    else if (diferenca >= 8)
    {
        printf("****\n");
    }
    else if (diferenca >= 4)
    {
        printf("*****\n");
    }
    else if (diferenca >= 2)
    {
        printf("******\n");
    }

    numTentativas++;

    while (diferenca != 0)
    {
        printf("Digite Entre com um valor entre 32 e 128: ");
        scanf("%i", &numero);

        while (numero < 32 || numero > 128)
        {
            printf("Intervalo de numeros incorreto.\n");
            printf("Digite Entre com um valor entre 32 e 128: ");
            scanf("%i", &numero);
        }

        if (numero > numRandom)
        {
            diferenca = numero - numRandom;
        }
        else
        {
            diferenca = numRandom - numero;
        }

        if (diferenca == 0)
        {
            numTentativas++;
            printf("Vencedor após %i tentativas", numTentativas);
            return 0;
        }
        else if (diferenca == 1)
        {
            printf("*******\n");
        }
        else if (diferenca >= 64)
        {
            printf("*\n");
        }
        else if (diferenca >= 32)
        {
            printf("**\n");
        }
        else if (diferenca >= 16)
        {
            printf("***\n");
        }
        else if (diferenca >= 8)
        {
            printf("****\n");
        }
        else if (diferenca >= 4)
        {
            printf("*****\n");
        }
        else if (diferenca >= 2)
        {
            printf("******\n");
        }

        numTentativas++;
    }

    return 0;
}
