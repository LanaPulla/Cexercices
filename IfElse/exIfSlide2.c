#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float resul, calcu, nota1, nota2, nota3, nota4; 

    printf("vamos calcular a média do seu aluno\n");

    printf("digite o valor da nota 1:\n");
    scanf("%f", &nota1);

    printf("digite o valor da nota 2:\n");
    scanf("%f", &nota2);

    printf("digite o valor da nota 3:\n");
    scanf("%f", &nota3);

    printf("digite o valor da nota 4:\n");
    scanf("%f", &nota4);

    calcu = nota1 + nota2 + nota3 + nota4;
    resul = calcu / 4; 

    if (resul < 4){
        printf("o aluno está abaixo da média com %f", resul);
    } if (resul >= 7){
            printf("o aluno está acima da média com %f", resul);
    } if (resul < 7 && resul >= 5) {
        printf("o aluno está de recuperação com %f", resul);
    }

}