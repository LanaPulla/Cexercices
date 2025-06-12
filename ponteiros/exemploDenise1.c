#include <stdio.h>

int main(){  
    int *px, x=100, q; 
     px = &x; //px recebe o endereço de x  
     q = *px; //q recebe o valor apontado por px  
     printf("px = %d\n", px); //imprime o endereço de x  
     printf("*px = %d\n", *px); //imprime o conteúdo da variável             
     //apontada pelo ponteiro 
      printf("&px = %d\n", &px); //imprime o endereço de px   
       printf("x = %d\n", x); //imprime o conteúdo de x    
       printf("&x = %d\n", &x); //imprime o endereço da variável x    
       printf("q = %d\n", q); //Imprime o conteúdo da variável q  return 0; 
       } 


// int main(){
//    int *ponteiro, x, q, *y;

//    printf("digite um numero:");
//    scanf("%d", &x);

//    ponteiro = &x; //ponteiro armazena com &

//    q = *ponteiro; //valor que o ponteiro esta apontando

//    y = &ponteiro; //ponteiro de ponteiro

//     printf("p: %d\n", &ponteiro);
//     printf("q: %d\n", q);
//     printf("x: %d\n", x);
//     printf("y: %d\n", y);

// }