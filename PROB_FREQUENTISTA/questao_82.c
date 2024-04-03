// 82) Uma urna contém duas bolas brancas e duas pretas. As bolas são retiradas ao acaso, sucessivamente e sem reposição.
// a) Qual é a probabilidade de sair uma bola preta na primeira retirada?
// b) Qual é a probabilidade de que a primeira bola preta apareça somente na quarta retirada?
// c) Qual é a probabilidade de que a segunda bola preta apareça logo na segunda retirada?
// d) Qual é a probabilidade de que a segunda bola preta apareça somente na quarta retirada?

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int quantidade_simulacoes = 1000000;
    int preta_primeira_retirada = 0;
    int preta_segunda_retirada = 0;
    int segunda_preta_segunda_retirada = 0;
    int segunda_preta_quarta_retirada = 0;
    float contagem_a = 0;
    float contagem_b = 0;
    float contagem_c = 0;
    float contagem_d = 0;
    srand(time(0)); // Inicia o gerador de números aleatórios com o tempo atual

    for (int i = 0; i < quantidade_simulacoes; i++)
    {
        int urna[4] = {1, 1, 0, 0};    //  1 = bola preta e 0 = bola branca
        int quantidade_bolas_urna = 4; // numero total de bolas na urna.
        int quantidade_retiradas[4];   // criei um array para armazenar cada bola retirada em cada rodada.

        for (int x = 0; x < 4; x++)
        {
            int bola_retirada = rand() % quantidade_bolas_urna;
            quantidade_retiradas[x] = urna[bola_retirada];
            urna[bola_retirada] = urna[quantidade_bolas_urna - 1];
            quantidade_bolas_urna--;
        }

        if (quantidade_retiradas[0] == 1)
        {
            contagem_a++; // quantas vezes a primeira bola retirada é preta.
        }
        if (quantidade_retiradas[0] == 0 && quantidade_retiradas[1] == 0 && quantidade_retiradas[2] == 0 && quantidade_retiradas[3] == 1)
        {
            contagem_b++; // verifica a probabilidade de cair a BBBP.
        }
        if (quantidade_retiradas[0] == 1 && quantidade_retiradas[1] == 1)
        {
            contagem_c++; // prob da segunda bola ser preta.
        }
        if ((quantidade_retiradas[0] == 0 && quantidade_retiradas[1] == 0 && quantidade_retiradas[2] == 1 && quantidade_retiradas[3] == 1) ||
            (quantidade_retiradas[0] == 0 && quantidade_retiradas[1] == 1 && quantidade_retiradas[2] == 0 && quantidade_retiradas[3] == 1) ||
            (quantidade_retiradas[0] == 1 && quantidade_retiradas[1] == 0 && quantidade_retiradas[2] == 0 && quantidade_retiradas[3] == 1))
        {
            contagem_d++;
        }
    }

    float questao_a;
    float questao_b;
    float questao_c;
    float questao_d;

    questao_a = contagem_a / quantidade_simulacoes;
    printf("A probabilidade de sair uma bola preta na primeira retirada é de %f\n", questao_a);

    questao_b = contagem_b / quantidade_simulacoes;
    printf("A probabilidade de que a primeira bola preta apareça somente na quarta retirada é de %f\n", questao_b);

    questao_c = contagem_c / quantidade_simulacoes;
    printf("A probabilidade de que a segunda bola preta apareça logo na segunda retirada é de %f\n", questao_c);

    questao_d = contagem_d / quantidade_simulacoes;
    printf("A probabilidade de que a segunda bola preta apareça somente na quarta retirada é de %f\n", questao_d);

    return 0;
}