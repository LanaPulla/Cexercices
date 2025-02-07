/*Construa um programa que, dado quatro valores, 
A, B, C e D, diga qual é o maior e o menor valor.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float v1, v2, v3, v4, maior, menor;

    printf("digite o primeiro valor:");
    scanf("%f", &v1);
    fflush(stdin);

    printf("digite o segundo valor:");
    scanf("%f", &v2);
    fflush(stdin);


    printf("digite o terceiro valor:");
    scanf("%f", &v3);
    fflush(stdin);

    printf("digite o quarto valor:");
    scanf("%f", &v4);
    fflush(stdin);


    maior = menor = v1;

    if(v2 > maior){
        maior = v2;
    }
    if(v3 > maior){
        maior = v3;
    }
     if(v4 > maior){
        maior = v4;
    }
    
   
    if(v2 < menor){
        menor = v2;
    }
     if(v3 < menor){
        menor = v3;
    }
      if(v4 < menor){
        menor = v4;
    }

    printf("Dos valores %.2f, %.2f, %.2f e %.2f:\n", v1, v2, v3, v4);
    printf("O maior é %.2f.\n", maior);
    printf("O menor é %.2f.\n", menor);
   
}