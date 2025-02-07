/* Faça um programa no qual o usuário insira valores 
numéricos positivos até digitar -1 e 
ao final informe  quantos números pares e quantos 
números impares  foram digitados. */

#include <stdio.h>
#include <string.h>

int main(){

    int n = 0, par = 0, impar = 0;

    do{
        printf("digite um numero(-1 para parar):");
        scanf("%d", &n);

        if(n % 2 == 0){
            par++;
        } else if (n > -1){
            impar++; 
        }

    } while(n > -1);

    printf("foram digitados %d numeros pares\n", par);
    printf("foram digitados %d numeros impares\n", impar);

}