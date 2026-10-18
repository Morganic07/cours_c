#include <stdio.h>

void creerListe(Chainon **premier);
void ajouterElement(Chainon **premier, int valeur);


typedef struct Chainon{
    int valeur;
    struct Chainon *suivant;
}Chainon;


int main(){


    return 0;
}


void creerListe(Chainon **premier){
    *premier = NULL;
}

void ajouterElement(Chainon **premier, int valeur){

}