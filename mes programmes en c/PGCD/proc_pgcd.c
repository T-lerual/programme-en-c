#include<stdio.h>

void pgcd(int a,int b );
int main(void)
{
	int p,q;
	printf("veuiller entrer la valeur de a: ");
	scanf("%d",&p);
	printf("veuiller entrer la valeur de b:");
	scanf("%d",&q);
	pgcd(p,q);
//	pgcd(900,600);
//	pgcd(700,500);
//	pgcd(50,150);
//	pgcd(90,78);
	pgcd(20,45);
	
return 0;
}
void pgcd(int a,int b)
{
	printf("le pgcd de %d et %d est:",a,b);
	while(a!=b)
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
    printf("%d\n",a,b);
		
}
		
		
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



 



	    
	    
	    	
	    	 
		
		
	
		
		
		
	
	

