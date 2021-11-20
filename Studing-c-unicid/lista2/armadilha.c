
// 2) Armadilha
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int limInferior, limSuperior, numTentativas;

    srand(time(NULL));
    int numRandom = rand() % 101;

    printf("Digite o limite inferior: \n");
    scanf("%i", &limInferior);

    printf("Digite o limite superior: \n");
    scanf("%i", &limSuperior);

    numTentativas = 0;

    while (limInferior != numRandom && limSuperior != numRandom)
    {
        if (limInferior <= numRandom && limSuperior >= numRandom)
        {
            printf("Meu número está entre os seus \n");
        }
        else
        {
            printf("Meu número não está entre os seus \n");
        }

        printf("Digite o limite inferior: \n");
        scanf("%i", &limInferior);

        printf("Digite o limite superior: \n");
        scanf("%i", &limSuperior);

        numTentativas++;
    }

    printf("Você levou %i tentativas para acertar.", numTentativas);

    return 0;
}
