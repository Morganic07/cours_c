#include <stdio.h>

void creerListe(Chainon **ptrpremier);

typedef struct Chainon{ 
    int valeur;
    struct Chainon *suivant;
} Chainon; 



int main(){
    Chainon *premier;  
    //premier est un pointeur sur Chainon
    //premier occupe une case mémoire on va dire 0x100
    //et la valeur de premier est pas déterminé
    creerListe(&premier); 
    //&premier recupere 0x100 


    return 0;
}



void creerListe(Chainon **ptrpremier){ //recoit la valeur 0x100
    *ptrpremier = NULL; //va à l'adresse contenue dans **ptrpremier (donc 0x100) et lui donne la valeur NULL

    //on se retrouve avec premier qui occupe 0x100
    //et la valeur de premier vaut NULL
}
