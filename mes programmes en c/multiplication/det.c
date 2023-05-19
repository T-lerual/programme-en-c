#include<stdio.h>
void tmultiplication(int n);
int main (void)
{
	int a;
	
	
	do
	{
		printf("entrer un nombre");
		scanf("%d",&a);
		
		
		
	}
	while(a<=0);
	tmultiplication(a);
	tmultiplication(5);
	tmultiplication(6);
	tmultiplication(7);
	
	
	
	
	
	
	
	return 0;
}

void tmultiplication(int n)
{
	int i;
	printf("la table de multiplication de %d est :\n",n);
	
	
	for (i=0;i<=12;i++)
	{
	
	printf("%d*%d=%d\n",n,i,n*i);
    }
	
	
}
	
	
	
	


