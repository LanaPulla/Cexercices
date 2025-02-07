#include <stdio.h>

int main(){

    double salario, porcento, novosalario;

    printf("informe seu salario:");
    scanf("%lf", &salario);

    porcento = salario / 10;

    novosalario = salario + porcento;

    printf("seu salario de %lf com o aumento de 10 porcento fica %.3lf", salario, novosalario);

}