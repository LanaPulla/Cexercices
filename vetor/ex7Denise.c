/*Construa um programa que leia um vetor com 20 posições.
Este vetor deverá conter apenas números
inteiros e positivos. 
Após, ele deve permitir que o usuário informe 
um valor para que o programa verifique se
este valor está presente 
no vetor ou não. A interação com o usuário terminará 
quando este informar um valor negativo. */

#include <stdio.h>

int main(){

    int vet[20],x, y;

    for(x=0;x<20;x++){

        do{ printf("digite um numero numero inteiro positivo:");
            scanf("%d", &vet[x]);
            
            if (vet[x] < 0) {
                printf("Numero invalido! Digite apenas numeros inteiros positivos.\n");
            }
        }while(vet[x]<0);
    }

    do {
        printf("qual numero quer procurar no vetor:");
        scanf("%d", &y);

        for(x=0;x<20;x++){
            if(y == vet[x]){
                printf("o numero %d foi achado no vetor\n", y);
            }
        }
        
    }while(y>0);

    printf("vetor: ");

    for(x=0;x<20;x++){

     printf(" %d ", vet[x]);

    }

}