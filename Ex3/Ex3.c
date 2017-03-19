#include <stdio.h>
#include <string.h>

void conta_string(int testes, char caracteres[testes][100]);

int main(){

	int testes;
	char caracteres[testes][100];
	int x;
	
	printf("Informe a quantidade de casos de teste:");
	scanf("%i", &testes);

	for(x=0; x < testes; x++)
		scanf("%s", &caracteres[x]);
	
	conta_string(testes, caracteres);
	
}

void conta_string(int testes, char caracteres[testes][100]){
	int num_vezes=0;	
	int x, y, z;
	char char_maiores[100];
	char maiores[100];
	int int_maiores[100];
	int maior;
	int index = 0;
	
	for(z=0; z < testes; z++){
		for(y=0; y < strlen(caracteres[z]); y++){
			for(x=0; x < strlen(caracteres[z]); x++){
				if(caracteres[z][x] == caracteres[z][y])
					num_vezes++;
			}
			
			char_maiores[y] = caracteres[z][y];
			int_maiores[y] = num_vezes;	
			num_vezes=0;
		}
		
		maior = int_maiores[0];

		for(x=0; x < strlen(caracteres[z]); x++){
			if (int_maiores[x] > maior){
				maior = int_maiores[x];
			}
		}
		
		for(x=0; x < strlen(caracteres[z]); x++)
			if (int_maiores[x] == maior)
				printf("%c", char_maiores[x]);
			printf("\n");
	}
}