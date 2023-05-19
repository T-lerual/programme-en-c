#include<stdio.h>
#include<stdlib.h>
int  ale(int n);
int main(void)
{
	int charger,x;
	charger=ale(x);
}
int ale(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		n=rand()%100+1;
		printf("\nla valeur comprise dans l intervalle[1,100]est:%d\n",n);
	}
	return n;
}
