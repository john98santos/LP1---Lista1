/*
RA: 0030481623024
ALUNO: JOHN VICTOR SOUSA SANTOS
TURMA: ADS 2016 - 2º Semestre

Linguagem de Progamação 1 - LP 1
*/

#include <stdio.h>

void Funcao (int tab_int[100], char tab_char[100], int QtdeLeituras);

int main(){
	
	int tab_int [100];
	char tab_char[100];
	
	int QtdeLeituras = 0;
	int x;

	scanf("%i", &QtdeLeituras);

	if(QtdeLeituras <1)
		printf("Voce nao informou um numero valido");

	for (x = 0; x < QtdeLeituras; x++)
		scanf("%i", &tab_int[x]);
	 
	scanf("%s", tab_char);
	
	Funcao(tab_int, tab_char, QtdeLeituras);

}

void Funcao (int tab_int[100], char tab_char[100], int QtdeLeituras){
	int x, y;
	
	for(x=0; x < QtdeLeituras ; x++){
		for(y=0; y < tab_int[x]; y++)
			printf("%c", tab_char[x]);
		printf("\n");
	}		
}
