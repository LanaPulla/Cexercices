/*Faça um programa que receba o ano de nascimento de uma pessoa 
e o ano atual, calcule e mostre:
a) a idade desta pessoa baseada somente no ano;
b) quantos anos ela terá em 2050.*/

#include <stdio.h>

int main(){

    int anoAt, anoNa, a, b;

    printf("digite o ano de nascimento:");
    scanf("%d", &anoNa);
    
    printf("digite o ano atual:");
    scanf("%d", &anoAt);

    a = anoAt - anoNa;

    b= 2050 - anoNa;

    printf("no ano de %d voce tem %d anos\n", anoAt, a);

    printf("no ano de 2050 voce tera %d anos\n", b);


}