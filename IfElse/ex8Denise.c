/*A prefeitura de Contagem abriu uma linha de crédito para
os funcionários estatutários. O valor máximo da
prestação não poderá ultrapassar 30% do salário bruto. 
Faça um programa que permita entrar com o salário
bruto e o valor da prestação, e informar se o 
empréstimo pode ou não ser concedido.*/

#include <stdio.h>

int main(){

    double salario, prestacao, porcento;

    printf("digite seu salario bruto:\n");
    scanf("%lf", &salario);
    fflush(stdin);

    printf("digite o valor da prestacao\n");
    scanf("%lf", &prestacao);
    fflush(stdin);

    porcento = salario * 0.3;

    if (prestacao > porcento){
        printf("voce nao pode tirar o emprestimo, pois o valor %.3lf ultrapassa 30 porcento de seu salario", prestacao);
    } else{
        printf("voce pode tirar o emprestimo, a prestacao %.3lf nao ultrapassa 30 porcento de seu salario", prestacao );
    }
    printf("\n%.3lf", porcento);

}