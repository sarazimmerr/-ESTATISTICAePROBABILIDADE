//Um jogo de computador requer que um jogador encontre abrigo seguro em um local onde seus inimigos nao podem entrar. 
//Quatro portas aparecem para o jogador, a partir do qual ele deve escolher entre uma e apenas uma.
// O jogador deve então fazer uma segunda escolha entre dois, quatro, um ou cinco buracos para descer, respectivamente, 
//dependendo de qual porta ele atravessa.
//Em cada caso, apenas um buraco leva ao refúgio seguro. O jogador é apressado em tomar uma decisão e em sua pressa faz escolhas aleatoriamente.
//Qual é a probabilidade de ter chegado com segurança ao refúgio?

#include <stdio.h>

float probabilidade(float eventos_escolhidos, float eventos_possiveis){
    float resultado_probabilidade; 

    resultado_probabilidade = eventos_escolhidos/eventos_possiveis; 

    return resultado_probabilidade;
}

int main(){
    float numero_portas = 4; 
    float numero_buracos_p1 = 2;
    float numero_buracos_p2 = 4; 
    float numero_buracos_p3 = 1;
    float numero_buracos_p4 = 5; 
    float escolha_porta;
    float resultado;

    escolha_porta = probabilidade(1, numero_portas);

    printf("Vamos iniciar com a probabilidade de escolha das portas que é: %f\n", escolha_porta);

    resultado = escolha_porta*probabilidade(1, numero_buracos_p1) + escolha_porta*probabilidade(1, numero_buracos_p2) + escolha_porta*probabilidade(1, numero_buracos_p3) + escolha_porta*probabilidade(1, numero_buracos_p4);

printf("A probabilidade de ter chegado com segurança ao refúgio é de %f\n", resultado);

    return 0; 
}