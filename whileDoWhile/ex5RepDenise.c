/*Faça um programa que calcule o fatorial de um número N inteiro.*/

#include <stdio.h>

int main(){

    int n,  i = 0, fatorial;

    printf("digite um numero para calcular seu fatorial:");
    scanf("%d", &n);

    fatorial = n;

    while(i < fatorial){
        i++;
            if(i >= fatorial ) {
                break;
        } else {
            n = n * i;
            printf("%d\n", n);
        }

    }

    printf("o fatorial e %d\n", n);
    printf("%d", i);
}