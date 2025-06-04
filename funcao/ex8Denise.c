/*Faça um programa que leia dois vetores, 
um de 5 e outro de 10 elementos, após gere 
um vetor de 15 elementos, resultado da união 
destes dois, utilizando funções. */

#include <stdio.h>

void vetor1(int vet[5]);
void vetor2(int vet2[2]);
void vetor12(int vet[5], int vet2[2]);

int main(){
    int vet[5], vet2[2];

    vetor1(vet);
    vetor2(vet2);
    vetor12(vet,vet2);

}

void vetor1(int vet[5]){
    int x;

    for(x=0;x<5;x++){
        printf("Digite 5 valores:");
        scanf("%d", &vet[x]);
    } 
    printf("\nVET1\n");

    for(x=0;x<5;x++){
        printf("%d\n", vet[x]);
    }
   
}

void vetor2(int vet2[2]){
    int x;

    for(x=0;x<2;x++){
        printf("\nDigite 2 valores:");
        scanf("%d", &vet2[x]);
    } 
    printf("\nVET2\n");
    for(x=0;x<2;x++){
        printf("%d\n", vet2[x]);
    }
   
}

void vetor12( int vet[5], int vet2[2]){
    int vet12[7]={0}, x, j;
    
    for(x=0;x<5;x++){
        vet12[x]=vet[x];
    }
    for(j=0;j<2;j++){
        vet12[j+5]=vet2[j];
    }
   
    printf("\nVET12\n");
    for(x=0;x<7;x++){
        printf("%d \n", vet12[x]);
    }
}
