#include <stdio.h>


int puissance(valeur, exposant);

int main(){

    int e, v;
    scanf("%d", &exposant);
    scanf("%d", &valeur);

    printf("%d", puissance(e,v));
    return 0;
}


int puissance(valeur, exposant){

    int resultat;

    for (int i = 1; i <=exposant ; i++){

        resultat *= valeur;
    }


    return resultat;
}