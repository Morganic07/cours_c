#include <stdio.h>

void doubleLesImpaires(int tab[], int taille_tab );


int main(){

    int tableau[5] = {0,1,2,3,4};
    int taille = 5;

    doubleLesImpaires(tableau, taille);

    return 0;
}


void doubleLesImpaires(int tab[], int taille_tab){

    for (int i = 0; i < taille_tab; i++){
        if (tab[i]%2 != 0) tab[i]*=2;
    }

    for (int j = 0; j < taille_tab; j++)printf("%d ", tab[j]);

}