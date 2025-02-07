/*Faça um programa no qual o usuário insira valores  
numéricos positivos até digitar -1 e ao final o diga o 
 somatório dos valores digitados. */

 #include <stdio.h>

 int main(){

    float n = 0, soma = 0; 

    do{
        printf("digite um numero para ir somando(-1 para parar):");
        scanf("%f", &n);
        soma+=n;

    } while(n != -1);

     
    printf("soma dos valores: %.2f", soma+1);
    return 0;

 }