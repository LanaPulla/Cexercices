/*Faça um programa que leia um vetor de inteiros, 
positivos ou negativos, com 8 posições. 
Crie e mostre dois vetores resultantes, 
um contendo somente os números positivos e 
o outro somente os negativos. */

#include <stdio.h>

int main() {

    int vet[3], vetPos[3], vetNeg[3], x, y=0, z=0;

    for(x=0;x<3;x++){

        printf("digite um numero:");
        scanf("%d", &vet[x]);

    }

    for(x=0;x<3;x++){

        if(vet[x] > 0){

            vetPos[y] = vet[x];
            y++;

        } else{

            vetNeg[z] = vet[x];
            z++;

        }
    }

    printf("\nNUMEROS POSITIVOS");
    for(x=0;x<y;x++){
        
        printf(" %d ", vetPos[x]);

    }
    
    printf("\nNUMEROS NEGATIVOS");
    for(x=0;x<z;x++){
        
        printf(" %d ", vetNeg[x]);
        
    }

}



























 /* int vet[6], vetPos[6], vetNeg[6];
    int x, y = 0, z = 0;

    for(x = 0; x < 6; x++) {
        printf("Digite um número: ");
        scanf("%d", &vet[x]);
    }

    for(x = 0; x < 6; x++) {
        if(vet[x] > 0) {
            vetPos[y] = vet[x];
            y++;
        } else {
            vetNeg[z] = vet[x];
            z++;
        }
    }

    printf("\nNumeros positivos: ");
    for(x = 0; x < y; x++) {
        printf("%d ", vetPos[x]);
    }

    printf("\nNumeros negativos: ");
    for(x = 0; x < z; x++) {
        printf("%d ", vetNeg[x]);
    }

    return 0;*/
