/* Escreva um programa que leia uma série de números inteiros 
e os passe, um de cada vez, à função chamada par, 
que determina se um inteiro é par ou ímpar. 
A função deverá usar um argumento inteiro e retornar 1 
se o inteiro for par, e retornar 0 se o inteiro for ímpar. */

#include <stdio.h>

int par(int a);

int main(){
    int a;

    do{
        printf("Digite para descobrir se e par ou impar(0 finalizar):");
        scanf("%d", &a);
        par(a);
    }while(a != 0);

}

int par(int a){
    if(a % 2 ==0){
       printf("\no numero %d e par\n", a);
        return 1;
    } else{
        printf("\no numero %d nao e par\n", a);
        return 0;
    }
}


