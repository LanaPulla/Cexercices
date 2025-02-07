/*Faça um programa que receba o valor dos
catetos de um triângulo, calcule e mostre o valor da hipotenusa.
(h2=c12+c22).*/

#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){

    double h, c1, c2;

    printf("digite o cateto 1:");
    scanf("%lf", &c1);
 
    printf("digite o cateto 2:");
    scanf("%lf", &c2);   

    h = sqrt(pow(c1, 2) + pow(c2, 2));

    printf("a hipotenusa dos catetos %.2lf e %.2lf e: %.2lf", c1, c2, h);

}