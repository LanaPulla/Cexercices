/*Faça um programa que leia dois números M e N e 
 mostre apenas os números impares do intervalo. */

 #include <stdio.h>

 int main(){

    int m = 0;
    int n = 0;
    int imp = 0;    

    printf("digite o menor numero:\n");
    scanf("%d", &m);
    
    printf("digite o maior numero:\n");
    scanf("%d", &n);

    while( m <= n){
        imp = m++;
        if(imp % 2 != 0){
            printf("%d\n", imp);
        }
    }

}