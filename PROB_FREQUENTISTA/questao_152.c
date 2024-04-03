/*152) Um dado é viciado de modo que um número par é duas vezes mais provável que um número ımpar. Encontre a probabilidade de que:
a) Um número par ocorra;
b) um número primo par ocorra em um lançamento;
c) um número primo ocorra.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[] = {1, 2, 2, 3, 4, 4, 5, 6, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Obtém o tamanho do vetor
    int quantidade_simulacoes = 1000000;
    int contador_par = 0;
    int contador_par_primo = 0;
    int contador_primo = 0;
    int resultado;
    float prob_par;
    float prob_par_primo;
    float prob_primo;
    srand(time(0));

    for (int i = 0; i < quantidade_simulacoes; i++)
    {
        int indice = rand() % tamanho;
        resultado = vetor[indice];

        if (resultado % 2 == 0)
        {
            contador_par++;

            if (resultado == 2)
            {
                contador_par_primo++;
                contador_primo++;
            }
        }
        else
        {
            if (resultado == 2 || resultado == 3 || resultado == 5)
            {
                contador_primo++;
            }
        }
    }

    // Questão A
    prob_par = (float)contador_par / quantidade_simulacoes;
    printf("A probabilidade que um número par ocorra é de %f\n", prob_par);

    // Questão B
    prob_par_primo = (float)contador_par_primo / quantidade_simulacoes;
    printf("A probabilidade de um número primo par ocorra em um lançamento é de %f\n", prob_par_primo);

    // Questão C
    prob_primo = (float)contador_primo / quantidade_simulacoes;
    printf("A probabilidade de que um número primo ocorra é de %f\n", prob_primo);

    return 0;
}