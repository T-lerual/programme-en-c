#include<stdio.h>
int factoriel(int n);
int main(){
	int q,changer;
	do{   
	    printf("veuiller entrer un nombre positif ");
	    scanf("%d",&q);		
	}
	while(q<0);
	changer = factoriel(q);
	printf("le factoriel de %d est :%d",q,changer);
	return 0;	
}

int factoriel(int n){
	int facto;
	facto=1;
	if(n>1)
	{
		facto=n*factoriel(n-1);
		
		
	}
	return facto;
}

