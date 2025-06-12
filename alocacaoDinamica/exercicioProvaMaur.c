#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat;
    int lin, col, x, y;

    printf("digite o numero de linhas:");
    scanf("%d", &lin);

    printf("digite o numero de colunas:");
    scanf("%d", &col);

    mat = (int **) malloc(lin*sizeof(int *)); // Alocando memória para as linhas
    if(mat == NULL){
        printf("Erro na alocacao de memoria.\n");
    }

    // Alocando memória para as colunas de cada linha
    for(x=0;x<lin;x++){
         mat[x] = (int *)malloc(col * sizeof(int));
         if (mat[x] == NULL) {
            printf("Erro na alocação de memória.\n");
        }
    }

    for(x=0;x<lin;x++){
        for(y=0;y<col;y++){
            printf("preencha a matriz:");
            scanf("%d", &mat[x][y]);
        }
    }

      for(x=0;x<lin;x++){
        for(y=0;y<col;y++){
            printf("%d ", mat[x][y]);
        }
        printf("\n");
    }
    for (x = 0; x < lin; x++) {
        free(mat[x]);
    }
    free(mat);

}