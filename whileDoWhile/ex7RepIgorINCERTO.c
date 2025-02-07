/*Faça um programa que leia um número inicial A, um  valor de incremento 
I e o número de incrementos B e  após mostre B 
números de I em I começando em A.  */
#include <stdio.h>

int main(){

    int a, b, i, cont = 0;

    printf("digite um numero para comecar a contagem:\n");
    scanf("%d", &a);

    printf("digite um numero para acabar a contagem:\n");
    scanf("%d", &b);
    
    printf("digite um numero para ser somado a contagem\n");
    scanf("%d", &i);    
    
    printf("---------------------------\n");
    
    while(cont <= b){
        printf("%d\n", a);
        a += i;
        cont++;
        
    }
}