#include <stdio.h>

void print_tab(int tab[10]);

int main(){
    int tab [10] ; /* un tableau de 10 entiers est initialisee */
    int i ;

    /* On demande a l’utilisateur de remplir les 10 cases du tableau */
    for (i = 0 ; i < 10 ; i = i + 1) {
        printf ("Quelle valeur pour la case %d ?\n", i) ;
        scanf ("%d", &tab [i]) ;
    }


    /* On affiche a present le tableau complet */
    print_tab(tab);
    
    return 0 ;
}


void print_tab(int tab[10]){

    printf ("Voici le tableau que vous avez rempli :\n") ;
    int i;
    for (i = 0 ; i < 10 ; i = i + 1) {
         printf ("%d ", tab[i]*2) ;

    }


}

