#include <stdio.h>

int main(){

    double nota1, nota2, nota3, conta, divisao;

    printf("digite a nota 1:");
    scanf("%lf", &nota1);

    printf("digite a nota 2:");
    scanf("%lf", &nota2);
    printf("digite a nota 3:");
    scanf("%lf", &nota3);

    conta = nota1 + nota2 + nota3;
    
    divisao = conta / 3;

    printf("o media do aluno é: %.2lf", divisao);
}