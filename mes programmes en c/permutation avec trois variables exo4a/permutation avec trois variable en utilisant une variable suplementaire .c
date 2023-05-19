#include<stdio.h>
int main(void)
{
	int a,b,c,z;
	printf("veuiller entrer votre premier nombre:");
	scanf("%d",&a);
		printf("veuiller entrer votre deuxieme nombre :");
	scanf("%d",&b);
		printf("veuiller entrer votre troisieme nombre:");
	scanf("%d",&c);
	z=a;
	a=c;
	c=b;
	b=z;
	printf("la nouvel valeur de a est:%d\n",a);
	printf("la nouvel valeur de b est :%d\n",b);
	printf("la nouvel valeur de c est :%d\n",c);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
