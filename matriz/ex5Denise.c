/*Faça um programa que preencha:
a. Um vetor de 8 posições, contendo nomes de lojas; 
b. Outro vetor com quatro posições contendo nomes de produtos; 
c. Uma matriz com os preços de todos os produtos em cada loja. 
O programa deverá mostrar todas as relações (nome do produto – nome da loja) 
em que o preço não ultrapasse R$ 120,00. */

#include <stdio.h>
#define L 3
#define C 3

int main(){
   // float matProduto[L][C], lin, col;
    char vetLoja[L][50], x; // vetProd[L];

    for(x=0;x<L;x++){
        printf("Nome da Loja:");
        scanf("%s", vetLoja[x]);
    }

    for(x=0;x<L;x++){
        printf("%s \n", vetLoja[x]);
    }

}