#include <stdio.h>
#define L 6
#define C 6

int main(){
    int mat[L][C], lin, col, a, b, temp, A, B;

    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("preencha a matriz com %d numeros:", L*C);
            scanf("%d", &mat[lin][col]);
        }
    }

   do{
        printf("\ninforme uma linha para trocar:");
        scanf("%d", &a);

        printf("\ninforme uma linha para ser trocada com %d:", a);
        scanf("%d", &b);

        if(a>L || b>L){
            printf("\nLINHAS INVALIDAS\nDIGITE NOVAMENTE\n");
        } else{
            printf("\nLINHAS VALIDAS\n");
        }

   }while(a>L || b>L);



   printf("\nMATRIZ NORMAL\n");
   for(lin=0;lin<L;lin++){
       for(col=0;col<C;col++){
           printf("%d ", mat[lin][col]);
       }
       printf("\n");

   }

   A = a-1;
   B = b-1;

   for(lin=0;lin<L;lin++){
        temp = mat[A][lin];
        mat[A][lin] = mat[B][lin];
        mat[B][lin] = temp;
    }

    printf("\nMATRIZ TROCADA\n");
    for(lin=0;lin<L;lin++){
        for(col=0;col<C;col++){
            printf("%d ", mat[lin][col]);
        }
        printf("\n");

    }

}


















/*

PRIMEIRA QUESTAO

#include <stdio.h>
#include <string.h>

int main(){
    char nomeAluno[50];
    char resp[5];
    char fim[]="FIM";
    int x;
    float mediaAluno, notaAluno, y;
    int avaliacoes;

    do{
        
        printf("digite o numero de provas:");
        scanf("%d", &avaliacoes);
        fflush(stdin);

        printf("Nome do Aluno:");
        scanf("%49[^\n]", nomeAluno);
        
        for(x=0;x<avaliacoes;x++){
            printf("nota do(a) aluno(a) %s na avaliacao %d:", nomeAluno, x+1);
            scanf("%f", &y);
            notaAluno+=y;
        }
        
        mediaAluno = notaAluno / 2;

        if( mediaAluno < 7){
            printf("\n ALUNO REPROVADO COM MEDIA %.2f \n", mediaAluno);
        } else{
            printf("\n ALUNO APROVADO COM MEDIA %.2f \n", mediaAluno);
        }
        


        printf("\nquer Continuar(FIM para parar):");
        scanf("%s", resp);

    }while(strcmp(resp,fim) == 1);
   
    printf("\nPROGRAMA ENCERRADO");

}*/