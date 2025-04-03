/*Fazer um programa que recebe três valores 
do usuário e depois encontra o maior e o menor número.  
Construa duas funções, uma para determinar o maior 
número e outra para determinar o menor número. */

#include <stdio.h>
#define L 3

void numeros(int valores[]);
void maior(int valores[]);
void menor(int valores[]);

int main(){
    int valores[L];

    numeros(valores);
    maior(valores);
    menor(valores);

}


void numeros(int valores[]){
    int x;

    for(x=0;x<3;x++){    
    printf("Digite o %d valor:", x+1);
    scanf("%d", &valores[x]);
    }
}



void maior(int valores[]){
    int x, maior=0;
    for(x=0;x<L;x++){
        if(valores[x]>maior){
            maior=valores[x];
        }
    }
    printf("\nVALOR MAIOR\n");
    printf("%d", maior);
}




void menor(int valores[]){
    int x, menor;
    for(x=0;x<L;x++){
        menor=valores[0];
        if(valores[x]<menor){
            menor=valores[x];
        }
    }
    printf("\nVALOR MENOR\n");
    printf("%d", menor);
}





