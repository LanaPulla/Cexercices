/*Faça um programa que leia N números 
(o usuário  deverá informar a quantidade de números que será  informada) 
e ao final diga qual o valor do 
maior e do  menor número digitado. */
#include <stdio.h>

int main(){

    int a, b = 0, i = 0, maior, menor;

    printf("digite a quantidade de vezes que quer utilizar:");
    scanf("%d", &a);
    
    while(i < a){
        printf("digite o numero:\n");
        scanf("%d", &b);
        
        if (i == 0) {
            maior = b;
            menor = b;
        } 
        if (b > maior) {
            maior = b;
            }
        if (b < menor) {
            menor = b;
            }
        i++;
    }
    
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);

}