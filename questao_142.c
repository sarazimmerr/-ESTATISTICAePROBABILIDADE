/*142) O produtor de certo tipo de componente eletrônico despacha os produtos para seus clientes em lotes de 20.
Suponha que 60% de todos os lotes enviados nao contenham componentes com defeitos, 30% contenham um componente
com defeito e 10% contenham dois componentes com defeito. Um lote é selecionado e dois componentes deste lote são escolhidos
aleatoriamente e testados, e nenhum deles apresenta defeitos.
a) Qual é a probabilidade de que exista zero componentes com defeito neste lote?
b) Qual é a probabilidade de que exista um componente com defeito neste lote?
c) Qual é a probabilidade de que existam dois componentes com defeito neste lote?*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int quantidade_simulacoes = 10000000;
    float prob_sem_defeitos = 0.60;
    float prob_1_defeito = 0.30;
    float prob_2_defeitos = 0.10;
    float prob_lote = 0;
    int contador_sem_defeito = 0;
    int contador_1_defeito = 0;
    int contador_2_defeitos = 0;
    int num_defeitos = 0;
    float prob_sem_defeito_resultado;
    float prob_1_defeito_resultado;
    float prob_2_defeitos_resultado;
    srand(time(0));

    for (int i = 0; i < quantidade_simulacoes; i++)
    {
        prob_lote = (float)rand() / RAND_MAX; // prob de um lote sair com um determinado número de componentes defeituosos

        if (prob_lote < prob_sem_defeitos)
        {
            num_defeitos = 0; // num de lotes sem defeito
        }
        else if (prob_lote < prob_sem_defeitos + prob_1_defeito)
        {
            num_defeitos = 1; // num de lotes com 1 defeito
        }
        else
        {
            num_defeitos = 2; // num de lotes com 2 defeitos
        }

        // atualizar os contadores de acordo com o número de defeito
        if (num_defeitos == 0)
        {
            contador_sem_defeito++;
        }
        else if (num_defeitos == 1)
        {
            contador_1_defeito++;
        }
        else
        {
            contador_2_defeitos++;
        }
    }

    // Questão A
    prob_sem_defeito_resultado = (float)contador_sem_defeito / quantidade_simulacoes;

    printf("A probabilidade de que exista zero componentes com defeito neste lote é de %f\n", prob_sem_defeito_resultado);

    // Questão B
    prob_1_defeito_resultado = (float)contador_1_defeito / quantidade_simulacoes;

    printf("A probabilidade de que exista um componente com defeito neste lote é de %f\n", prob_1_defeito_resultado);

    // Questão C
    prob_2_defeitos_resultado = (float)contador_2_defeitos / quantidade_simulacoes;

    printf("A probabilidade de que existam dois componentes com defeito neste lote é de %f\n", prob_2_defeitos_resultado);

    return 0;
}