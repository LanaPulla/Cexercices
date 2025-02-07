/*Faça um programa para determinar se um dado número N,
 recebido através do teclado, é POSITIVO, NEGATIVO
ou NULO.*/

#include <stdio.h>

int main(){

   int num; 

   printf("digite um numero:\n");
   scanf("%d", &num);

   if (num == 0){
    printf("o numero %d e nulo", num);
   } 
   else if(num < 0){
    printf("o numero %d e negativo", num);
   } else {
    printf("o numero %d e positivo", num);
   }

}