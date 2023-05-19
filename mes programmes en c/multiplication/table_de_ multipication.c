#include<stdio.h>
#define t 12
int main(void)
{
	int i;
	int m;
	int n;
	
	do{
		printf("entrer un nombre:");
		scanf("%d",&n);
		
	}
	while(n<=0);
	for(i=0;i<=t;i++){
		m=n*i;
		printf("%d*%d=%d\n",i,n,n*i);
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
