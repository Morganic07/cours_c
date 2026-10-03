#include <stdio.h>

int main(){

    int nombre = 11;

    int est_parfait = 0;

    int i = 1;

    int compteur = 0;
    
    while (est_parfait == 0 && i<=nombre) {
        if (nombre%i==0){
            compteur +=i;
        }
        i++;
    }

    if (nombre%compteur == 0) printf("le nombre %d est parfait", nombre);
    else printf("le nombre %d n'est pas parfait", nombre);


    return 0;
}