/*Faça um programa no qual o usuário informe uma distância já 
percorrida (em km) e o tempo de duração deste
trajeto (em h) e após determine se este usuário percorreu o
trajeto em excesso de velocidade ou não (limite da
estrada é de 90 km/h).*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    double km, h, kmH, v;

    printf("distancia percorrida(km):");
    scanf("%lf", &km);



    printf("em quanto tempo foi percorrido(horas):");
    scanf("%lf", &h);


    kmH = 90;

    v = km / h;

    if(v > kmH){
        printf("voce percorreu %.2lfkm acima do limte de 90 km/h", km);
    }
    else{
        printf("voce percorreu %.2lfkm dentro do limete de velocidade 90km/h", km);
    }

    printf("\n %.2lf ", v);

}