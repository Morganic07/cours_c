#include <stdio.h>
#include <stdlib.h>


void creerListe(Chainon **premier);
void ajouterElement(Chainon **premier, int valeur);


typedef struct Chainon{
    int valeur;
    struct Chainon *suivant;
}Chainon;




int main(){
    Chainon *premier; //sert à stocker l'adresse du premier element de la liste
    creerListe(&premier);
    ajouterElement(&premier, 7);

    return 0;
}




void creerListe(Chainon **premier){
    *premier = NULL; //déréférenciation, la valeur de premier vaut NULL
}


void ajouterElement(Chainon **premier, int valeur){
    Chainon *nouveau = malloc(sizeof(Chainon));

    nouveau -> valeur = valeur; 
    // -> revient à faire (*nouveau).valeur
    //on va dans la case valeur du nouveau chainon pour mettre 7


    nouveau -> suivant = *premier;
    //*premier valait NULL. La case suivant du nouveau chainon reçoit donc NULL
    // ce qui indique qu'il n'y a rien après lui (c'est le dernier élément)


    *premier = nouveau;
    //mise à jour de la variable premier du main 
    //premier ne pointe plus vers NULL mais vers l'adresse du chainon nouveau qui vient detre crée 
}