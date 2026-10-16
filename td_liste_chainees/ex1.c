#include <stdio.h>


typedef struct Chainon{
    int valeur; //valeur du chainon
    struct Chainon *suivant; //pointeur vers l'adresse du chainon suivant
    //on ecrit struct Chainon et pas simplement Chainon, car l'alias est crée juste apres, le compilateur ne l'a pas encore lu 
} Chainon; //voila l'alias est là 


Chainon *premier = NULL; //on crée un pointeur nommé premier, il stocke l'adresse du premier chainon , pour l'instant on met NULL pour dire que la liste ne contient rien , dès qu'on rajoutera un chainon, on remplacera NULL par l'adresse mémoire du premier élement 

int main(){

    return 0;
}