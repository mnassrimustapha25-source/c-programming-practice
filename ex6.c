#include <stdio.h>
#include <math.h>
int main () {
    int x;
    float r;
    printf("entrer un entier:\n");
    scanf("%d",&x);
    r=sqrt(fabs((float)x));
    printf("la racine carre est %f",r);
    return 0;
}