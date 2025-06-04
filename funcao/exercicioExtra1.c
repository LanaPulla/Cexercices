/*Crie uma função que receba como parâmetro um valor inteiro e 
gere como saída n linhas com pontos de exclamação, 
conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!! 
*/

#include <stdio.h>

void exclamacao(int a);

int main(){

    int a;

    printf("digite um numero inteiro:");
    scanf("%d", &a);

    exclamacao(a);
}

void exclamacao(int a){
    int x, y; 

    for(x=0;x<a;x++){
        for(y=0;y<x+1;y++){
            printf("!");
    }
        printf("\n");
    }
}
