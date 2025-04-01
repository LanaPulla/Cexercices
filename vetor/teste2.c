#include <stdio.h>
#include <string.h>

/*#define LIN 3
#define COL 20

int main(){
	
	int x, y;
	char nomeS[LIN][COL];
	
	
	for(x=0;x<LIN;x++){
		printf("digite 3 nomes:");
		scanf("%19[^\n]s", nomeS[x]);
		fflush(stdin);
	
	}
		for(x=0;x<LIN;x++){
			printf("%s\n", nomeS[x]);
	}
	
	printf("\nCARACTER\n");
		
		for(x=0;x<LIN;x++){
		
			for(y=0;y<strlen(nomeS[x]); y++){
				printf("%c", nomeS[x][y]);
			}
			printf("\n");

	}
	return 0;	
}*/
//Faça um programa que leia um vetor de reais de 10 posições e 
//apresente seus números na tela separados por espaços.

int main(){
	
	int vet[10], x;
	
	for(x=0;x<10;x++){
		printf("Digite um valor:");
		scanf("%d", &vet[x]);
	}
	for(x=0;x<10;x++){
		printf("%d, ", vet[x]);

	 }
}


