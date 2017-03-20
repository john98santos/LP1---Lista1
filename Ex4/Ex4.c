/*
RA: 0030481623024
ALUNO: JOHN VICTOR SOUSA SANTOS
TURMA: ADS 2016 - 2º Semestre

Linguagem de Progamação 1 - LP 1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void espelho(int testes, int B[testes], int E[testes]);

int main (){
	int testes;
	int B[testes];
	int E[testes];
	char char_numeros[testes][500][3];
	int x;

	scanf("%i", &testes);
	
	for(x=0; x < testes; x++){
		scanf("%i", &B[x]);
		scanf("%i", &E[x]);		
	}
	
	espelho(testes, B, E);
}

void espelho(int testes, int B[testes], int E[testes]){
	int int_numeros[testes][500];
	char char_numeros[testes][500][3];
	int x, y, z, k=0;	
	
	for(z=0; z < testes; z++){		
		for(x=B[z]; x <= E[z]; x++){
			int_numeros[z][k] = x;	
			printf("%i", int_numeros[z][k]);			
			sprintf(char_numeros[z][k], "%i", int_numeros[z][k]);				
			k++;		
		}	
	
		for(y=k-1; y >= 0; y--){
			for(x=strlen(char_numeros[z][y])-1; x >= 0; x--){	
				printf("%c", char_numeros[z][y][x]);				
			}	
		}
		printf("\n");
		k=0;		
	}	
}