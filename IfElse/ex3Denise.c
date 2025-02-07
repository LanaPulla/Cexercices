/*Construa um programa que leia o nome e o sexo de uma pessoa e construa e 
apresente uma string com o texto
“BOM DIA SR. <NOME>” caso o sexo seja masculinho, e “BOM DIA SRA. <NOME>” 
caso o sexo seja feminino.*/

#include <stdio.h>
#include <string.h>

int main(){

    char nome[15], sexo[9];

    printf("digite seu primeiro nome:");
    scanf("%s", nome);

    printf("digite sexo(feminino/masculino):");
    scanf("%s", sexo);


    char sexoF[] = "feminino";
    char sexoM[] = "masculino";

    if(strcmp( sexo, sexoF) == 0){
        printf("BOM DIA SRA %s", nome);
    }
    else if(strcmp( sexo, sexoM) == 0){
        printf("BOM DIA SR %s", nome);
    }

}
