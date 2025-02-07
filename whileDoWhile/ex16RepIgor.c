/*Faça um programa no qual o usuário informe o 
número de médias a serem inseridas e após leia cada  
uma das médias juntamente com o nome do aluno. Ao  final o
programa deverá informar a maior média  juntamente 
com o nome do aluno que a obteve. 
*/

#include <stdio.h>
#include <string.h>

int main(){

    float medias = 0, m = 0, medAl = 0, i = 0;
    char nome[20], nomeAl[20];

    printf("quantas medias serao armazenadas:");
    scanf("%f", &medias);

    do{
        printf("nome do aluno:");
        scanf("%s", nome);
        
        printf("media do aluno:");
        scanf("%f", &m);

        i++;

        if(i == 0){
            strcpy(nomeAl, nome);
            medAl = m;
        } 
        if(m > medAl){
            strcpy(nomeAl, nome);
            medAl = m;
            
        }

    } while(i < medias);


    printf("a nota mais alta %.2f e do aluno %s", medAl, nomeAl);
}