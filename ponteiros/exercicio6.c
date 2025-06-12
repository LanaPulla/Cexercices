#include <stdio.h>

void ajuste(float (*pont)[4]);

int main(){
    float matFunc[3][4]={0};
    int lin, col;
    
    for(lin=0;lin<3;lin++){
        printf("Digite o salario: ");
        scanf("%f", &matFunc[lin][0]);

        // Coluna 1: aumento
        printf("Digite o aumento: ");
        scanf("%f", &matFunc[lin][1]);

    }
    
    ajuste(matFunc);
    
    printf("Salario Aumento Ajuste\n");
    for(lin=0;lin<3;lin++){
        for(col=0;col<4;col++){
            printf("%.2f    ", matFunc[lin][col]);
        }
        printf("\n");
    }
}

void ajuste(float (*pont)[4]){
    int lin;
    
    for(lin=0;lin<3;lin++){
        pont[lin][4] = pont[lin][0]+pont[lin][1];
    }
}