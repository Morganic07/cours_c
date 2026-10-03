#include <stdio.h>


int puissance(int valeur, int exposant);

int main(){

    int e, v;
    scanf("%d", &e);
    scanf("%d", &v);

    printf("%d", puissance(e,v));
    return 0;
}


int puissance(int valeur, int exposant){

    int resultat = 1;

    for (int i = 1; i <=exposant ; i++){

        resultat *= valeur;
    }


    return resultat;
}