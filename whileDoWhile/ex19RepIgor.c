/* Dado um número, imprimir a tabuada multiplicativa  deste. */

#include <stdio.h>

int main(){

    int i = 0;
    int n = 0;
    int tab = 0;
    int mult = 0;

    printf("qual numero vc quer fazer a tabuada:");
    scanf("%d", &n);

    while(i <= 10){
        tab = i++;
        if(tab != 0){
            mult = tab * n; 
            printf("%d x %d = %d\n", n, tab, mult);
        }
    }

}