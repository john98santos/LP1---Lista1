#include <stdio.h>

int main(){
	
	int tab_int [100];
	char tab_char[50];
	int Vezes = 0; 
	
	int QtdeLeituras = 0;
	int x = 0;
	int y = 0;

	scanf("%i", &QtdeLeituras);

	if(QtdeLeituras <1)
		printf("Voce nao informou um numero valido");

	for (x = 0; x < QtdeLeituras; x++)
		scanf("%i", &tab_int[x]);
	 
	scanf("%s", tab_char);
	
}

