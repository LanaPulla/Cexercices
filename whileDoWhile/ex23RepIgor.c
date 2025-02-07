/*Uma das maneiras de se conseguir calcular a raiz  
quadrada de um número é subtrair dele os números  
ímpares consecutivos a partir de 1, até que o resultado  
seja menor ou igual a zero. O número de vezes que se  
conseguir fazer as subtrações é a raiz quadrada. Faça 
um algoritmo que calcule a raiz quadrada de dado  
numero conforme essa regra. */


#include <stdio.h> 

int main(){

    int n;
    int i = 0;
    int um = 1;

    printf("digite um numero para descobrir a raiz:");
    scanf("%d", &n);

    do{
        n -= um;
        um+= 2;   
        i++;
        
        printf("%d\n", um);

        printf("%d\n", n);


    } while(n > 0);
        
    printf("a raiz quadrada do numero digitado e %d\n", i);

}