/* Escreva uma função que apresente um quadrado sólido de
asteriscos cujo lado é especificado no parâmetro inteiro 
lado. Por exemplo, se lado é 3, a função exibe:  
*  *  * 
*  *  * 
*  *  * 
 */

#include <stdio.h>

void quadrado(int lado);

int main(){
    int lado; 
    printf("quantas linhas tera o quadrado:");
    scanf("%d", &lado);
    quadrado(lado);
    return 0;
}

void quadrado(int lado){
    char vet[lado];
    int x;
    int i;

    for(i = 0; i < lado; i++) {
        vet[i] = '*';
          printf("\n");
        for(x=0;x<lado;x++){
            printf(" %c ", vet[i]);

        }
    }

    
}