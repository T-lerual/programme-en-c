#include <stdio.h>
int main() {
int i;
float moyGe, somme=0;
float moy[8];
for(i=1 ;i<=8 ;i++){
printf("entrer la moyenne d\' eleve no %d :",i);
scanf("%f" ,&moy[i]) ;
}
for(i=1 ;i<=8 ;i++){
somme=somme+moy[i] ;
}
moyGe=somme/8 ;
printf("la moyenne general de la classe est: %f",moyGe) ;
return 0;
}
