/*O custo ao consumidor de um carro novo é a soma do preço 
de fábrica com o percentual de lucro do
distribuidor e dos impostos aplicados ao preço de fábrica. F
aça um programa que recebe o preço de fábrica de
um veículo, o percentual de lucro do distribuidor e o 
percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    double valor, lucro, imposto, percLu, percIm, final;

    printf("qual o valor de fabrica do veiculo:");
    scanf("%lf", &valor);
 
    printf("qual o percentual de lucro:");
    scanf("%lf", &lucro);

    printf("qual o percentual de imposto:");
    scanf("%lf", &imposto);   

    percLu = (valor * lucro) / 100; //valor de lucro

    percIm= (valor * imposto) / 100; //valor do imposto
    
    final = valor + percIm + percLu; 

    printf("o valor correspondente ao lucro do distribuidor: %.3lf\n", percLu);
    printf("o valor correspondente aos impostos: %.3lf\n", percIm);
    printf("o preco final do veiculo: %.3lf\n", final);

}