#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,n;
	for(i=1;i<=10;i++)
	{
		n=rand() % 99+1;
		printf("\nles nombres compris entre[1,100]sont:%d\n ",n);
	}
	return 0;
}

