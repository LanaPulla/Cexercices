/*Faça um programa que leia um número não  determinado de pares de 
valores [M,N], todos inteiros  e positivos, um par de cada vez, e que calcule 
e mostre  a soma de todos os números inteiros de M até N 
(inclusive). A digitação de pares terminará quando M 
for maior ou igual a N. 
*/

#include <stdio.h>
#include <string.h>

int main(){

    int n, m, soma;
    char resp[] = "s";
    char resp2[5];

    do{
        printf("digite um numero:\n");
        scanf("%d", &n);

        printf("digite mais um numero:\n");
        scanf("%d", &m);

        soma = n + m;

        printf("a soma dos numeros e: %d\n", soma);
        printf("quer continuar somando? (s/n)\n");
        scanf("%s", resp2);

    } while(strcmp( resp, resp2) == 0);

}