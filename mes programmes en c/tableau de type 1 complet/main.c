#include <stdio.h>
#define taille 5
void charger(float t[],int e );
void afficher(float a[],int f);
void minimum(float c[],int y);
int main(void)
{
	float tab[taille];
	charger(tab,taille);
	afficher(tab,taille);	
	minimum(tab,taille);
	return 0;
}
void charger(float t[],int e )
{
	int i;
	for(i=0;i<e;i++)
	{
	  printf("veuiller entrer vos valeurs:[%d]",i);
	  scanf("%f",&t[i]);
	}
}
void afficher(float a[],int f)
{
	int i;
	printf("\nadmirer votre tableau:\n");
	for(i=0;i<f;i++)
	{
		printf("\n l indice [%d] du tableau a pour valeur [%.2f]\n ",i,a[i]);
	}
}
void minimum(float c[],int y)
{
	int i,min;
	min=c[0];
	for(i=1;i<y;i++)
	{
		if(c[i]<min)
		{
			min=c;
		}
		
	}
	printf("la valeur du minimum est :%f",min);
}
