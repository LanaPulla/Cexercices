
/*Faça uma função que recebe dois números positivos 
por parâmetro e retorna a soma dos n números 
inteiros existentes entre eles. */

#include <stdio.h>

int soma(int a, int b);

int main(){
    int a,  b;
    printf("digite um valor para A:");
    scanf("%d", &a);

    printf("digite um valor para B:");
    scanf("%d", &b);

    printf("A %d\n", a);
    printf("B %d\n", b);

    soma(a, b);

}

int soma(int a, int b){
    int x;
    int y=0, cont =0, verificacaoA, verificacaoB;
    verificacaoA = a - b;
    verificacaoB = b - a;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if(a == b){
        return printf("os numeros sao iguais, nao ha diferenca");
    } 
    if(verificacaoA == 1 || verificacaoB == 1){
        return printf("nao ha diferenca entre os numeros");
    }
    else{
        for(x=a;x<=b;x++){
            y++;
            cont+= y;
        }
        return printf("\na soma dos numeros entre eles e %d\n", cont-(a+b));
    }
 

}
