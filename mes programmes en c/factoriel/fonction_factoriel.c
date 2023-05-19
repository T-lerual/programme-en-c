#include <stdio.h>
int factoriel(int n);

int main (){
	int nombre,facto;
	
	do{
		printf("Entrez un nombre positif:");
		scanf("%d",&nombre);
	}while(nombre<0);
	
	facto=factoriel(nombre);
	printf("le factoriel de %d est :%d",nombre,facto);
	
	
	return 0;
}

int factoriel(int n){
	int i, f;
	
	f = 1;
	for(i=2;i<=n;i++){
		f = f * i;
	}
	return f;
}
