/*Escreva um algoritmo que receba um número e imprima uma das mensagens: 
“é múltiplo de 3” ou “não é múltiplo de 3”. */

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float numero, divisao;

    printf("digite um numero:\n");
    scanf("%f", &numero);


    if((int)numero % 3 == 0){
        printf("o numero %f e divisivel por 3", numero);
    } else{
        printf("o numero %f nao e divisivel por 3 e resulta em %f", numero);

    }

}