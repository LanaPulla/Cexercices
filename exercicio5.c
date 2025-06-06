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


