/*Crie um programa que:
a)Aloque dinamicamente um vetor de 5 números inteiros;
b) Peça para o usuário digitar os 5 números no espaço alocado;
c) Mostre na tela os 5 números;
d) Libere a memoria alocada.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, x;
    int n = 5;

    v = (int*) malloc(n*sizeof(int));

    for(x=0;x<5;x++){
        printf("digite um numero:");
        scanf("%d", &v[x]);
    }

    for(x=0;x<5;x++){
        printf("%d ", v[x]);
    }

    free(v);

    return 0;

}