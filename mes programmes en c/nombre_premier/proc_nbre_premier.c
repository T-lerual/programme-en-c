#include<stdio.h>
void nombre_premier(int n);
int main(void)
{
	int a ;
	printf("veuiller entrer votre nombre:");
	scanf("%d",&a);
	nombre_premier(a);
	nombre_premier(4);
	nombre_premier(5);
	nombre_premier(100);
	
	
	
	
	return 0;
}
void nombre_premier(int n)
{
	int div,i;
	div=0;
	i=1;
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
		printf("le nombre %d est premier\n",n);
	}
	else
	{
		 printf("le nombre %d nest pas premier\n",n);
	}
	
	
	
	
	
}
