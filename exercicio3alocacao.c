/*Escreva um programa que leia primeiro os 6 números 
gerados pela loteria e depois os 6 números do
seu bilhete. O programa então compara quantos números
 o jogador acertou. Em seguida, ele aloca espaço
para um vetor de tamanho igual à quantidade de números 
corretos e guarda os números corretos nesse
vetor. Finalmente, o programa exibe os números sorteados
 e os seus números corretos*/
#include <stdio.h>
#include <stdlib.h>

void sorteados( int *pont, int tamanho);
void bilhete( int *pont, int tamanho);
void acertos( int *pont, int *pont2, int **vetAcer, int *qnt);

int main() {
	int vetSort[6];
	int vetBilh[6];
	int *vetAcer;
	int qnt = 0, x;

	sorteados(vetSort, 6);
	bilhete(vetBilh, 6);
    acertos(vetSort, vetBilh, &vetAcer, &qnt);

    printf("\nVETOR ACER:\n");
    for(x=0;x<qnt;x++){
        printf("%d ", vetAcer[x]);
    }

	return 0;
}

void acertos( int *pont, int *pont2, int **vetAcer, int *qnt) {
	int x, y, v, i=0, vetTemp[6]={0};

	printf("\nDIGITOS QUE VOCE ACERTOU\n");
	for(x=0; x<6; x++) {
		for(y=0; y<6; y++) {
			if(pont[x] == pont2[y]) {
			    vetTemp[*qnt] = pont[x];
				(*qnt)++;
				printf("voce acertou o numero: %d\n", pont[x]);
			}
		}
	}
	
	*vetAcer = (int*) malloc((*qnt)*sizeof(int));
	
	for(x=0; x<(*qnt); x++) {
		(*vetAcer)[x] = vetTemp[x];
	}

}

void sorteados( int *pont, int tamanho) {
	int x;

	printf("\nDIGITOS DO BILHETE SORTEADO\n");
	for(x=0; x<tamanho; x++) {
		printf("sorteado %d:", x+1);
		scanf("%d", &pont[x]);
	}

	printf("\nvetor sorteado:\n");
	for(x=0; x<tamanho; x++) {
		printf("%d ", pont[x]);
	}
}

void bilhete( int *pont, int tamanho) {
	int x;

	printf("\nDIGITOS DO SEU BILHETE\n");
	for(x=0; x<tamanho; x++) {
		printf("numero %d do bilhete:", x+1);
		scanf("%d", &pont[x]);
	}

	printf("\nvetor do seu bilhete:\n");
	for(x=0; x<tamanho; x++) {
		printf("%d ", pont[x]);
	}
}
