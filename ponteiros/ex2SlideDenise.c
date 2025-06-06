/* Faça uma função que leia um número não determinado de valores 
reais  positivos e retorna a média aritmética dos mesmos. Ao final, 
o programa principal deverá imprimir a quantidade de números lidos e a média. 
Utilize passagem de parâmetro por referência para o que for necessário.  */

#include <stdio.h>
#include <string.h>

float media(float *pont, float *pont2);

int main()
{
float x = 0, y = 0, i = 0;
char sim[]= "s";
char resp[5];

 do{
i++; 
printf("Digite um numero:");
scanf("%f", &x);
if(x<0){
do{ 
printf("numero negativo inválido\n");
printf("Digite um numero:");
scanf("%f", &x);
}while(x<0);
}
y+=x;
printf("Quer continuar?(s/n)");
scanf("%s", resp);

}while(strcmp(sim,resp) == 0);
printf("i:%.2f\n", i);
printf("y:%.2f\n", y);
printf("y/i: %.2f\n", y/i);

printf("\nfuncao: %.2f", media(&y, &i));

return 0;
}

float media(float *pont, float *pont2){
return *pont / *pont2;
}