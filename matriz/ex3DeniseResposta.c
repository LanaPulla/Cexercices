/*Faça um programa que preencha uma matriz 10x3 
com as notas de dez alunos em três provas. O programa 
deverá mostrar um relatório com o número dos alunos (número da linha) 
e a prova em que cada aluno obteve a menor nota. 
Ao final, o relatório, deverá mostrar quantos alunos 
tiveram a menor nota em cada uma das provas: 
prova 1, prova 2 e na prova 3. */



#include <stdio.h>
#define L 10 // 10 alunos
#define C 3   // 3 provas

int main() {
    int mat[L][C], lin, col;
    int vetMenor[L];  // Armazena o índice da prova com a menor nota
    int contProvas[C] = {0}; // Contadores para as provas 1, 2 e 3

    // Entrada de dados
    for (lin = 0; lin < L; lin++) {
        printf("Digite as 3 notas do aluno %d:\n", lin + 1);
        
        for (col = 0; col < C; col++) {
            scanf("%d", &mat[lin][col]);
        }

        // Descobrir a prova com a menor nota para este aluno
        vetMenor[lin] = 0; // Assume que a menor é a primeira prova
        for (col = 1; col < C; col++) {
            if (mat[lin][col] < mat[lin][vetMenor[lin]]) {
                vetMenor[lin] = col; // Atualiza com a prova de menor nota
            }
        }

        // Incrementa o contador da prova com a menor nota
        contProvas[vetMenor[lin]]++;
    }

    // Exibir a matriz de notas
    printf("\nMATRIZ DE NOTAS:\n");
    for (lin = 0; lin < L; lin++) {
        for (col = 0; col < C; col++) {
            printf("%d ", mat[lin][col]);
        }
        printf("\n");
    }

    // Exibir o relatório
    printf("\nMenores notas de cada aluno:\n");
    for (lin = 0; lin < L; lin++) {
        printf("Aluno %d: menor nota na Prova %d\n", lin + 1, vetMenor[lin] + 1);
    }

    // Exibir o total de alunos com menor nota em cada prova
    printf("\nTotal de alunos com menor nota em cada prova:\n");
    for (col = 0; col < C; col++) {
        printf("Prova %d: %d alunos\n", col + 1, contProvas[col]);
    }

    return 0;
}

