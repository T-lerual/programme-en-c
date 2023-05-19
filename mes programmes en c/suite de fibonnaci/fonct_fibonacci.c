#include<stdio.h>
int fibonacci(int n);
int main(void)
{
	int n;
	int i;
	do
	{
		printf("veuiller entrer votre nombre:");
		scanf("%d",&n);
	}
	while(n<0);
		printf("%d",fibonacci(n));
}
int fibonacci(int n)
{
	if(n<2)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}

}
