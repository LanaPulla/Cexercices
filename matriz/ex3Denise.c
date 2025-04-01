/*Faça um programa que preencha uma matriz 10x3 
com as notas de dez alunos em três provas. O programa 
deverá mostrar um relatório com o número dos alunos (número da linha) 
e a prova em que cada aluno obteve a menor nota. 
Ao final, o relatório, deverá mostrar quantos alunos 
tiveram a menor nota em cada uma das provas: 
prova 1, prova 2 e na prova 3. */

#include <stdio.h>
#define L 4
#define C 3

int main(){

    int mat[L][C], lin, col;
   /* int vet[C];
    int vetCont[C];*/

    for(lin=0;lin<L;lin++){
        printf("Digite as 3 notas do aluno %d:\n", lin + 1);
        for (col = 0; col < C; col++) {
            scanf("%d", &mat[lin][col]);        
        }
    }

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("%d", mat[lin][lin]);
        }
        printf("\n");
    }


}