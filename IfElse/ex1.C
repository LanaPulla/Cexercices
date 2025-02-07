/*Construa um algoritmo que leia dois valores numéricos inteiros e efetue a adição;
 caso o resultado seja maior que 50, apresentá-lo. */
 
#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, conta;
    
    printf("----------------------\n");

    printf("vamos calcular dois valores\n");

    printf("digite o primeiro valor inteiro:\n");
    scanf("%d", &num1);

    printf("digite o segundo valor inteiro:\n");
    scanf("%d", &num2);

    conta = num1 + num2;

    if (conta >= 50){
        printf("o resultado da soma e %d, maior que 50", conta);
    } else{
        printf("o resultado da soma e %d, menor que 50", conta);
    }

}

























