/*Faça um programa que leia do usuário o tamanho 
de um vetor a ser lido e faça a alocação dinâmica de
memória. Em seguida, leia do usuário seus valores, 
imprima o vetor lido e mostre quantos dos
números são pares e quantos são ímpares*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, x, n, pares = 0, impares = 0;

    printf("Quantos nC:meros inteiros irC! digitar:");
    scanf("%d", &n);

    v = (int*) malloc(n*sizeof(int));

    for(x=0;x<n;x++){
        printf("preencha com %d numeros:", n);
        scanf("%d", &v[x]);
        if(v[x] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }

    printf("NO VETOR:\n");
     for(x=0;x<n;x++){
      printf("%d ", v[x]);
    }
    printf("\nVOCE DIGITOU %d NUMEROS IMPARES\nVOCE DIGITOU %d NUMERO PARES", impares, pares);

    free(v);

    return 0;
}