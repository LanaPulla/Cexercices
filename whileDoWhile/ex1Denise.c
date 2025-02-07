/*Faça um programa que leia um número N e
 mostre na tela todos os números de 0 a N.*/

 #include <stdio.h>

 int main(){

    int i = 0;
    int j = 0;

    printf("digite um numero:\n");
    scanf("%d", &j);

    while(i <= j){
        printf("%d\n", i);
        i++;
    }

 }