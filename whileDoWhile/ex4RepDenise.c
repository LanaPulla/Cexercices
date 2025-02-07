/*Faça um programa que leia um número não determinado 
de valores, calcule e mostre: a média aritmética dos
valores lidos; a quantidade de valores positivos; a 
quantidade de valores negativos e o percentual de valores
negativos e positivos. Use o zero (0) para sair.*/

#include <stdio.h>

int main(){

    float n, total, media, i = 0, pos, neg, totalPos, totalNeg, porcentoPos, porcentoNeg;

    do{
        printf("digite um valor:");
        scanf("%f", &n);
        printf("%f\n", n);

        total+=n;
        if(n != 0){
            i++;
        }
        if(n < 0){
            neg++;
            totalNeg+=n;
        }
        if(n > 0){
            pos++;
            totalPos+=n;
        }

    }while(n != 0);

    media = total / i;
    porcentoPos = (pos * 100) / i;
    porcentoNeg = (neg * 100) / i;

    printf("%.2f\n", total);
    printf("%.2f\n", i);

    printf("a media dos valores digitado e %.2f\n", media);
    printf("foram digitados %.2f valores positivos\n", pos);
    printf("foram digitados %.2f valores negativos\n", neg);
    printf("a porcentagem de valores positvos e %.2f\n", porcentoPos);
    printf("a porcentagem de valores negativos e %.2f\n", porcentoNeg);



}