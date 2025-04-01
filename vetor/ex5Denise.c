/*Crie um programa que leia um vetor de 30 números inteiros
e gere um segundo vetor cujas posições pares são 
o dobro do vetor original e as ímpares o triplo. */

#include <stdio.h>

int main(){

    int vet[5], vetTriDo[5], x;

    for(x=0;x<5;x++){

        printf("digite um numero:");
        scanf("%d", &vet[x]);

        if(vet[x] % 2 == 0){
            vetTriDo[x] = vet[x] * 2;
        } else{
            vetTriDo[x] = vet[x] * 3;
        }

    }


    printf("\nVETTRIDO\n");
    for(x=0;x<5;x++){
      
        printf("%d ", vetTriDo[x]);
       
    }

    printf("\nVET\n"); 
    for(x=0;x<5;x++){
      
        printf("%d ", vet[x]);
       
    }



}