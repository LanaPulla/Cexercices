/*Construa um algoritmo que, dado quatro valores, A, B, C e D, 
o algoritmo diga qual é o maior e o menor valor. */

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int valor1, valor2, valor3, valor4;

    printf("digite o valor 1:\n");
    scanf("%d", &valor1);

    printf("digite o valor 2:\n");
    scanf("%d", &valor2);

    printf("digite o valor 3:\n");
    scanf("%d", &valor3);

    printf("digite o valor 4:\n");
    scanf("%d", &valor4);

    if (valor1 > valor2 && valor1 > valor3 && valor1 > valor4){
        printf("dos valores %d, %d, %d e %d, o maior e %d\n", valor1, valor2, valor3, valor4, valor1);
    }
    if (valor2 > valor1 && valor2 > valor3 && valor2 > valor4){
        printf("dos valores %d, %d, %d e %d, o maior e %d\n", valor1, valor2, valor3, valor4, valor2);
    }
    if (valor3 > valor1 && valor3 > valor2 && valor3 > valor4){
        printf("dos valores %d, %d, %d e %d, o maior e %d\n", valor1, valor2, valor3, valor4, valor3);
    } 
    if (valor4 > valor1 && valor4 > valor3 && valor4 > valor2){
        printf("dos valores %d, %d, %d e %d, o maior e %d\n", valor1, valor2, valor3, valor4, valor4);
    }
    

    if (valor1 < valor2 && valor1 <  valor3 && valor1 < valor4){
        printf("dos valores %d, %d, %d e %d, o menor e %d\n", valor1, valor2, valor3, valor4, valor1);
    }
    if (valor2 <  valor1 && valor2 <  valor3 && valor2 <  valor4){
        printf("dos valores %d, %d, %d e %d, o menor e %d\n", valor1, valor2, valor3, valor4, valor2);
    }
    if (valor3 <  valor1 && valor3 <  valor2 && valor3 <  valor4){
        printf("dos valores %d, %d, %d e %d, o menor e %d\n", valor1, valor2, valor3, valor4, valor3);
    } 
    if (valor4 <  valor1 && valor4 <  valor3 && valor4 <  valor2){
        printf("dos valores %d, %d, %d e %d, o menor e %d\n", valor1, valor2, valor3, valor4, valor4);
    }
}
