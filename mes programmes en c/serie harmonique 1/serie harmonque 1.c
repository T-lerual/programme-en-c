#include<stdio.h>
int factoriel(int n);
int main(void)
{
	float s=0.0;
	int i,nbre;
	do
	{
		printf("entrer un nombre positif");
		scanf("%d",&nbre);
    }
    while(nbre<0);
    for(i=1;i<=nbre;i++)
    {
    	
    	s+=(float) 1/factoriel(i);
	}
	printf("la somme des termes  de la serie harmonique est:%.2f",s);
		
		
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

	

