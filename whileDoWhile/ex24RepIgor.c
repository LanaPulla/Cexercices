/*Escrever um algoritmo que lê 5 valores para uma  
variável A, um de cada vez, e conta quantos destes 
valores são negativos, escrevendo esta informação*/

#include <stdio.h>

int main(){

    int neg = 0;
    int pos = 0;
    float valor;
    int i = 0;

    while(i < 5){
        i++;
        printf("digite um numero pos ou neg:");
        scanf("%f", &valor);

        if(valor < 0){
            neg++;
        } else{
            pos++;
        }
    }

    printf("voce digitou %d numeros neg\n", neg);
    printf("voce digitou %d numeros pos\n", pos);
   
}
