#include<stdio.h>
#include<stdlib.h>
int generer();
int main(void)
{
	int nbre1;
	nbre1=generer();
	printf("%d",nbre1);
	return 0;
}
int generer()
{
	int x;
	srand(time(NULL));
	x=rand();
	return x;
}
