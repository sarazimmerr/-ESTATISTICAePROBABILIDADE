//Questão 152 - Um dado é viciado de modo que um número par é duas vezes mais provavel que um número ımpar. Encontre a probabilidade de que:
//a) Um número par ocorra;
//b) Um número primo par ocorra em um lançamento;
//c) Um número primo ocorra.

#include <stdio.h>

int main(){

  float probabilidade_numero_par;
  float probabilidade_numero_2;
  float probabilidade_numero_3;
  float probabilidade_numero_5;
  float numero_primo;

//Questão A - Um número par ocorra;
//1 dado tem 6 numero (1,2,3,4,5,6) desses 6 números 3 são pares e 3 são impares. 
  
    probabilidade_numero_par = 6.0/9.0;
    printf("A probabilidade de que um número par ocorra é de %f\n", probabilidade_numero_par);

   
//Questão B - Um número primo par ocorra em um lançamento;
//Números primos de um dado são apenas 2, 3 e 5; 

    probabilidade_numero_2 = 2.0/9.0;
    probabilidade_numero_3 = 1.0/9.0;
    probabilidade_numero_5 = 1.0/9.0;
    printf("A probabilidade de cair um número primo par em um lançamento é de %f\n", probabilidade_numero_2);
   
    
//Questão C - Um número primo ocorra.
//Números primos de um dado são apenas 2, 3 e 5; 
      
    numero_primo = probabilidade_numero_2 + probabilidade_numero_3 + probabilidade_numero_5;

 printf("A probabilidade de cair um número primo é de %f\n", numero_primo);

    return 0; 
}

