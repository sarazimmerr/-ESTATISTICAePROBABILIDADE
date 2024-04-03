//No Rio de Janeiro, na praia de Copacabana, na virada do ano ocorre uma das maiores queimas de fogos do mundo.
// Um certo artefato pirotécnico só pode ser acionado se estiver ocorrendo uma precipitação máxima de chuva de
//5mm por hora. Dados históricos mostram que a probabilidade de chuva á meia noite na epoca do ano e na região 
//é de 24%. Duas estações meteorológicas emitem relatórios conflitantes sobre a previsão do tempo para o momento
// da virada no Rio de Janeiro.
//I)A estação I, que acerta 90% das vezes afirma que haverá precipitação de chuva maior do que 5mm por hora a 00:00.
//II) A estação II, que acerta 92% das vezes afirma que não haverá chuva á 00:00.

//Pergunta: Qual a probabilidade de ocorrência de chuva, considerando que as previsões das estações são
//independentes, para o momento da virada no Rio de Janeiro?

#include <stdio.h>

int main(){

    float I_preverChuva_dadoQue_chova = 0.90; //P(A|C)
    float II_preverNaoChuva_dadoQue_chova = 0.08; //P(B/C) - 0,08 porque errou
    float probabilidade_chova_virada = 0.24; //P(C) - Dado no enunciado
    float prob_A_acertar = 0.90; 
    float prob_B_acertar = 0.92;
    float prob_chova_dado_A_acertou; //P(C|A)
    float prob_chova_dado_B_acertou; //P(C|B)
    float prob_chuva_resultado;

    prob_chova_dado_A_acertou = (I_preverChuva_dadoQue_chova*probabilidade_chova_virada)/prob_A_acertar;

    prob_chova_dado_B_acertou = (II_preverNaoChuva_dadoQue_chova*probabilidade_chova_virada)/prob_B_acertar;

    prob_chuva_resultado = prob_chova_dado_A_acertou*prob_A_acertar + prob_chova_dado_B_acertou*prob_B_acertar;

    printf("A probabilidade de ocorrência de chuva, considerando que as previsões das estações são independentes, para o momento da virada no Rio de Janeiro é de %f\n", prob_chuva_resultado);

    return 0;
}   
