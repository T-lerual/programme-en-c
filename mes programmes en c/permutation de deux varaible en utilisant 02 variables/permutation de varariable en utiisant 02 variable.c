#include<stdio.h>
int main(void)
{
	int a,b;
	printf("veuiiler entrer votre premier nombre:");
	scanf("%d",&a);
	printf("veuiller entre votre deuxieme nombre:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("la nouvel valeur de a est:%d\n",a);
	printf("la nouvel valeur de b est:%d\n",b);
	return 0;

	
	
	
	
	
	
	
	
}
