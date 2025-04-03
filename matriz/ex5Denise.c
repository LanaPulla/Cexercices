/*Faça um programa que preencha:
a. Um vetor de 8 posições, contendo nomes de lojas; 
b. Outro vetor com quatro posições contendo nomes de produtos; 
c. Uma matriz com os preços de todos os produtos em cada loja. 
O programa deverá mostrar todas as relações (nome do produto – nome da loja) 
em que o preço não ultrapasse R$ 120,00. */

#include <stdio.h>
#define L 8
#define C 4

int main(){
    char vetLoja[L][50], vetProd[C][50];
    int x, lin, col;
    float matValor[L][C];

    // Entrada dos nomes das lojas'
    for (x = 0; x < L; x++) {
        printf("Nome da Loja: ");
        scanf(" %49[^\n]", vetLoja[x]); 
        fflush(stdin);
    }

    printf("\nLojas cadastradas:\n");
    for (x = 0; x < L; x++) {
        printf("\n%s\n", vetLoja[x]);
    }



    for (x = 0; x < C; x++) {
        printf("\nNome do produto: ");
        scanf("%49[^\n]s", vetProd[x]); 
        fflush(stdin);
    }


    printf("\nProdutos cadastradas:\n");
    for (x = 0; x < C; x++) {
        printf("\n%s\n", vetProd[x]);
    }

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("\nDigite o preco de %s na %s: ", vetProd[col], vetLoja[lin]);
            scanf("%f", &matValor[lin][col]);
        }
    }

    
    for(lin=0;lin<C;lin++){
        printf("\nvalor de %s\n", vetProd[lin]);
            for(col=0;col<L;col++){
                if(matValor[lin][col]<120){
                    printf("\n%s:  R$:%.2f ",vetLoja[col], matValor[lin][col]);
                }
            }
        printf("\n");
    }

}