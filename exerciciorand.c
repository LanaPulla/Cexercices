/*Função rand()
Faça uma função que gera e imprime números aleatórios em um 
intervalo de valores fornecido pelo usuário. Na função main(), 
o usuário deverá informar o valor inicial e o final e a 
quantidade de valores a gerar, e, após, chamar a nova função.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void gerarNumeros(int max, int min, int qdt);

int main(){
    int x, min, max, qdt;
    
    printf("digite um numero para comecar a contagem:");
    scanf("%d", &min);
    
    printf("digite um numero para finalizar a contagem:");
    scanf("%d", &max);
    
    printf("quantos numeros quer imprimir:");
    scanf("%d", &qdt);
    
    gerarNumeros(max, min, qdt);
}

void gerarNumeros(int max, int min, int qdt){
    int x;
    
    srand(time(NULL));
    
    for(x=0;x<qdt;x++){
        printf("%d \n", min+ rand() % max);
    }
}
