/*Criar um programa que armazena dados inteiros em
uma matriz 5x5 e imprime somente os valores que se 
encontram em posições cuja linha 
mais coluna forma um número par.*/

#include <stdio.h>

int main(){   
    
    int mat[3][3], lin, col; 

    for(lin=0; lin<3; lin++) {     
        for(col=0; col<3; col++) {        
              printf("digite um numero:");
              scanf("%d", &mat[lin][col]) ;   
             }  
    }
    for(lin=0; lin<3; lin++) {     
        for(col=0; col<3; col++) {        
              printf("%3d", mat[lin][col]);
              
             }  
        printf("\n"); 
    }

    /*int mat[10][10], lin, col;   
    mat[2][2]=4;
    printf("%d valor", mat[2][2]);
    return 0; */
} 