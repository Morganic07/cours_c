#include <stdio.h>
#include <stdlib.h>


void creerListe(Chainon **premier);
void ajouterElement(Chainon **premier, int valeur);


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
    Chainon *nouveau = malloc(sizeof(Chainon));
    nouveau -> valeur = valeur;
    nouveau -> suivant = *premier;
    *premier = nouveau;
    

}