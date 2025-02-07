/*Faça um programa que calcule e mostre a 
área de um círculo. Sabe-se que: Área = π * R2*/

#include <stdint.h>
#include <math.h>
#include <locale.h>
#ifndef M_PI
    #define M_PI 3.141592653589793
#endif

int main(){

    double raio, conta;

    printf("digite o raio para descobrir a area do circulo:");
    scanf("%lf", &raio);

    conta = M_PI * pow(raio, 2);

    printf("o valor do raio e: %.2lf", conta);

}