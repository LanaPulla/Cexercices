/*leia o nome de 3 pessoas e imprima sem usar spritf()*/

#include <stdio.h>
#include <string.h>
int main(){

    char nome1[15], nome2[15], nome3[15];

    printf("nome do colege 1:");
    scanf("%s", nome1);

    printf("nome do colege 2:");
    scanf("%s", nome2);
    
    printf("nome do colege 3:");
    scanf("%s", nome3);

    printf("%s, %s, %s sao colegas de faculdade", nome1, nome2, nome3);

}