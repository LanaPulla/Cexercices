#include <stdio.h>
#include <stdlib.h>

void preencher(int **mat, int lin, int col);
void procurar(int **mat, int lin, int col);

int main(){
    int col, lin, x, y;
    int **mat;
    
    printf("digite um numero par para a linha da matriz:");
    scanf("%d", &lin);
    
    if(lin % 2 != 0 ){
        do{
            printf("\nNUMERO IMPAR INVALIDO\n");
            printf("digite um numero par para a linha da matriz:");
            scanf("%d", &lin);
        }while(lin % 2 != 0);
    }
    printf("digite um numero par para a coluna da matriz:");
    scanf("%d", &col);
    
    if(col % 2 != 0 ){
        do{
            printf("\nNUMERO IMPAR INVALIDO\n");
            printf("digite um numero par para a coluna da matriz:");
            scanf("%d", &col);
        }while(lin % 2 != 0);
    }
    
    mat = (int **) malloc(lin*sizeof(int));
     if (mat[x] == NULL) {
        printf("Erro na alocação de memória.\n");
    }
    
    
     for(x=0;x<lin;x++){
        mat[x] = (int *)malloc(col * sizeof(int));
        if (mat[x] == NULL) {
            printf("Erro na alocação de memória.\n");
        }
    }
    
    preencher(mat, lin, col);
    procurar(mat, lin, col);

    
}

void procurar(int **mat, int lin, int col){
    int x, y;
    for(x=0;x<lin;x++){
        for(y=0;y<col;y++){
            if(mat[x][y] >= 30){
                printf("valor maior que 30 encontrado: %d\n", mat[x][y]);
            }
        }
    }
    
}

void preencher(int **mat, int lin, int col){
    int x, y;
    
    for(x=0;x<lin;x++){
        for(y=0;y<col;y++){
            printf("preencha a posicao [%d][%d] da matriz:", x, y);
            scanf("%d", &mat[x][y]);
        }
    }
}
