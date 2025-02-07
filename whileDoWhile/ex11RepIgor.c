/*Faça um programa no qual o usuários insira valores 
numéricos positivos até digitar -1 e ao final diga  quantos 
números foram digitados. 
*/

#include <stdio.h>

int main(){

    float i, n;

    do{
        printf("digite um numero:");
        scanf("%f", &n);
        i+=1;
    } while(n > -1);

    printf("foram digitados %.0f numeros", i);
}