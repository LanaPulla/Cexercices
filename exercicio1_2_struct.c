/*
1) Crie uma estrutura que armazene os seguintes dados de um aluno:
nome, nota 1, nota 2, nota 3, média. Escreva
um programa que utilize esta estrutura para armazenar os dados de
 10 alunos de uma classe. O programa deve
ler o nome e as três notas de cada aluno e, após, calcular a 
média. Ao final, todos os dados de todos os alunos da
classe deverão ser apresentados na tela.
2) Incremente o exercício 1, fazendo com que o programa i
mprima também a quantidade de alunos aprovados e a
quantidade de alunos reprovados na classe. Considere que a
 média para aprovação é 6,0. 
*/
#include <stdio.h>
#include <string.h>

typedef struct{
    float n1, n2, resultado;
    char nome[30], apRp[20];
} ALUNO;

void media(ALUNO *vet, int tamanho);

int main(){
    ALUNO a[5];
    int lin;
    
    for(lin=0;lin<3;lin++){
        printf("Digite o nome do aluno:");
        scanf("%s", a[lin].nome);
        
        printf("Digite a nota 1:");
        scanf("%f", &a[lin].n1);
        
        printf("Digite a nota 2:");
        scanf("%f", &a[lin].n2);
    }

    media(a, 5);
    
    for(lin=0;lin<3;lin++){
        printf("nome:%s\nnota 1:%.2f\nnota 2:%.2f\nmedia:%.2f\nstatus:%s \n\n", a[lin].nome, a[lin].n1, a[lin].n2, a[lin].resultado, a[lin].apRp);
    }
}

void media(ALUNO *vet, int tamanho){
    int x, media;
    
    for(x=0;x<5;x++){
        media = (vet[x].n1+vet[x].n2) / 2;
        vet[x].resultado = media;
        if(media<6){
            strcpy(vet[x].apRp, "REPROVADO");
        }else{
            strcpy(vet[x].apRp, "APROVADO");
        }
    }
}
