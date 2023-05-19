#include<stdio.h>
int main(void)
{
	int i,facto ,n;
	do
	{
	
   	printf("veuiller entrer un nombre positf:");
   	scanf("%d",&n);
   }
   while(n<0);
   
		facto=1;
		for(i=2;i<=n;i++)
		{
		   facto=facto*i;
     	}
		printf("le factoriel de %d est:%d",n,facto);	
	
	return 0;
}
