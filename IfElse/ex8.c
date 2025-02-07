/*Escreva um algoritmo para determinar se um número 
A é divisível por um outro número B. 
Esses valores devem ser fornecidos pelo usuário.*/

/*#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    float valor1, valor2;

    printf("valor 1:\n");
    scanf("%f", &valor1);
    
    printf("valor 2:\n");
    scanf("%f", &valor2);

    if ((int) valor1 % (int) valor2 == 0){
        printf("o valor %f e divisivel pelo valor %f", valor1, valor2);

    } else{
        printf("o valor %f nao e divivel pelo valor %f", valor1, valor2);
    }

}*/

#include <stdio.h>
#include <locale.h>
#include <math.h> // Inclua esta biblioteca para usar fmod


int main (){
    setlocale(LC_ALL, "Portuguese");

    float valor1, valor2;

    printf("valor 1:\n");
    scanf("%f", &valor1);
    
    printf("valor 2:\n");
    scanf("%f", &valor2);

   if (valor2 == 0) { 
        printf("Divisão por zero não é permitida.\n");
    } else if (fabs(fmod(valor1, valor2))< 1e-6) { //fabs ignora o sinal positivo ou negativo, fmod é usado para lidar com o resto da divivel
        //"Se o resto estiver muito próximo de zero (dentro da margem de 0.000001), vamos considerá-lo como zero." 1e-6 é a notação científica para o número 0.000001 (1 dividido por 10 na 6)
        printf("O valor %f e divisivel pelo valor %f.\n", valor1, valor2);
    } else {
        printf("O valor %f nao e divisivel pelo valor %f.\n", valor1, valor2);
    }
 return 0;
}
