#include<stdio.h>
void fonction_permutation(int e,int f);
int main(void)
{
	int a,b;
	printf("veuiller entrer votre premier nombre:");
	scanf("%d",&a);
	printf("veuiller entrer votre deuxieme nombre: ");
	scanf("%d",&b);
		
	
	fonction_permutation(a,b);
	
	
return 0;	
}
void fonction_permutation(int e,int f)
{
	int d;
	d=e;
	e=f;
	f=d;
	

	printf ("la nouvel valeur du premier nombre est:%d\n",e);
	printf("la nouvel valeur du deuxieme nombre est:%d\n",f);
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	

