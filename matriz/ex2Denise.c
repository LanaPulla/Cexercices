/*Faça um programa que preencha uma matriz M(2x2), 
calcule e mostre a matriz R, 
resultante da multiplicação dos 
elementos de M pelo seu maior elemento. */

#include <stdio.h>
#define L 2
#define C 2
int main(){

    int matM[L][C], matR[L][C], lin, col, maior = 0;

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("digite um numero para preencher a matriz:");
            scanf("%d", &matM[lin][col]);

            if(matM[lin][col] > maior){
                maior = matM[lin][col];
            }
            
        }
    }


    printf("\nMATRIZ M\n");

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("%d ", matM[lin][col]);
        }
        printf("\n");
    }

    printf("\nMATRIZ R\n");

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            matM[lin][col] = matM[lin][col] * maior;
            matR[lin][col] = matM[lin][col];
            printf("%d ", matR[lin][col]);
        }
        printf("\n");
    }

    printf("\n%d maior", maior);


}