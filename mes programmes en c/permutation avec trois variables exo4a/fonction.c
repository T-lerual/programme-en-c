#include<stdio.h>
void font_permutation(int a,int b,int c)
{
	int z;
	z=a;
	a=c;
	c=b;
	b=z;
	
}
int main(void)
{
	int x,y,z;
	printf("veuiller entrer la premiere valeur:");
	scanf("%d",&x);
		printf("veuiller entrer la deuxieme valeur:");
	scanf("%d",&y);
	printf("veuiller entrer la troisieme valeur:");
	scanf("%d",&z);
	font_permutation(x,y,z);
	printf("la nouvelle premiere valeur est:%d\n",y);
		printf("la nouvelle premiere valeur est:%d\n",z);
			printf("la nouvelle premiere valeur est:%d\n",x);

	
	
	
	
	
	return 0;
}

	
	
	
	
	
	
	

