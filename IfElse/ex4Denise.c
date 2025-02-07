/*Construa um programa que diga se um dado número
 N inteiro, 
recebido através do teclado, é PAR ou ÍMPAR.*/

#include <stdio.h>

int main(){

    int valor;

    printf("digite um valor para descobrir se ele e par ou impar:\n");
    scanf("%d", &valor);

    if( valor % 2 == 0){
        printf("o valor %d e par", valor);

    } else {
        printf("o valor %d e impar", valor);
    }

}