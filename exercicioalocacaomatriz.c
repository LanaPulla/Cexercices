#include <stdio.h>
#include <stdlib.h>

void preencher(int **mat, int lin, int col);

int main(){
    int x, y, lin, col, **mat;
    
    printf("quantas linhas terao a matriz:");
    scanf("%d", &lin);
      
    printf("quantas colunas terao a matriz:");
    scanf("%d", &col);
    
    mat = (int **) malloc(lin*sizeof(int*));
    
    for(x=0;x<lin;x++){
        mat[x] = (int*) malloc(col*sizeof(int));
    }
    preencher(mat,lin,col);
    
    for(x=0;x<lin;x++){
        for(y=0;y<col;y++){
            printf("%d ", mat[x][y]);
        }
        printf("\n");
    }
}

void preencher(int **mat, int lin, int col){
    int x, y;
    printf("\nPREENCHER MATRIZ\n");
    for(x=0;x<lin;x++){
        for(y=0;y<col;y++){
            printf("preencha a posicao [%d][%d] da matriz", x, y);
            scanf("%d",&mat[x][y]);
        }
    }
}
