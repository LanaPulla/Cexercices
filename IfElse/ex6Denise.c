/*Faça um programa que leia um número e imprima 
a raiz quadrada do número, caso ele seja positivo ou igual a
zero; e o quadrado do número, caso ele seja negativo.*/

#include <stdio.h>
#include <math.h>

int main (){
    
    float num, quadrado, raiz;

    printf("digite um numero:");
    scanf("%f", &num);
    fflush(stdin);

    if(num > 0){
        raiz = sqrt(num);
        printf("o numero %.3f e positivo e sua raiz e %.3f", num, raiz);
    } else{
        quadrado = num*num;
        printf("o numero %.3f e negativo e ao quadrado e %.3f", num, quadrado);
    }
}