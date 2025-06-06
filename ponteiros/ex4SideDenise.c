/*Desenvolver o programa que possui a função troca(), que irá 
realizar a troca dos valores de duas variáveis. Após a troca, 
o programa principal deverá imprimir 
os novos valores das variáveis. Utilize chamada de parâmetro por referência.*/

#include <stdio.h>

int troca(int *pont, int *pont2, int vet[2]);

int main(){
    int x, y, vet[2];
    
    printf("Digite um valor para x:");
    scanf("%d", &x);
    
    printf("Digite um valor para y:");
    scanf("%d", &y);
    troca(&x,&y, vet);
    
    printf("Os valores trocados sao:\nx:%d\ny:%d", vet[0], vet[1]);
}

int troca(int *pont, int *pont2, int vet[2]){
    int trocados;
    
    trocados = *pont;
    *pont = *pont2;
    *pont2 = trocados;
    
    vet[0] = *pont;
    vet[1] = *pont2;
}
