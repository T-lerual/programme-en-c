#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("veuiller entre la valeur de a: ");
	scanf("%d",&a);
		printf("veuiller entre la valeur de b: ");
	scanf("%d",&b);
		printf("veuiller entre la valeur de c:: ");
	scanf("%d",&c);
	a=a+b+c;
	b=a-(b+c);
	c=a-(b+c);
	a=a-(b+c);
	printf("la nouvel valeur de a est: %d\n",a);
	printf("la nouvel valeur de b est: %d\n",b);
	printf("la nouvel valeur de c est: %d\n",c);
	return 0;
	
	
	
	
	
	
}
