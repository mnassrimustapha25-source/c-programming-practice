#include <stdio.h>
int main() 
{  
int x, y, z; 
x = 3; 
y = 2;   
printf("le continue de x et y avant la permutation:\n"); 
printf("x = %d \ny = %d\n",x,y); 
z = x;
x = y; 
y = z; 
printf("le continue de x et y apres la permutation:\n"); 
printf("x = %d \ny = %d",x,y);
return 0;}