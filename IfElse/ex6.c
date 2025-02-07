/*Escreva um algoritmo que leia um número e imprima a raiz 
quadrada do número, caso ele seja
positivo ou igual a zero; e o quadrado do número, caso ele seja negativo. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float numero, quadrado, raiz;

    printf("digite um número:\n");
    scanf("%f", &numero);

    if (numero < 0){
        quadrado = numero * numero;
        printf("o numero %f e negativo e ele elevado e %f", numero, quadrado);
    } 
    if (numero >= 0){
        raiz = sqrt(numero);
        printf("o numero %f e positivo e a sua raiz e %f", numero, raiz);
    
    }
}
