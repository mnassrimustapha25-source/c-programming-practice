// A = L × l
#include <stdio.h>
int main(){
    float L, l, A;
    printf("entrer la longueur:\n");
    scanf("%f",&L);
    printf("entrer la largeur:\n");
    scanf("%f",&l);
    A=(float)L*(float)l;
    printf("Le rectangle dont la longueur mesure %f metres et la largeur mesure %f metres, a une surface egale a %f metres carres.",L,l,A);
    return 0;
}