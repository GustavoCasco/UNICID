
// 1) Jokenpô
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int opcaoJogador;

    printf("Digite uma opcao  0 (pedra), 1 (papel) ou 2 (tesoura): \n");
    scanf("%d", &opcaoJogador);

    while (opcaoJogador > 2)
    {
        printf("Opção inválida\n");
        printf("Digite uma opcao  0 (pedra), 1 (papel) ou 2 (tesoura): \n");
        scanf("%d", &opcaoJogador);
    }
 
    srand(time(NULL));
    int opcaoAleatoria = rand() % 3;
    
    if (opcaoJogador == opcaoAleatoria)
    {
        printf("Empate! Ninguém ganhou");      
    }

    if (opcaoJogador == 0 && opcaoAleatoria == 1)
    {
        printf("Computador ganhou");
    }
    else if (opcaoJogador == 0 && opcaoAleatoria == 2)
    {
        printf("Jogador ganhou");
    }
    else if (opcaoJogador == 1 && opcaoAleatoria == 0)
    {
        printf("Jogador ganhou");
    }
    else if (opcaoJogador == 1 && opcaoAleatoria == 2)
    {
        printf("Computador ganhou");
    }
    else if (opcaoJogador == 2 && opcaoAleatoria == 0)
    {
        printf("Computador ganhou");
    }
    else if (opcaoJogador == 2 && opcaoAleatoria == 1)
    {
        printf("Jogador ganhou");
    }

    return 0;
}
