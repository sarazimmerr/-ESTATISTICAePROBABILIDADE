//A linha de produção de uma fábrica gera 8% de peças defeituosas. 
//Uma peça defeituosa é rejeitada pelo sistema de controle de qualidade da fábrica em 98% dos casos e 
//uma peça não defeituosa é rejeitada em 3% dos casos.

//a) Qual a probabilidade de uma peça defeituosa passar no sistema de controle?
//b) Qual é a probabilidade de uma peça ser rejeitada por este sistema de controle?
//c) No conjunto das peças rejeitadas por este sistema de controle, qual a probabilidade de uma 
//peça ser de fato defeituosa?


#include <stdio.h>

float probabilidade(float eventos_escolhidos, float eventos_possiveis){
    float resultado_probabilidade; 

    resultado_probabilidade = eventos_escolhidos/eventos_possiveis; 

    return resultado_probabilidade;
}

int main (){
    float quantidade_pecas_total = 100.0/100.0;
    float quantidade_pecas_defeituosas = 8.0/100.0;
    float quantidade_pecas_corretas = 92.0/100.0;
    float defeituosas_rejeitada = 98.0/100.0;
    float naodefeituosas_rejeitada = 3.0/100.0;

//Questão a - Qual a probabilidade de uma peça defeituosa passar no sistema de controle?

    float defeito_passar;

    defeito_passar = 1.0 - defeituosas_rejeitada;

    printf("A probabilidade de uma peça defeituosa passar no sistema de controle é de %f\n", defeito_passar);

//Questão b - Qual é a probabilidade de uma peça ser rejeitada por este sistema de controle?

    float rejeitada_pelo_sistema;

    rejeitada_pelo_sistema = (quantidade_pecas_defeituosas*defeituosas_rejeitada)+(quantidade_pecas_corretas*naodefeituosas_rejeitada);

    printf("A probabilidade de uma peça ser rejeitada por este sistema de controle é de %f\n", rejeitada_pelo_sistema);

//Questão c - No conjunto das peças rejeitadas por este sistema de controle, qual a probabilidade de uma peça ser de fato defeituosa?

    float fato_defeituosa;

    fato_defeituosa = (quantidade_pecas_defeituosas*defeituosas_rejeitada)/rejeitada_pelo_sistema;

    printf("A probabilidade de uma peça ser de fato defeituosa é de %f\n", fato_defeituosa);

    return 0;
}