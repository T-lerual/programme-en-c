#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int nbre1,nbre2,nbre3;
	int null;
	srand(time(NULL));
	nbre1=rand();
	nbre2=rand()%15;
	nbre3=(15+rand()%24);
	printf("%d",nbre1);
	return 0;
}
