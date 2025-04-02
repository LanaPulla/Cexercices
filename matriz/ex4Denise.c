/*Faça um programa que receba do usuário 
uma matriz 10x10 de inteiro e depois faça:
a. Troque a segunda linha e a oitava; 
b. Troque a sexta coluna e a nona;  
c. Mostre como ficou a matriz. */


#include <stdio.h>
#define L 10
#define C 10

int main(){

    int mat[L][C], lin, col, matModificada=0;

    for(lin=0;lin<L;lin++){
        for (col = 0; col < C; col++) {
            printf("Digite para preencher a matriz:");
            scanf("%d", &mat[lin][col]);        
        }
    }

  //segunda com oitava
    for(lin=0;lin<L;lin++){
        matModificada  =  mat[1][lin];
        mat[1][lin] = mat[7][lin];
        mat[7][lin] = matModificada;    
        
    }
    //sexta com nona 
    for(lin=0;lin<L;lin++){
        matModificada  =  mat[5][lin];
        mat[5][lin] = mat[8][lin];
        mat[8][lin] = matModificada;    
        
    }

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("%d ", mat[lin][col]);
        }
        printf("\n");
    }



}