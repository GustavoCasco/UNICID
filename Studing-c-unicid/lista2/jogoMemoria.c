#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    srand(time(NULL));
    int numeroRandom1, numeroRandom2, numeroRandom3, numeroRandom4;
    int numero1, numero2, numero3, numero4;
    int acertos = 0;
    int vidas = 3;

    while (vidas > 0)
    {
        acertos = 0;
        numeroRandom1 = rand() % 51;
        numeroRandom2 = rand() % 51;
        numeroRandom3 = rand() % 51;
        numeroRandom4 = rand() % 51;

        system("clear");

        printf("Memorize os numeros.....");
        printf("\n%d \t %d \t %d \t %d", numeroRandom1, numeroRandom2, numeroRandom3, numeroRandom4);
        printf("\n");

        sleep(5);

        system("clear");

        printf("\nDigite os números apresentados na sequência correta\n\n");
        printf("Digite o 1º número: ");
        scanf("%d", &numero1);
        printf("Digite o 2º número: ");
        scanf("%d", &numero2);
        printf("Digite o 3º número: ");
        scanf("%d", &numero3);
        printf("Digite o 4º número: ");
        scanf("%d", &numero4);
        if (numeroRandom1 == numero1)
            acertos++;
        if (numeroRandom2 == numero2)
            acertos++;
        if (numeroRandom3 == numero3)
            acertos++;
        if (numeroRandom4 == numero4)
            acertos++;

        if (acertos == 1)
        {
            vidas = vidas - 1;
            printf("Voce acertou so um número e perdeu 1 vida\n");
            printf("Agora, vc tem %d vidas \n", vidas);
            printf("Pressione uma tecla para continuar\n");
            getchar();
            getchar();
        }
        else if (acertos == 2)
        {
            printf("Voce acertou dois números e nao perdeu e nem ganhou vida\n");
            printf("Agora, vc tem %d vidas \n", vidas);
            printf("Pressione uma tecla para continuar\n");
            getchar();
            getchar();
        }
        else if (acertos == 3)
        {
            vidas = vidas + 1;
            printf("Voce acertou tres números e ganhou 1 vida\n");
            printf("Agora, vc tem %d vidas \n", vidas);
            printf("Pressione uma tecla para continuar\n");
            getchar();
            getchar();
        }
        else if (acertos == 4)
        {
            vidas = vidas + 2;
            printf("Voce acertou todos os números e ganhou 2 vidas\n");
            printf("Agora, vc tem %d vidas \n", vidas);
            printf("Pressione uma tecla para continuar\n");
            getchar();
            getchar();
        }
        else
        {
            vidas = 0;
            printf("Voce errou todos os números e perdeu todas as suas vidas\n");
            printf("GAME OVER \n");
            printf("\nPressione uma tecla para continuar\n");
            getchar();
            getchar();
        }
    }

    return 0;
}