#include <stdio.h>
#include <locale.h>

int main(){
    int valor;
    setlocale(LC_ALL, "Portuguese");

    printf("digite um n�mero para descobrir se � par:\n");
    scanf("%d", &valor);

    if (valor % 2 == 0){
        printf("o valor %d � par", valor);
    } else {
        printf("o valor %d n�o � par", valor);
    }
}