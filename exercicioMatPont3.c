#include <stdio.h>

typedef struct{
    float base, altura, area;
}RETANGULOS;

int main(){
    RETANGULOS r[3];
    float calculo;
    int lin;
    
    for(lin=0;lin<3;lin++){
        printf("Digite a base do retangulo %d:", lin+1);
        scanf("%f", &r[lin].base);
    }
    
    for(lin=0;lin<3;lin++){
        printf("Digite a altura do retangulo %d:", lin+1);
        scanf("%f", &r[lin].altura);
    }
    
    for(lin=0;lin<3;lin++){
        calculo = r[lin].base * r[lin].altura;
        r[lin].area = calculo;
    }
    
    for(lin=0;lin<3;lin++){
        printf("\n\nRETANGULO %d\n", lin+1);
        printf("base:%.2f\naltura:%.2f\narea:%.2f", r[lin].base, r[lin].altura, r[lin].area);
    }
}