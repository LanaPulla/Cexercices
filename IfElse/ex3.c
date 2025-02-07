 /*Construa um algoritmo que determine (imprima) 
 se um dado número N inteiro, 
 recebido através do teclado, é PAR ou ÍMPAR. */

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int dado;
   
    printf("-----------------------\n");
    printf("vamos decobrir se um número é ímpar ou par\n");
    printf("-----------------------\n");
    printf("digite um número inteiro:\n");
    scanf("%d", &dado);

    if (dado % 2 == 0){
        printf("o número %d é par", dado);
    } else {
        printf("o númeor %d é ímpar", dado);
    }

}