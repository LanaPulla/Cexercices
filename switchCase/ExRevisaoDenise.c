#include <stdio.h>
#include <string.h>

int main(){
	
	char sim[6] = "sim";
	char resp[10];
	char menu[5];
	int valor1, valor2, conta;
	
	
	do{
		
		printf("digite um valor:");
		scanf("%d", &valor1 );
		
		
		printf("digite novamente um valor:");
		scanf("%d", &valor2 );
		
		printf(" s- somar os valores \n d- difença dos valores \n p- produto entre os valores \n qual opcao gostaria?");
		scanf("%s", menu);
		
		switch(menu[0]){
			
			case 's':
				conta = valor1+valor2;
				printf("o valor da soma é %d\n", conta);
				break;
				
			case 'd':
				if(valor1>valor2){
					conta = valor1 - valor2;
					printf("o valor da diferenca é %d\n", conta);
				} else{
					conta = valor2 - valor1;
					printf("o valor da diferenca é %d\n", conta);
				}
				break;
				
			case 'p':
				conta = valor1 * valor2;
				printf("o valor do produto entre os numeros e %d\n", conta);
				break;
		}
		
		printf("quer continuar(sim/nao):");
		scanf("%s", resp);
		
	}while(strcmp(sim,resp) == 0);
	
	printf("ADEUS");
	
	return 0;
}