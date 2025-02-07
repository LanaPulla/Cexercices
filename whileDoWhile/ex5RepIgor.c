/*Faça um programa que leia dois números M e N, 
 mostre todos os números pares de intervalo e ao final  diga 
a quantidade de números pares apresentados na  tela.  */
#include <stdio.h>

int main(){

    int M = 0;
    int N = 0;
    int i = 0;
    int par;
  
    printf("digite o menor numero:");
    scanf("%d", &M);

    printf("digite o maior numero:");
    scanf("%d", &N);  

    while(M <= N){
        par = M++;
        if(par % 2 != 0){
        printf("%d\n", par);
        i++;
        }
    }
    printf("tem %d numeros impares", i);
}