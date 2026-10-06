#include <stdio.h>


int main(){

    int tab[5];

    for (int i=0; i<5;i++){
        printf("rentrez une valeur case %d: \n", i);
        scanf("%d", &tab[i]);
    }





    int valeur_min = tab[0];

    int indice_min;

    int valeur_max = tab[0];

    int indice_max;



    for (int j=0; j<5; j++){

        if (valeur_min > tab[j]){
            valeur_min = tab[j];
            indice_min = j;
        }
        else if (valeur_max < tab[j]){
            valeur_max = tab[j];
            indice_max = j;
        }
    }

    printf("valeur min : %d | indice : %d \n", valeur_min, indice_min);
    printf("valeur max : %d | indice : %d \n", valeur_max, indice_max);


    return 0;
}