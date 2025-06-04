/*
Faça uma função que receba 3 números inteiros como parâmetro, 
representando horas, minutos e segundos, 
e os converta e imprima em segundos. 
*/

#include <stdio.h>

void segundos(int h, int m, int s);

int main(){

    int h, m, s;

    printf("digite as horas:");
    scanf("%d", &h);

    printf("digite os minutos:");
    scanf("%d", &m);

    printf("digite os segundos:");
    scanf("%d", &s);

    segundos(h,m,s);
}

 void segundos(int h, int m, int s){
    int horas, minutos, segundos;

    horas = h * 3600;
    minutos = m * 60;
    
    segundos = horas + minutos + s;

    printf("sao %ds ao total", segundos);

}
