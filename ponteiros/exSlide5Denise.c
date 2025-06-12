/* Faça uma função que recebe 2 vetores A e B de tamanho 10 de 
inteiros, por parâmetro. Ao final, o vetor B deve conter o 
fatorial de cada elemento de A e retornar alterado para o programa 
principal.  Implemente outra função para o cálculo do fatorial, 
que recebe como parâmetro a referência a um valor contido no 
vetor (com ponteiro). Utilize esta função para o cálculo do fatorial 
de todos os valores de A. 
No final, o programa principal deverá imprimir os dois vetores.  */
#include <stdio.h>

void recebe(int *pont, int *pont2);
int fatorial(int *pont);

int main(){
    int x;
    int vetA[5];
    int vetB[5]={0};

    for(x=0;x<5;x++){
        printf("digite 5 valores:");
        scanf("%d", &vetA[x]);
    }
    
    recebe(vetA, vetB);
    
    printf("\nVetor A: ");
    for(x = 0; x < 5; x++) {
        printf("%d ", vetA[x]);
    }

    printf("\nVetor B (fatoriais): ");
    for(x = 0; x < 5; x++) {
        printf("%d ", vetB[x]);
    }

    return 0;
}

void recebe(int *pont, int *pont2){
    int x;
    
    for(x=0;x<5;x++){
        pont2[x] = fatorial(&pont[x]);
    }
   
}

int fatorial(int *pont){
    int x, y = 1;
    
    for(x=1;x<=*pont;x++){ //para x=1 e x menor que o valor armazenado no ponteiro, faça, y * o valor do x (ate ser = ao valor do ponteiro)
            y *= x;
    }
    
    return y;
}


