/*
RA: 0030481623024
ALUNO: JOHN VICTOR SOUSA SANTOS
TURMA: ADS 2016 - 2º Semestre

Linguagem de Progamação 1 - LP 1
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void conta_string(int testes, char caracteres[testes][100]);

int main(){
	int testes;
	char caracteres[testes][100];
	int x;

	scanf("%i", &testes);

	for(x=0; x < testes; x++)
		scanf("%s", &caracteres[x]);
	
	conta_string(testes, caracteres);
	
}

void conta_string(int testes, char caracteres[testes][100]){
	int x, y, z;
	int maior;
	int num_vezes=0;	
	int index = 0;
	int int_maiores[testes][100];
	char char_maiores[testes][100];
	bool naAray = false;
	
	for(z=0; z < testes; z++){
		for(y=0; y < strlen(caracteres[z]); y++){
			for(x=0; x < strlen(caracteres[z]); x++){
				if(caracteres[z][y] == caracteres[z][x])
					num_vezes++;
			}
			
			for(x=0; x <= index; x++){
				if(caracteres[z][y] == char_maiores[z][x])
					naAray = true;
			}
			
			if(naAray == false){
				char_maiores[z][index] = caracteres[z][y];
				int_maiores[z][index] = num_vezes;
				index++;
			}
			naAray = false;
			num_vezes=0;
		}
		
		index=0; 			
		maior = int_maiores[z][0];

		for(x=0; x < strlen(char_maiores[z]); x++){
			if (int_maiores[z][x] > maior){
				maior = int_maiores[z][x];
			}
		}
		
		for(x=0; x < strlen(char_maiores[z]); x++)
			if (int_maiores[z][x] == maior)
				printf("%c", char_maiores[z][x]);
			printf("\n");
	}
}