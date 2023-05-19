#include <stdio.h>
#include <stdlib.h>

int main() {
int i;
float moyGe, somme=0;
float moy[50];
for(i=1 ;i<=50 ;i++){
printf("entrer la moyenne d\' eleve no %d :",i);
scanf("%f" ,&moy[i]) ;
}
for(i=1 ;i<=50 ;i++){
somme=somme+moy[i] ;
}
moyGe=somme/50 ;
printf("la moyenne general de la classe est: %f",moyGe) ;
return 0;
}
