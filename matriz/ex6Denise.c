/*Crie um programa que receba as vendas semanais (de um mês) 
de cinco vendedores de uma loja e armazene em uma matriz. 
O programa deverá calcular e mostrar: 
a. O total de vendas do mês de cada vendedor; 
b. O total de vendas de cada semana (todos os vendedores juntos); 
c. O total de vendas do mês. */

#include <stdio.h>
#define L 3
#define C 3


int main(){
    float mat[L][C], vet[L]={0}, cont;
    int lin, col;

    for(lin=0;lin<L;lin++){
            printf("Digite os %d valores que o vendedor %d fez por semana:\n", C, lin+1);
        for(col=0;col<C;col++){
            scanf("%f", &mat[lin][col]);
        }
    }


    printf("\nMatriz:\n");
    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("%.2f ", mat[lin][col]);
        }   
        printf("\n");
    }

    printf("\nTotal por semana de cada\n");
    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            vet[lin] += mat[lin][col];
        }   
        printf("vendedor %d fez %.2f por semana\n", lin+1, vet[lin]);
    }

    printf("\nTotal do mes\n");
    for(lin=0;lin<L;lin++){
        cont+=vet[lin];
    }
    printf("os vendedores fizeram %.2f no mes\n ", cont);

}