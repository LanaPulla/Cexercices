/*Faça um programa que preencha uma matriz 10x3 
com as notas de dez alunos em três provas. O programa 
deverá mostrar um relatório com o número dos alunos (número da linha) 
e a prova em que cada aluno obteve a menor nota. 
Ao final, o relatório, deverá mostrar quantos alunos 
tiveram a menor nota em cada uma das provas: 
prova 1, prova 2 e na prova 3. */

#include <stdio.h>
#define L 10
#define C 3

int main(){

    int mat[L][C], lin, col;
    int vetMenor[C];
    int p1 = 0, p2 =0, p3 = 0;

    for(lin=0;lin<L;lin++){
        printf("Digite as 3 notas do aluno %d:\n", lin + 1);
        for (col = 0; col < C; col++) {
            scanf("%d", &mat[lin][col]);        
        }

        vetMenor[lin] = 0;
        for (col = 1; col < C; col++){
            if(mat[lin][col]<mat[lin][vetMenor[lin]]){
                vetMenor[lin] = col;
            }
        }
    }

        for(lin=0;lin<C;lin++){
            if(vetMenor[lin] == 0){
                p1++;
            } else if(vetMenor[lin] == 1){
                p2++;
            } else if(vetMenor[lin] == 2){
                p3++;
            }
        }


    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("%d ", mat[lin][col]);
        }
        printf("\n");
    }

    for(lin=0;lin<L;lin++){
        printf("aluno %d teve a nota na prova %d \n", lin+1, vetMenor[lin]+1);
    }

    printf("%d alunos tiveram a nota menor na prova 1 \n%d alunos tiveram a nota menor na prova 2 \n%d alunos tiveram a nota menor na prova prova 3", p1,p2,p3);

}