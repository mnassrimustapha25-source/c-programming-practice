#include <stdio.h>
int main(){
    double PBRUT;
    int PNET , TVA;
    printf("entrer le prix NET:\n");
    scanf("%d",&PNET);
    printf("entrer le taux de TVA:\n");
    scanf("%d",&TVA);
    PBRU=PNET+PNET*TVA/100;
    printf("Le prix brut est de %f :",PBRUT);
    return 0;
}