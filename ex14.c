#include <stdio.h>
int main() {
    int bits; // Pour gérer de très grandes valeurs
    double octets, ko, mo, go;

    printf("Entrez le nombre de bits : ");
    scanf("%d", &bits);

    
    octets = bits / 8.0;         
    ko= octets / 1024.0;   
    mo= ko / 1024.0;         
    go= mo / 1024.0;         
    printf("Octets : %.lf\n", octets);
    printf("Kilooctets : %.lf\n", ko);
    printf("Megaoctets : %.lf\n", mo);
    printf("Gigaoctets : %.lf\n", go);
    return 0;
}
