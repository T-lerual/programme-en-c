#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c,D;
	printf("veuiller entrer la valeur de a:");
	scanf("%d",&a);
	printf("veuiller entrer la valeur de b:");
	scanf("%d",&b);
	printf("veuiller entrer la valeur de c:");
	scanf("%d",&c);
	
	if(a==0)
	{
	   if(b==0)
	   {
	   	     if(c==0)
	   	     {
	   	     	        printf("la solution est R");
				}

				else
				{
					
					    printf("aucune solution");
				}
       }
	   
	   
	    	            
		
	else
	{
		
		                  D=(b*b)-(4*a*c);
		                  if(D<0)
		                  {
		                  	  printf("aucune solution");
		                  }
		                  else
		                  	  {    
		                  	             printf("les solutions sont:%.2f",(b-sqrt(D))/(2*a));
		                  	             printf("et %.2f",(-b+sqrt(D))/(2*a));
		                  	       
		                  	  	
		                  	  	
							  }
		                  	  
								
    }
}    
   
	
return 0;
}


		
	
    	
    	
    	                
	
	
	   	 
	

		
	
	
	
	

		
	

	
	
	
	
	

	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

