/*155) No Rio de Janeiro, na praia de Copacabana, na virada do ano ocorre uma das maiores queimas de fogos do mundo. Um certo artefato pirotécnico só pode ser acionado se estiver ocorrendo uma precipitação máaxima de chuva de 5mm por hora.
Dados históricos mostram que a probabilidade de chuva á meia noite na época do ano e na região é de 24%.
Duas estações meteorológicas emitem relatórios conflitantes sobre a previsão do tempo para o momento da virada no Rio de Janeiro.
I) A estação I, que acerta 90% das vezes afirma que haverá precipitação de chuva maior do que 5mm por hora á meia noite.
II) A estação II, que acerta 92% das vezes afirma que não haverá chuva a meia noite.
Qual a probabilidade de ocorrência de chuva, considerando que as previsões das estações são independentes, para o momento da virada no
Rio de Janeiro?*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int quantidade_simulacoes = 100000;
    int contador_ocorrencia_chuva = 0; // conta o num de vezes que ocorreu chuva nas simulações realizadas
    float prob_chuva = 0.24;
    float prob_chuva_estacao_I = 0.90;
    float prob__nao_chove_estacao_I = 0.10;
    float prob_nao_chove_estacao_II = 0.92;
    float resultado;
    srand(time(0));

    for (int i = 0; i < quantidade_simulacoes; i++)
    {
        if ((float)rand() / RAND_MAX < prob_chuva_estacao_I)
        {
            if ((float)rand() / RAND_MAX < prob_chuva)
            {
                contador_ocorrencia_chuva++;
            }
        }
        else
        {
            if ((float)rand() / RAND_MAX < prob_nao_chove_estacao_II)
            {
                if ((float)rand() / RAND_MAX < prob_chuva)
                {
                    contador_ocorrencia_chuva++;
                }
            }
        }
    }

    resultado = (float)contador_ocorrencia_chuva / quantidade_simulacoes;

    printf("A probabilidade de ocorrência de chuva, considerando que as previsões das estações são independentes, para o momento da virada no Rio de Janeiro é de %f\n", resultado);

    return 0;
}