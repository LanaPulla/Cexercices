/*Ler vários números até obter o 
finalizador 0. 
Indicar  quantos números quadrados
perfeitos (que tem raiz  quadrada inteira) 
foram lidos. */

#include <stdio.h>
#include <math.h>

int main(){

    int i = 0;
    int raiz;
    int n;


    do {

        printf("digite um numero:(0 para parar)");
        scanf("%d", &n);

        if(n != 0){
            raiz = sqrt(n);
            if( raiz * raiz == n){
                i++;
            }
        }

    } while(n != 0);

    printf("foram digitados %d numeros com raiz quadrada exata", i);
}