/*Construir um algoritmo que leia dois números 
e efetue a adição. Caso o valor somado seja maior que 20,
 este deverá ser apresentado somando-se a ele mais 8; caso o valor 
 somado seja menor ou igual a 20, 
este deverá ser apresentado subtraindo-se 5. */

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, conta1, conta2, conta3;

    printf("digite o primeiro valor a ser somado:\n");
    scanf("%f", &num1);

    printf("digite o segundo valor a ser somado:\n");
    scanf("%f", &num2);

    conta1 = num1 + num2;

    if (conta1 >= 20){
        conta2 = conta1 + 8;
        printf("o valor da conta e %f e o valor somado a 8 e %f", conta1, conta2);
    }
     if (conta1 < 20){
        conta3 = conta1 - 5;
        printf("o valor da conta e %f e o valor subtraido a 5 e %f", conta1, conta3);
    }


}