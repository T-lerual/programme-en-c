#include<stdio.h>
int main(void)
{
	int n,op,opp,u,i;
	do
	{
		printf("veuiller entrer votre nombre");
		scanf("%d",&n);
	}
	while(n<2);
	op=0;
	opp=1;
	printf("le premier terme est op:[%d]\n",op);
	printf("le deuxieme terme est opp:[%d]\n",opp);
	for(i=2;i<=n;i++)
	{
		u=op+opp;
		printf("U%d %d\n",i,u);
		op=opp;
		opp=u;
	}
	return 0;
	
	
	
	
	
}
