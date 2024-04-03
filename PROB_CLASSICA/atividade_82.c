//Atividade_82
//Uma urna contem duas bolas brancas e duas pretas. As bolas sao retiradas ao acaso, sucessivamente e sem reposição.
//a) Qual é a probabilidade de sair uma bola preta na primeira retirada?
//b) Qual é a probabilidade de que a primeira bola preta apareça somente na quarta retirada?
//c) Qual é a probabilidade de que a segunda bola preta apareça logo na segunda retirada?
// d) Qual é a probabilidade de que a segunda bola preta apareça somente na quarta retirada?

#include <stdio.h>
#include <math.h>

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

    int urna_4_bolas = 4;
    int bolas_brancas = 2; 
    int bolas_pretas = 2;
       
//Questão a - Qual a probabilidade de cair 1 bola preta na primeira tentativa?
    float resultado_questao_a;

    urna_4_bolas = bolas_brancas + bolas_pretas;

    resultado_questao_a = (float) bolas_pretas/urna_4_bolas;

    printf("A probabilidade de cair 1 bola preta na primeira tentativa é de %.1f\n", resultado_questao_a);

 //Questão b - Qual é a probabilidade de que a primeira bola preta apareça somente na quarta retirada?
    float resultado_questao_b;

    resultado_questao_b = calcular_combinacao(2, 2)*calcular_combinacao(2,1)/calcular_combinacao(4,3);
    //resultado_questao_b = calcular_combinação de 2 bolas brancas com 2 bolas brancas 

    printf("A probabilidade de que a primeira bola preta apareça somente na quarta retirada é de %1.f\n", resultado_questao_b);

//Questão c - Qual é a probabilidade de que a segunda bola preta apareça logo na segunda retirada?
    float resultado_questao_c;

    resultado_questao_c = calcular_combinacao(2,2)/calcular_combinacao(4,2);

    printf("A probabilidade de que a segunda bola preta apareça logo na segunda retirada é de %f\n", resultado_questao_c);

//Questão d - Qual é a probabilidade de que a segunda bola preta apareça somente na quarta retirada?
    float resultado_questao_d;

    resultado_questao_d = calcular_combinacao(3,2)/calcular_combinacao(4,2);

    printf("A probabilidade de que a segunda bola preta apareça somente na quarta retirada é de %f\n", resultado_questao_d);
      
   return 0;    
}