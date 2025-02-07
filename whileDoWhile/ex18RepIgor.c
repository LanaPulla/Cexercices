/*Faça um programa que gera uma tabela de conversão 
 de polegadas para centímetros, de 1 a 20. 
 Considere  que 1 pol = 2.54 cm. . */
 
 #include <stdio.h>
 
 int main(){

    int i=0;
    double pol = 0;
    double cm=0;

    while(i <= 20){
        pol = i++;

        if(pol != 0){
            cm = pol * 2.54;
            printf("%d polegadas equivale a %.2lfcm\n", i-1, cm);
        }

    }

 }

