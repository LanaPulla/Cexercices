#include <stdio.h>

int main(){

    float c = 60;
    float d = 20;
    float repC, repD, porcD, porcC;
    

    printf("porcentagem de alunos reprovados em C:\n");
    scanf("%f", &repC);
    
    printf("porcentagem de alunos reprovados em D:\n");
    scanf("%f", &repD);
    
    porcC = (c *  repC) / 100;
    porcD = (d *  repD) / 100;

    printf("os alunos reprovados em C sao: %.2f\n", porcC);
    printf("os alunos reprovados em D sao: %.2f\n", porcD);


}