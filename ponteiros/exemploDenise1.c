#include <stdio.h>

int main(){
   int *ponteiro, x, q, *y;

   printf("digite um numero:");
   scanf("%d", &x);

   ponteiro = &x; //ponteiro armazena com &

   q = *ponteiro; //valor que o ponteiro esta apontando

   y = &ponteiro; //ponteiro de ponteiro

    printf("p: %d\n", &ponteiro);
    printf("q: %d\n", q);
    printf("x: %d\n", x);
    printf("y: %d\n", y);

}