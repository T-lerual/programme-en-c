#include<stdio.h>
      float    fonc_minimum(float  a,float  b,float  c);
int main(void)
{
	float  x,y,z,changer;
	printf("entrer la premiere valeur:");
	scanf("%f",&x);
	printf("entrer la deuxieme valeur:");
	scanf("%f",&y);
	printf("entrer la troisieme valeur:");
	scanf("%f",&z);
	changer=fonc_minimum(x,y,z);
	printf("le minimum est:%f",changer);
	
	return 0;
}


float  fonc_minimum(float   a, float  b,float  c)
{
	
	float  min;
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
		
       return min;		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	return min;
	
}
