/*Fazer um programa que recebe três valores 
do usuário e depois encontra o maior e o menor número.  
Construa duas funções, uma para determinar o maior 
número e outra para determinar o menor número. */

#include <stdio.h>

int maior(int x, int y, int z);
int menor(int x, int y, int z);

int main(){
    int x,y,z;

    printf("digite um valor para x:");
    scanf("%d", &x);

    printf("digite um valor para y:");
    scanf("%d", &y);
    
    printf("digite um valor para z:");
    scanf("%d", &z);

    int ma = maior(x,y,z);
    int me = menor(x,y,z);

    printf("o maior e: %d\n", ma);
    printf("o menor e: %d\n", me);


}

int maior(int x, int y, int z){
    int ma = 0;
    if(ma>x){
        ma = x;
    } else if(ma>y){
        ma = y;
    } else {
        ma = z;
    }

    return ma; 
}

int menor(int x, int y, int z){
    int me = x;
   if(y<me){
        me = y;
    } else if(z<me){
        me = z;
    }
    
    return me; 
}

/*
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

*/



