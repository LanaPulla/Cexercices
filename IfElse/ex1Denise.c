/*Escreva um programa que leia um nome e informe o
 tamanho deste nome, classificando-o como “nome curto”,
se possuir menos que 10 caracteres.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int numCar;

    printf("digite seu primeiro nome:\n");
    scanf("%29[^\n]s", nome);
    fflush(stdin);

    numCar = strlen(nome);

    if(numCar < 10){
        printf("Seu nome e: %s\n", nome);
        printf("tambem e curto com menos de 10 caracteres:%d", numCar);
    } 
    else if (numCar >= 10){
        printf("Seu nome e: %s\n", nome);
        printf("tambem nao e curto com mais de 10 caracteres:%d", numCar);
    }

}