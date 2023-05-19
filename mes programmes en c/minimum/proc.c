#include<stdio.h>
void min(int a,int b,int c);
int main(void)
{
	  
	  	int   x,y,z;
	printf("entrer la premiere valeur:");
	scanf("%d",&x);
	printf("entrer la deuxieme valeur:");
	scanf("%d",&y);
	printf("entrer la troisieme valeur:");
	scanf("%d",&z);
	min(x,y,z);
	
	
	


	return 0;
}
void min(int a,int b,int c)
{
	int   min;
	min=a;
	if(min=a)
	{
		if(b<min)
		{
			min=b;
		}
		
		if(c<min)
		{
			min=c;
		}
		
   } 
     printf("le minimum est:%d\n",min);  	
		
	
	
	
}
