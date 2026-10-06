#include <stdio.h>


int main(){

    int tab[5];

    for (int i=0; i<5;i++){
        printf("rentrez une valeur case %d: \n", i);
        scanf("%d", &i);
    }





    int valeur_min = tab[i];

    int indice_min;

    int valeur_max = tab[i];

    int indice_max;



    for (int j=0; j<5; j++){

        if (valeur_min > tab[i+1]){
            valeur_min = tab[i+1];
            indice_min = i;
        }
        else if (valeur_max > tab[i+1]){
            valeur_max = tab[i+1];
            indice_max = i;
        }
    }

    printf("valeur min : %d | indice : %d \n", valeur_min, indice_min);
    printf("valeur max : %d | indice : %d \n", valeur_max, indice_max);


    return 0;
}