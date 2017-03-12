#include <stdio.h>
#include <string.h>

int main(){

	char  v[16];
	int Meio;
	int Meio2;
	int Tamanho;
	int x, y, z;
	char txtMeio;
	
	printf("Informe alguns caracteres:");
	scanf("%s", &v)	;
		
	Tamanho = strlen(v);
		 
	//printf("%i\n", Tamanho); //imprimir tamanh da string
		 
	if(Tamanho%2==0){
		Meio =  (Tamanho/2)-1;
		Meio2 = Tamanho/2;
		printf("%c e %c", v[Meio], v[Meio2]);
	}else{
		Meio =  (Tamanho/2)+0.5;
		Meio2 = Meio;		
	}
		
	for(x=0; x<=Meio; x++){
		for(y=(Meio-x); y < Meio; y++)
			printf("%c", v[y]);
		for(z=Meio; z <= (Meio+x); z++)
			printf("%c", v[z]);
		
		printf("\n");
	}
}