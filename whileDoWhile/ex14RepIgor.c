/* Faça um programa no qual o usuário insira valores  
numéricos positivos até digitar -1 e ao 
final informe  entre os números digitados 
quantos são: 
(a) múltiplos  de 2 e 5, simultaneamente; 
(b) múltiplos de 2 e 3. */

#include <stdio.h>
#include <math.h>

int main(){

    float n, multDC, multDT;

    do{
        printf("digite um numero:");
        scanf("%f", &n);

        if(fmod(n, 2) == 0 && fmod(n, 5) == 0){
            multDC++;
        } else if(fmod(n, 2) == 0 && fmod(n, 3) == 0){
            multDT++;
        }

    } while(n > -1 );

    printf("vc digitou %.2f numeros multiplos de 2 e 5\n", multDC);
    printf("vc digitou %.2f numeros multiplos de 2 e 3", multDT);


}
