/* Escreva uma função que apresente um quadrado sólido de
asteriscos cujo lado é especificado no parâmetro inteiro 
lado. Por exemplo, se lado é 3, a função exibe:  
*  *  * 
*  *  * 
*  *  * 
 */

#include <stdio.h>

void lado(int a);

int main(){
    int a; 
    printf("quantas linhas tera o quadrado:");
    scanf("%d", &a);
    lado(a);
    return 0;
}

void lado(int a){
    char vet[a];

    for(int i = 0; i < a; i++) {
        vet[i] = '*';
        printf("%c ", vet[i]);
    
    }
    
}