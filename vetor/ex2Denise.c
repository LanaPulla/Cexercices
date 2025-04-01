/*Crie um programa que leia um vetor de 10
 posições e depois apresente este vetor em ordem inversa na tela. */

#include <stdio.h>

int main(){

    int vet[10], x;

    for(x=0;x<10;x++){

        printf("digite um numero:");
        scanf("%d", &vet[x]);

    }
    
    printf("\nVetor em ordem inversa:\n");
    for(x=9;x>= 0;x--){
        printf("%d ", vet[x]);
    }

    return 0;
}