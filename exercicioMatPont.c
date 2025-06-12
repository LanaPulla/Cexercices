#include <stdio.h>
#include <stdlib.h>

void preencher(int ***mat, int lin, int col);

int main(){
    int lin, col, x, y;
    int **mat;
    
    printf("digite quantas linhas tera a matriz:");
    scanf("%d", &lin);
     
    printf("digite quantas colunas tera a matriz:");
    scanf("%d", &col);
    
    preencher(&mat, lin, col);
    
    for(x=0;x<lin;x++){
        for(y=0;y<col;y++){
            printf("%d ", mat[x][y]);
        }
        printf("\n");
    }
    
}

void preencher(int ***mat, int lin, int col){
    int x, y;
    
    *mat = (int **) malloc(lin*sizeof(int *));
    
    if(*mat == NULL){
        printf("Erro na alocacao de memoria.\n");
    }
    
    for(x=0;x<lin;x++){
         (*mat)[x] = (int *)malloc(col * sizeof(int));
         if ((*mat)[x] == NULL) {
            printf("Erro na alocação de memória.\n");
        }
    }
    
    for(x=0;x<lin;x++){
        for(y=0;y<col;y++){
            printf("preencha cm um numero a matriz:");
            scanf("%d", &(*mat)[x][y]);
        }
    }
}