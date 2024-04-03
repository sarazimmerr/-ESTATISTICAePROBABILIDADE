//O produtor de certo tipo de componente eletrônico despacha os produtos para seus clientes em lotes de 20. 
//Suponha que 60% de todos os lotes enviados não contenham componentes com defeitos, 
//30% contenham um componente com defeito e 10% contenham dois componentes com defeito. 
//Um lote é selecionado e dois componentes deste lote são escolhidos aleatoriamente e testados, e nenhum deles apresenta defeitos.
//a) Qual é a probabilidade de que exista zero componente com defeito neste lote?
//b) Qual é a probabilidade de que exista um componente com defeito neste lote?
//c) Qual é a probabilidade de que existam dois componentes com defeito neste lote?


#include <stdio.h>

float calcular_fatorial(float numero){
    float resultado = 1; 
    
    if(numero < 0){
    return printf("Erro, não pode ser um número menor que 0.");
    }

    for(int i = numero; i >= 1; --i){
        resultado = resultado*i; 
    }
    return resultado; 
}

float calcular_combinacao(int numero_total_conjunto, int numero_elementos_escolhidos){
    float resultado_combinacao;

    resultado_combinacao =  calcular_fatorial(numero_total_conjunto)/(calcular_fatorial(numero_elementos_escolhidos)*calcular_fatorial(numero_total_conjunto - numero_elementos_escolhidos));

    return resultado_combinacao;
}


int main (){

    int total_produtos_lote = 20;
    float contem_1_defeito = 0.3;
    float contem_2_defeitos = 0.1;
    float produto_perfeito = 0.6;
    float prob_zero_defeito;
    float prob_defeito_lote; 
    float eventos_escolhidos;
    float x_igual_0_dado_que_D_igual_0;
    float x_igual_1_dado_que_D_igual_0;
    float x_igual_2_dado_que_D_igual_0;
    float questao_a;
    float questao_b;
    float questao_c;
    

//Questão A - Qual é a probabilidade de que exista zero componente com defeito neste lote?
    x_igual_0_dado_que_D_igual_0 = 1;

    x_igual_1_dado_que_D_igual_0 = calcular_combinacao(19,2)/calcular_combinacao(20,2);
    
    x_igual_2_dado_que_D_igual_0 = calcular_combinacao(18,2)/calcular_combinacao(20,2);

   questao_a = x_igual_0_dado_que_D_igual_0*produto_perfeito + x_igual_1_dado_que_D_igual_0*contem_1_defeito + x_igual_2_dado_que_D_igual_0*contem_2_defeitos;

    printf("A probabilidade de que exista zero componente com defeito neste lote é de %f\n", questao_a);

//Questão B - Qual é a probabilidade de que exista um componente com defeito neste lote?
    questao_b = (x_igual_1_dado_que_D_igual_0*contem_1_defeito)/questao_a;

    printf("A probabilidade de que exista um componente com defeito neste lote é de %f\n", questao_b);

//Questão C - Qual é a probabilidade de que existam dois componentes com defeito neste lote?
    questao_c = (x_igual_2_dado_que_D_igual_0*contem_2_defeitos)/questao_a;

    printf("A probabilidade de que existam dois componentes com defeito neste lote é de %f\n", questao_c);

   return 0;
}