/*Escreva um algoritmo que leia o valor unitário, a quantidade vendida de um produto 
e apresente o valor total da venda. Caso o valor total da venda seja superior a R$ 100,00 
mostrar a mensagem “Bonificação de 10% para o vendedor!”. */

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float produto, conta, quantidade, porcentagem;

    printf("-----------------------\n");
    printf("vamos calcular o valor de venda do produto X e sua bonificação\n");
    printf("-----------------------\n");
    printf("informe o valor do produto:\n");
    scanf("%f", &produto);

    printf("quantas compras foram feitas:\n");
    scanf("%f", &quantidade);

    conta = produto * quantidade;

    porcentagem = conta / 10;
    

    if(conta >= 100){
        printf("o cliente recebe bonificação de 10 porcento do valor %f\n", conta);
        printf("valor da bonificação:%f", porcentagem);
    } else{
        printf("o cliente não recebe bonificação de 10 porcento do valor %f", conta);

    }

}