/* Dado um número, diga se este número é primo ou não. */

#include <stdio.h>
#include <string.h>

int main(){

    int n;
    char resp[]= "s";
    char resp2[5];

    do{
        printf("digite um numero para saber se ele e primo:");
        scanf("%d", &n);
        
        if(n == 2){
            printf("o numero %d e primo\n", n);
        } 
        else if(n % 2 != 0){
            printf("o numero %d e primo\n", n);
        } 
        else{
            printf("o numero %d nao e primo\n", n);
        }

        printf("quer saber outro numero(s/n):");
        scanf("%s", resp2);

    }while(strcmp(resp, resp2) == 0);

}