/*114) A linha de produção de uma fábrica gera 8% de peças defeituosas. Uma peça defeituosa é rejeitada pelo sistema de controle
de qualidade da fábrica em 98% dos casos e uma peça não defeituosa é rejeitada em 3% dos casos.
a) Qual a probabilidade de uma peça defeituosa passar no sistema de controle?
b) Qual é a probabilidade de uma peça ser rejeitada por este sistema de controle?
c) No conjunto das peças rejeitadas por este sistema de controle, qual a probabilidade de uma peça ser de fato defeituosa?*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int quantidade_simulacoes = 10000000;
    float pecas_defeituosas = 0.08;
    float defeituosas_rejeitadas = 0.98;
    float perfeitas_rejeitadas = 0.03;
    float numero_defeituosa_passar = 0;
    float numero_rejeitadas = 0;
    float prob_rejeitada;
    float pro_defeituosos_rejeitadas;
    float prob_defeito_passar;
    srand(time(0));

    // Questão A - Qual a probabilidade de uma peça defeituosa passar no sistema de controle?

    for (int i = 0; i < quantidade_simulacoes; i++)
    {
        if ((float)rand() / RAND_MAX > defeituosas_rejeitadas)
        { // cria um numero aleatorio entre 0 e 1
            numero_defeituosa_passar++;
        }
    }

    prob_defeito_passar = numero_defeituosa_passar / quantidade_simulacoes;
    printf("A probabilidade de uma peça defeituosa passar no sistema de controle é de %f\n", prob_defeito_passar);

    // Questão B - Qual é a probabilidade de uma peça ser rejeitada por este sistema de controle?

    for (int i = 0; i < quantidade_simulacoes; i++)
    {
        if ((float)rand() / RAND_MAX < pecas_defeituosas * defeituosas_rejeitadas)
        { // prob da peça defeituosa ser rejeitada
            numero_rejeitadas++;
        }
        else
        {
            if ((float)rand() / RAND_MAX < perfeitas_rejeitadas)
            {
                numero_rejeitadas++;
            }
        }
    }

    prob_rejeitada = numero_rejeitadas / quantidade_simulacoes;
    printf("A probabilidade de uma peça ser rejeitada por este sistema de controle é de %f\n", prob_rejeitada);

    // Questão C - No conjunto das peças rejeitadas por este sistema de controle, qual a probabilidade de uma peça ser de fato defeituosa?

    pro_defeituosos_rejeitadas = (pecas_defeituosas * defeituosas_rejeitadas) / prob_rejeitada;

    printf("A probabilidade de uma peça ser de fato defeituosa é de %f\n", pro_defeituosos_rejeitadas);

    return 0;
}
