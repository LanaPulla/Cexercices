/*A prefeitura de uma cidade fez uma pesquisa entre 
seus habitantes, coletando dados sobre 
o salário e  número de filhos. A prefeitura deseja saber: 
a. média do salário da população; 
b. média do número de filhos; 
c. maior salário; 
d. percentual de pessoas com salário até  R$1000,00. 
O final da leitura de dados se dará com a entrada de um salário negativo. 
*/

#include <stdio.h>

int main(){

    int i = 0;
    double  salario, salarioMenor, mediaSalario, salarioCont = 0, salarioMaior, filhosCont = 0, filhos, mediaFilhos, menorDeCem = 0, porcentagemMenor;

    do{
        printf("seu salario:");
        scanf("%lf", &salario);

        if(salario <= 0){
            break;
        }
        
        if(salario < 1000){
            menorDeCem++;
        }
        
        salarioCont+=salario;

        if(i == 0){
            salarioMaior = salarioMenor = salario;
             
        } 
        if(salario > salarioMaior){            
            salarioMaior = salario;
        }
        if(salario < salarioMenor){
            salarioMenor = salario;
        }
        
        printf("numero de filhos:");
        scanf("%lf", &filhos);
        filhosCont+=filhos;

        i++;
        

    }while(1);

    mediaSalario = salarioCont / i;
    mediaFilhos = filhosCont / i;
    porcentagemMenor = (menorDeCem * 100) / i;

    printf("%.2lf foi o salario menor\n", salarioMenor);
    printf("%.2lf foi o salario maior \n", salarioMaior);
    printf("%.2lf foi a media salarial \n", mediaSalario);
    printf("%.2lf foi a media de filhos\n", mediaFilhos);
    printf("%.2lf porcento de pessoas tem o salario menor do que 1000,00", porcentagemMenor);


}