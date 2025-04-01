/*Faça um programa que leia um vetor de 
reais de 10 posições e 
apresente seus números na tela 
separados por espaços. */

#include <stdio.h>

int main(){

    int vet[10], x;

    for(x=0;x<10;x++){

        printf("digite um numero:");
        scanf("%d", &vet[x]);

    }

    for(x=0;x<10;x++){
        printf("%d ", vet[x]);
    }
}