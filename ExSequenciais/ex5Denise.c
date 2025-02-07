/*Faça um programa que solicite um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/

#include <stdio.h>
#include <math.h>

int main(){
    int num, a, b, c, d; 
    
    printf("digite um numero:");
    scanf("%d", &num);

    a = pow(num, 2);
    b= pow(num, 3);
    c= sqrt(num);
    d= cbrt(num);

    printf(" o numero digitado ao quadrado: %d\n", a);
    printf("o numero digitado ao cubo: %d\n", b);
    printf("a raiz quadrada do numero digitado: %d\n", c);
    printf("a raiz cubica do numero digitado: %d\n", d);

}
