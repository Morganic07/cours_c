#include <stdio.h>
#include <stdlib.h>

typedef struct Chainon{
    int valeur;
    struct Chainon *suivant;
}Chainon;



int main(){
    Chainon *premier;
    creerListe(&premier);

    printf("taille de la liste : %d", nombreElements(premier));

    ajouterElement(&premier, 7);
    ajouterElement(&premier, 5);
    ajouterElement(&premier, 3);


    printf("taille de la liste : %d", nombreElements(premier));

    return 0;
}


void creerListe(Chainon **premier){
    *premier = NULL;
}


void ajouterElement(Chainon **premier, int user_valeur){
    Chainon *nouveau = malloc(sizeof(Chainon));


    premier->valeur = user_valeur;

    premier->suivant = &premier;

    *premier = nouveau;
}


int nombreElements(Chainon *premier){
    int compteur;
    compteur = 0;

    Chainon *temporaire = premier;
    //creation d'un pointeur temporaire qui va parcourir la liste dans la boucle while
   
    while (temporaire.valeur != NULL){
        compteur++;
        temporaire = (*temporaire).suivant;
    }

    return compteur;
}