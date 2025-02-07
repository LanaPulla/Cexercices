/*Faça um programa que leia o código, sexo e o número  de horas 
trabalhadas de cada funcionário de uma  empresa e informe o salário bruto e o 
salário líquido  de cada um. Ao final da execução seu programa  deverá informar também a
média dos salários líquidos  dos funcionários do sexo masculino e do sexo  feminino. 
Para elaborar seu programa considere que: 
a. Cada funcionário recebe R$ 26,90 por  hora trabalhada. 
b. O salário líquido dos homens tem um  desconto de 10%, e das mulheres de 6%; 
c. As entradas de dados terminarão quando  for informado o código de usuário -11. */

#include <stdio.h>
#include <string.h>

int main(){

    char f[] = "f";
    char m[] = "m";
    char sexo[5];
    int codigo = 0, mediaF = 0, mediaM = 0;
    double horas,valorHoraF, valorLiqF, valorLiqM, valorHoraM, porcentagem, salariosF = 0, salariosM = 0, contaMediaF, contaMediaM;

    do{
        printf("codigo do funcionario:");
        scanf("%d", &codigo);

        if (codigo == -11){
            break;
        }

        printf("sexo do funcionario(f/m):");
        scanf("%s", sexo);

        printf("horas trabalhadas do funcionario:");
        scanf("%lf", &horas);

        if(horas > 0 && strcmp(sexo,f) == 0){
            mediaF++;
            valorHoraF = horas * 26.90;
            salariosF+=valorHoraF;
           
            printf("o valor bruto do salario e: %.3lf \n", valorHoraF);
            
            porcentagem = (valorHoraF/10) * 0.6; 
            valorLiqF = valorHoraF - porcentagem ;
        
            printf("o valor liquido do salario e: %.3lf\n", valorLiqF);

        } 
        if(horas > 0 && strcmp(sexo,m) == 0){
            mediaM++;
            valorHoraM = horas * 26.90;
            salariosM+=valorHoraM;

            printf("o valor bruto do salario e:%.2lf\n", valorHoraM);
            porcentagem = valorHoraM * 0.1;
            valorLiqM = valorHoraM - porcentagem;
            
            printf("o valor liquido do salario e: %.3lf\n", valorLiqM);

        } 

    }  while(1);

       

    contaMediaF = salariosF / mediaF;
    contaMediaM = salariosM / mediaM;

    printf("media salarial bruta feminina %.3lf\n", contaMediaF);
    printf("media salarial bruta masculina %.3lf\n", contaMediaM);

}
