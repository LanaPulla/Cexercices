// #include <stdio.h>

// typedef struct{
//     int idade;
//     char nome[30];
// } pessoa;

// int main(){
//     pessoa p;
    
//     printf("digite uma idade:");
//     scanf("%d", &p.idade);
    
//     printf("digite seu nome:");
//     scanf("%s", p.nome);
    
//     printf("Seu nome e %s e vc tem %d anos", p.nome, p.idade);
// }
// #include <stdio.h>
// #define QTD 3

// struct data{ //Define a struct e seus elementos
//  int dia, ano;
//  char mes[20];
// };

// void exibe(struct data uma_data);

// int main(){
//  struct data i_data[QTD]; //Declara vetor de itens da struct
//  int x;
 
//  for(x=0;x<QTD;x++){
//  printf("\nDigite a %da data (dia/mes/ano):\n\n", x+1);
//  scanf("%d%s%d",&i_data[x].dia,&i_data[x].mes,&i_data[x].ano);
 
//  exibe(i_data[x]);
 
//  }
//  return 0;
// }

// void exibe(struct data uma_data){
//  printf("\nDia %d de %s de %d \n", uma_data.dia, uma_data.mes, uma_data.ano);
// }