#include<stdio.h>
int main(void)
{
	int a,b;
	printf("veuiller entrer votre premiere valeur:");
	scanf("%d",&a);
	printf("veuiller entrer votre deuxieme valeur:");
	scanf("%d",&b);
	
	while(a!= b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		
		{
			b=b-a;
		}
				
	}
		
		
	printf("le pgcd est :%d ",a,b);	
		
		
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
