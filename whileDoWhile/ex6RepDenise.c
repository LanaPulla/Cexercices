/*Faça um programa no qual o usuário informe o 
número de médias a serem inseridas e após leia cada uma das
médias juntamente com o nome do aluno. 
Ao final o programa deverá informar a maior média 
juntamente com o
nome do aluno que a obteve.*/

#include <stdio.h>
#include <string.h>

int main(){

    char sim[]= "s";
    char resp[5];
    char nomeAlu[20];
    char nome[20];
    float media = 0, mediaMaior;
    int i = 0;

    do{
        printf("qual a media o aluno:");
        scanf("%f", &media);

        printf("qual o nome do aluno:");
        scanf("%s", nome);
         
        printf("quer continuar(s/n):");
        scanf("%s", resp);

        i++;

        if( i == 0){
            mediaMaior = media;
            strcpy(nomeAlu, nome);
        }
        if(media > mediaMaior){
            mediaMaior = media;
            strcpy(nomeAlu, nome);
        }

    }while(strcmp(sim,resp) == 0);

    printf("o aluno(a) %s teve a maior media de %.1f", nome, mediaMaior);
}