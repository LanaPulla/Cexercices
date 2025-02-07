/*Chico tem 1,50 metro e cresce 2 centímetros por ano, 
enquanto Zé tem 1,10 metro e cresce 3 centímetros por  ano. 
Construa um algoritmo que calcule e imprima  quantos anos serão 
necessários para que Zé seja maior que Chico.
*/

#include <stdio.h>

int main(){
    int i = 0;
    float ZeM, ZeCm, ChicoM, ChicoCm;
    ZeM = 1.10;
    ZeCm = 0.03;
    ChicoM = 1.50;
    ChicoCm= 0.02;

    while(ZeM < ChicoM){
       
        ChicoM += ChicoCm;
        ZeM += ZeCm;
        i++;
        printf("%d\n", i);
    
    }
    printf("demorou %d anos\n", i);
    printf("%.2f Chico \n%.2f Ze", ChicoM, ZeM);
        
}
