/*Faça um programa 
que pesquisa se um valor fornecido pelo usuário 
encontra-se em um vetor de inteiros de 20 posições 
também fornecido pelo usuário. */

#include <stdio.h>

int main(){

    int vet[20], x, resp, vdd;

    for(x=0;x<20;x++){
        printf("digite um numero:");
        scanf("%d", &vet[x]);
    }

    printf("qual numero voce quer procurar:");
    scanf("%d", &resp);

    for(x=0;x<20;x++){
        if(vet[x] == resp){
            vdd = 1;
            break;
        } 

    }
    
    if(vdd == 1){
        printf("valor %d foi encontrado no vetor ", resp);
        for(x=0;x<20;x++){
             printf("| %d |", vet[x]);
        }
    } else{
        printf("o valor %d nao foi encontrado no vetor ", resp);
        for(x=0;x<20;x++){
            printf("| %d |", vet[x]);
       };
    }

    return 0;

}