#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void conta(int B);

int main (){
	int testes;
	int B[testes], E[testes], x;
	
	printf("Informe a quantidade de casos de teste:");
	scanf("%i", &testes);
	
	for(x=0; x < testes; x++){
		printf("Informe B");
		scanf("%i", &B[x]);
		printf("Informe E");
		scanf("%i", &E[x]);
		
		printf("%i e %i\n", B[x], E[x]);
		
	}
	
}

void conta(int B){

}