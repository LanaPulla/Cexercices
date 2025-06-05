#include <stdio.h>

int troca(int *pont, int *pont2, int vet[2]);

int main(){
    int x, y, vet[2];
    
    printf("Digite um valor para x:");
    scanf("%d", &x);
    
    printf("Digite um valor para y:");
    scanf("%d", &y);
    troca(&x,&y, vet);
    
    printf("Os valores trocados sao:\nx:%d\ny:%d", vet[0], vet[1]);
}

int troca(int *pont, int *pont2, int vet[2]){
    int trocados;
    
    trocados = *pont;
    *pont = *pont2;
    *pont2 = trocados;
    
    vet[0] = *pont;
    vet[1] = *pont2;
}



#include <stdio.h>
#include <string.h>


void menu(int *pont);
void cadastrar();
void listarTodos(int *pont);
void pesquisar(int *pont);

int main(){
int vet[5];
menu(vet);

}

void menu(int *pont){
 int opcao;
char sim[]="sim";
 char resp[5];

do{
 printf("MENU\n");
printf("1-Cadastrar elementos\n2-Listar Elementos\n3-Pesquisar elemento");
printf("\nescolha uma das opcoes:\n");
scanf("%d", &opcao);

switch(opcao){
case 1:
printf("opcao 1\n");
cadastrar(pont);
break;
case 2:
printf("opcao 2\n");
listarTodos(pont);
break; 
case 3:
printf("opcao 3\n");
 pesquisar(pont);
 break; 
 }

printf("Quer voltar para o menu?(sim/nao)");
 scanf("%s", resp);
 
 }while(strcmp(sim,resp)==0);
}

void cadastrar(int *pont){
int x;

for(x=0;x<5;x++){
printf("Digite 5 valores:");
scanf("%d", &pont[x]);
 }
}

void listarTodos(int *pont){
int x; 
 for(x=0;x<5;x++){
 printf("%d\n", pont[x]);
 }
}

void pesquisar(int *pont){
int x, y;

printf("Qual valor quer pesquisar:");
 scanf("%d", &y);
 
 for(x=0;x<6;x++){
 if(pont[x] == y){
    printf("valor encontrado: %d\n", pont[x]);
 }
 }
 

}

