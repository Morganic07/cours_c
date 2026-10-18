#include <stdio.h>

typedef struct Chainon{
    int valeur;
    struct Chainon *suivant;
}Chainon;



int main(){
    Chainon *premier;
    creerListe(&premier);

    ajouterElement(&premier, 7);

    return 0;
}


void creerListe(Chainon **premier){
    *premier = NULL;
}


void ajouterElement(Chainon **premier, int valeur){

}