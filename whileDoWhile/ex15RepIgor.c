/*Faça um algoritmo que leia uma quantidade não  
determinada de números positivos. Calcule 
a  quantidade de
números pares e ímpares, a média de  valores 
pares e a média geral 
dos números lidos. O  número que encerrará a 
leitura será zero. 
*/

#include <stdio.h>

int main(){

    int n = 0;
    int i = 0;
    int par = 0;
    int impar = 0;
    int medP = 0;
    int somaP = 0;
    int medI = 0;
    int somaI = 0;
    int medG = 0;
    int somaG = 0;

    do{
        printf("digite um numero:");
        scanf("%d", &n);
        
        if( n > 0){
            i++;
            somaG+= n;
        } 
        if (n % 2 == 0){
            par++;
            somaP+= n;
        }
        else{
            impar++;
            somaI+= n;
        }
        
    } while (n != 0);

    medG = somaG / i;
    medP = somaP / par;
    medI = somaI / impar;
    

    printf("Media de numeros impares: %d\n", medI);
    printf("Media de numeros pares: %d\n", medP);
    printf("Media geral dos numeros: %d\n", medG);


}