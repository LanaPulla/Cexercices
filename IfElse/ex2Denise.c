/*Construa um programa que leia dois nomes e diga se 
ambos têm o mesmo tamanho. Caso não tenham, diga o
tamanho de cada um deles.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){

    char nome1[15];
    char nome2[15];

    int calc1, calc2;

    printf("digite o primeiro nome:\n");
    scanf("%14[^\n]s", nome1);
    fflush(stdin);

    printf("digite o segundo nome:\n");
    scanf("%14[^\n]s", nome2);
    fflush(stdin);

    calc1 = strlen(nome1);

    calc2 = strlen(nome2);

    if(calc1 == calc2){
        printf(" os nomes %s e %s tem a mesma quantidade de caracteres, com %d", nome1, nome2, calc1);
    }
    else{
        printf("o nome %s tem %d caracteres\n", nome1, calc1);
        printf("e o nome %s tem %d caracteres", nome2, calc2);

    }

}

