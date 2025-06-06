


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

