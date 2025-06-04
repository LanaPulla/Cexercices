/*Construa um programa que, após ler 
12 valores reais para uma matriz 4x3, chama uma 
função para somar todos os seus elementos e outra para 
imprimir a matriz. A função de soma deve receber a matriz 
como parâmetro e retornar o somatório. A função de impressão deve receber a
matriz como parâmetro.  Ao final, o programa principal deve 
imprimir o somatório dos elementos da matriz. */

#include <stdio.h>
#define L 2
#define C 2


int main(){
    float mat[L][C];
    int lin, col;

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("digite um numero:");
            scanf("%f", &mat[lin][col]); 
        }
    }

}