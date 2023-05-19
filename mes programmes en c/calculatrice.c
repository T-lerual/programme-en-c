#include<stdio.h>
int main(){
	
	float a,b ;
	float *p;
//	float*p=&a ;
	float *q ;
	p=&a;
	q =&b ;
	printf("veuiller entrer la valeur de a :");
	scanf("%f",p);
//	scanf("%f",&a);
	printf("entrer la valeur de b :");
	scanf("%f",q);
	printf("A + B =%.2f \n",*p + *q);
	printf("A - B =%.2f \n",*p - *q);
		printf("A * B =%.2f \n",*p * *q);
		if(*q != 0)
			printf("A / B =%.2f \n",*p / *q);
			else
			printf("la division par 0 est impossible");
		
	
	
	return 0;
}
