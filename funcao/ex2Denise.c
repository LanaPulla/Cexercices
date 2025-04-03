/* Escreva uma função de exponenciação cujos valores
de base e de expoente são passados como parâmetros.  
Suponha que o expoente seja um inteiro positivo, 
diferente de zero, e a base seja um inteiro. */

#include <stdio.h>
#include <math.h>
#include <string.h>

void pot(double a, double b);

int main(){

    double a, b;
    printf("Digite o valor da base da potencia:");
    scanf("%lf", &a);

    printf("Digite o valor do expoente da potencia:");
    scanf("%lf", &b);
    pot(a, b);

    return 0;
}

void pot(double a, double b){
    if( a > 0 && b > 0){ 
        printf("O valor de %.1lf na %.1lf e %.1lf", a, b, pow(a,b));
    } 
    

}

