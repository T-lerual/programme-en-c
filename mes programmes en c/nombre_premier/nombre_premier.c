#include<stdio.h>
int main(void)
{
	int n,i,div;
	div=0;
	i=1;
	printf("veuiller entrer un nombre: ");
	scanf("%d",&n);
	while(i<=n)
	{
		 if(n%i==0)
		 {
		 	div=div+1;
		 }
		i=i+1;
	}
	if(div==2)
	{
		 printf("le nombre %d est  premier!!",n);
	}
	else
	{
		  printf("le nombre %d nest  pas premier !!",n);
	}	
	return 0;	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


