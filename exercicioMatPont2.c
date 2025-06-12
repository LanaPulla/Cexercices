#include <stdio.h>

typedef struct{
    float base, altura, area;
}RETANGULOS;

void preencher(RETANGULOS *r, int tamanho);
void calcularAreas(RETANGULOS *r, int tamanho);

int main(){
    RETANGULOS ret[3];
    int lin, qtd = 3;
    
    preencher(ret, qtd);
    calcularAreas(ret, qtd);
    
    for(lin=0;lin<3;lin++){
        printf("\n\nRETANGULO %d\n", lin+1);
        printf("base:%.2f\naltura:%.2f\narea:%.2f", ret[lin].base, ret[lin].altura, ret[lin].area);
    }
    
}

void calcularAreas(RETANGULOS *r, int tamanho){
    int lin;
    float calculo;
    
    for(lin=0;lin<tamanho;lin++){
        calculo = r[lin].base * r[lin].altura;
        r[lin].area = calculo;
    }
    
}

void preencher(RETANGULOS *r, int tamanho){
    int x;
    
    for(x=0;x<tamanho;x++){
        printf("digite a base do retangulo %d:", x+1);
        scanf("%f", &r[x].base);
    }
    for(x=0;x<tamanho;x++){
        printf("digite a altura do retangulo %d:", x+1);
        scanf("%f", &r[x].altura);
    }
}

