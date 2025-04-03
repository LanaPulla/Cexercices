#include <stdio.h>
#define T 3

void soma(int vet[]);
void leia(int vet[]);

int main(){
	int vet[T]; 
	
	leia(vet);
	soma(vet);
	return 0;
}

void soma(int vet[]){
	int x, soma1=0;
	
	for(x=0;x<T;x++){
		soma1+=vet[x];
	}
	printf("Soma: %i", soma1);
	
}

void leia(int vet[]){
	int x;
	printf("digite %i valores:", T);
	for(x=0;x<T;x++){
		scanf("%i", &vet[x]);
	}
	
}
