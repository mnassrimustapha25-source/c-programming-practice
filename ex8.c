#include <stdio.h>
int main() 
{  
int a, b, c, d; ;   
printf("le continue de a et b et c avant la permutation:\n"); 
scanf("%d %d %d",&a,&b,&c);
printf("a = %d \nb = %d \nc=%d \n",a,b,c); 
d = a;
a = b; 
b = d;
c=b;




printf("le continue de a et b apres la permutation:\n"); 
printf("a = %d \nb = %d\nc=%d",a,b,c);
return 0;}