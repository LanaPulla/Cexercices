/*Faça um programa que receba três valores, A, B e C, analise estes 
valores e informe ao usuário se estes podem
ser os lados de um triângulo. O ABC será um triângulo se cada um 
dos lados for menor que a soma dos outros
dois (todas as opçoes precisam ser verdadeiras). Obs: Seu algoritmo não deve permitir entrada de valores 
inválidos para as medidas candidatas a lados do
triângulo.*/

#include <stdio.h>

int main(){

    int valor1, valor2, valor3;

    printf("digite o primeiro numero:");
    scanf("%d", &valor1);
    if (valor1 <= 0){
        printf("voce inseriu um valor invalido");
        return 0;
    }

    printf("digite o segundo numero:");
    scanf("%d", &valor2);
    if (valor2 <= 0){
        printf("voce inseriu um valor invalido");
        return 0;
    }

    printf("digite o terceiro numero:");
    scanf("%d", &valor3);
    if (valor3 <= 0){
        printf("voce inseriu um valor invalido");
        return 0;
    }   
    

    if( valor1 < valor2+valor3 && valor2 < valor3+valor1 && valor3 < valor1+valor2){
        printf("os numeros dados podem ser um triangulo");
    }

    else{
        printf("os numeros dados nao podem ser um triangulo");
    }

}