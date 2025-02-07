/*Faça um programa que leia dois números 
M e N e  mostre todos os 
números divisíveis por 3 do intervalo. */
#include <stdio.h>

int main(){

    int m, n, tres;
    
    printf("digite um numero para comecar a contagem:");
    scanf("%d", &m);
 
    printf("digite um numero para acabar a contagem:");
    scanf("%d", &n);

    while(m <= n){
        tres = m++;
        if(tres % 3 == 0){
            printf("%d\n", tres);
        }
    }

}