/*
RA: 0030481623024
ALUNO: JOHN VICTOR SOUSA SANTOS
TURMA: ADS 2016 - 2º Semestre

Linguagem de Progamação 1 - LP 1
*/

#include <stdio.h>
#include <string.h>

void imprimir_string(char v[16]);

int main(){
	char  v[16];
	char c[2] = "00";
	
	while(v[0] != c[1] && v[0] != c[1]){
		printf("Informe alguns caracteres:");
		scanf("%s", &v);
	
		imprimir_string(v);
	}
	
	
}
void imprimir_string(char v[16]){
	int w, x, y, z;
	int Meio;
	int Tamanho;
	int inicial;
	
	Tamanho = strlen(v);
	
	if(Tamanho%2==0){
		inicial=1;
		Meio =  (Tamanho/2);
		
		for(x=inicial; x<=Meio; x++){
			for(y=(Meio-x); y < Meio; y++)
				printf("%c", v[y]);
			for(z=Meio; z < (Meio+x); z++)
				printf("%c", v[z]);			
			printf("\n");
		}			
	}else{
		inicial=0;
		Meio =  (Tamanho/2)+0.5;
		
		for(x=inicial; x<=Meio; x++){
			for(y=(Meio-x); y < Meio; y++)
				printf("%c", v[y]);
			for(z=Meio; z <= (Meio+x); z++)
				printf("%c", v[z]);			
			printf("\n");
		}	
	}
	
}