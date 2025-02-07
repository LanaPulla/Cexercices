/*Faça um programa que leia o nome e a média de  alunos. 
O programa deverá parar quando o nome de  
aluno informado for igual a “fim”. Quando terminar o  
programa deverá informar a média de todos os alunos  e o 
número de alunos que tiveram suas médias informadas. */

#include <stdio.h>
#include <string.h>

int main(){

    float mediaAl = 0;
    float media = 0;
    float soma = 0;
    float mediaGeral = 0;
    int i = 0;
    char nome[20], resp[5], nomeAl[20];
    char fim[] = "fim";

    do{
        printf("nome do aluno:");
        scanf("%s", nomeAl);

        printf("media do aluno:");
        scanf("%f", &mediaAl);

        printf("quer continuar(fim para parar):");
        scanf("%s", resp);
        i++;

        if(i == 0){
            strcpy(nomeAl, nome);
            media = mediaAl;
        } 
        if (mediaAl >0){
            strcpy(nomeAl, nome);
            media = mediaAl;
            soma+=media;
        }

    } while(strcmp(resp, fim ) != 0);

    mediaGeral = soma / i; 

    printf("%.2f\n", soma);
    printf("a media geral dos alunos foi %.2f\n", mediaGeral);
    printf("foram informadas %d medias\n", i);


}