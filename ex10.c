 #include <stdio.h>
int main() {
    int T, h, m, s;

    
    printf("Entrez le temps en secondes : ");
    scanf("%d", &T);
    h = T / 3600;           
    m = (T % 3600) / 60;   
    s = T % 60;           


    printf("Le temps converti est : %d heures, %d minutes, %d secondes\n", h, m, s);
    return 0;}
