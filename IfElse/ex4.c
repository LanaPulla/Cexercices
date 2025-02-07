/*Escreva um algoritmo para determinar se um dado 
número N, recebido através do teclado, é POSITIVO, NEGATIVO ou NULO. */

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float numero;

    printf("digite um numero\n");
    scanf("%f", &numero);

    if (numero < 0){
        printf("o numero %f e negativo", numero);
    }
    if (numero > 0){
        printf("o numero e positivo");
    } 
    if (numero == 0){
    printf("o numero e nulo");
       
    }

}