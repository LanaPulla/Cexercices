/*Faça um programa que leia dados para um vetor de 100 
elementos inteiros. Imprima o maior e o menor, 
sem ordenar, o percentual de pares e 
a média dos elementos do vetor. */

#include <stdio.h>

int main(){

    int vet[100], x, pares = 0, maior = 0, menor= 0, total = 0, percPares = 0, mediaVet = 0;
    
    for(x=0;x<100;x++){

        printf("digite um numero:");
        scanf("%d", &vet[x]);
        total+=vet[x];
    }
    maior = menor = vet[0];
    for(x=0;x<100;x++){

        if(x % 2 == 0){
            pares+=x;
        } 

        if (vet[x] > maior) {
            maior = vet[x];
        }
        
        if (vet[x] < menor) {
            menor = vet[x];
        }
    
    }

    percPares = (pares * 100) / total;

    mediaVet = total / 2;
    

    printf("\n%d maior\n", maior);
    printf("%d menor\n", menor);
    printf("%d porcento pares\n", percPares);
    printf("%d media vetor \n", mediaVet);



}