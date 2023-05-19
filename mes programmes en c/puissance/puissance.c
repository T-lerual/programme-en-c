#include <stdio.h>
int puissance(int n);
int main(void)
{
	int nbre,i;
	float s=0.0;
	printf("veuiller entrer votre nombre");
	scanf("%d",&nbre);
	for(i=1;i<=nbre;i++)
	{
    	s+=(float) 1/puissance(i);
    }
	printf("la somme des n premiers termes de la serie harmonique est:%f",s);
	
	return 0;
}
int puissance(int n)
{ 
   int t=1;
   int i;
   for(i=1;i<=n;i++);
   {
   	   t=t*2;
   }
	
	return t;
}
