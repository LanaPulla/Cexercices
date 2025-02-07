/*Construa um programa para determinar se um número A 
é divisível por um número B. Esses valores devem ser
fornecidos pelo usuário. (Divisão inteira)*/

#include <stdio.h>

int main(){

    int num1, num2;
     
    printf("digite o primeiro numero:");
    scanf("%d", &num1);
    fflush(stdin);


    printf("digite o segundo numero:");
    scanf("%d", &num2);
    fflush(stdin);

    if (num1 % num2 == 0){

        printf("o numero %d e divisivel pelo numero %d", num1, num2);
    } 
    else {
        printf("o numero %d nao e divivel por %d", num1, num2);
    }


}
