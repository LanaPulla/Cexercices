/*Dados dois números, obter o quociente 
inteiro através  de subtrações sucessivas. */

#include <stdio.h>

int main(){

    float n = 0;
    float m = 0;

    printf("digite um numero:");
    scanf("%f", &n);
    
    printf("digite um numero para fazer subtracao sucessiva:");
    scanf("%f", &m);

    if (n > m){
        do {
           n = n - m;
            printf("%.2f\n", n);

        }  while(n > m);
    }
}