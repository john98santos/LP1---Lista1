#include <stdio.h>
#include <string.h>

void funcao(char v[16]);

int main(){

	char  v[16];
	
	printf("Informe alguns caracteres:");
	scanf("%s", &v);
	
	//if (v != "00")
		funcao(v);
	
	//printf("Fechou");
	
}
void funcao(char v[16]){
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