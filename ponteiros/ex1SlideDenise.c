#include <stdio.h>

int cubo(int *pont);
int quadrado(int *pont1);

int main(){
    int x;

    printf("digite um numero:");
    scanf("%d", &x);

    printf("cubo: %d\n", cubo(&x)); //passar por & um valor para uma funcao em parametro
    printf("quadrado: %d", quadrado(&x));

}

int cubo(int *pont){
    return *pont * *pont * *pont;
}

int quadrado(int *pont1){
    return *pont1 * *pont1;
}
