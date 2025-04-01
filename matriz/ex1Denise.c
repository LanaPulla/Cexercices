/*Criar um programa que armazena dados inteiros
em uma matriz 5x5 e imprime somente os valores 
que se encontram em posições cuja linha 
mais coluna forma um número par. */

#include <stdio.h>
#define L 5
#define C 5
int main(){

    int mat[L][C], lin, col;

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("digite um numero para preencher a matriz:");
            scanf("%d", &mat[lin][col]);
        }
    }
    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
        
            printf("%3d", mat[lin][col]);
        }
        printf("\n");
    }
    

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            if((lin+col) % 2 == 0){
                printf("%d ", mat[lin][col]);
            }
        }
      }


}