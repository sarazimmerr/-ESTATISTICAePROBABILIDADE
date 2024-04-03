/*Um jogo de computador requer que um jogador encontre abrigo seguro em um local onde seus inimigos não podem entrar.
Quatro portas aparecem para o jogador, a partir do qual ele deve escolher entre uma e apenas uma. O jogador deve então fazer
uma segunda escolha entre dois, quatro, um ou cinco buracos para descer, respectivamente, dependendo de qual porta ela atravessa.
Em cada caso, apenas um buraco leva ao refúgio seguro. O jogador é apressado em tomar uma decisão e em sua pressa faz escolhas aleatoriamente.
Qual é a probabilidade de ter chegado com segurança ao refúgio?*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int quantidade_simulacoes = 1000000;
    float quantidade_chegadas_seguras = 0;
    int porta_escolhida = 0;
    int buraco_escolhido = 0;
    float prob_chegada_segura;
    srand(time(0));

    for (int i = 0; i < quantidade_simulacoes; i++)
    {
        porta_escolhida = rand() % 4 + 1;

        // escolher o buraco
        if (porta_escolhida == 1)
        {
            buraco_escolhido = rand() % 2 + 1;
        }
        else if (porta_escolhida == 2)
        {
            buraco_escolhido = rand() % 4 + 1;
        }
        else if (porta_escolhida == 3)
        {
            buraco_escolhido = 1;
        }
        else
        {
            buraco_escolhido = rand() % 5 + 1;
        }

        if (buraco_escolhido == 1)
        {
            quantidade_chegadas_seguras++;
        }
    }

    prob_chegada_segura = quantidade_chegadas_seguras / quantidade_simulacoes;
    printf("A probabilidade de ter chegado com segurança ao refúgio é de %f\n", prob_chegada_segura);

    return 0;
}
