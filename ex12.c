#include <stdio.h> 
int main()  
{ int a=3,b,c; 
a=a*5; 
printf ("%d",&a ); 
++a; 
b=a; 
printf ("\n b vaut %d et a vaut %d",b,a ); 
c=b; 
b++; 
printf ("\n c vaut %d et b vaut %d",c,b); 
return 0; 
} 
//a est augmenté après avoir renvoyé sa valeur actuelle
//a est augmenté avant de renvoyer la valeur