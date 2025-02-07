#include <stdio.h>
#include <locale.h>

int main(){
    int valor;
    setlocale(LC_ALL, "Portuguese");

    printf("digite um número para descobrir se é par:\n");
    scanf("%d", &valor);

    if (valor % 2 == 0){
        printf("o valor %d é par", valor);
    } else {
        printf("o valor %d não é par", valor);
    }
}