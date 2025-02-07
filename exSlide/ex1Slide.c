/*faça um programa que le os nomes de duas entradas e suas idades
dps mostre os nomes, suas idades e quantos caracteres 
tem juntos os nomes*/

#include <stdio.h>
#include <string.h>

int main(){

    char nome1[20], nome2[20];
    int idade1, idade2, carac;

    printf("primeiro nome da pessoa 1:");
    scanf("%s", nome1);

    printf("idade da pessoa 1:");
    scanf("%d", &idade1);

    printf("primeiro nome da pessoa 2:");
    scanf("%s", nome2);

    printf("idade da pessoa 2:");
    scanf("%d", &idade2);

    carac = strlen(nome1) + strlen(nome2); 

    printf("%s tem %d anos e %s tem %d anos. Seus nomes somam %d caracteres", nome1, idade1, nome2, idade2, carac);


}