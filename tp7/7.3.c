#include <stdio.h>

void amplitude(int tab[5]);
void moyenne(int tab[5]);

int main(){

    int tab[5];

    for (int i = 0; i < 5; i++){
        printf("rentrez valeurs  : \n");
        scanf("%d", &tab[i]);
    }


    amplitude(tab);

    return 0;
}


void amplitude(int tab[5]){
    int max = tab[0];
    int min = tab[0];

    for (int i = 0; i < 5; i++ ){
        if (max < tab[i]) max = tab[i];
    }

    for (int j = 0; j < 5; j++ ){
        if (min > tab[j]) min = tab[j];
    }

    printf("Max : %d | min : %d \n", max, min);
    printf("amplitude : %d \n", max-min);
}

void moyenne(int tab[5]){

}



void moyenne(int tab[5]){

    int compteur;
    
    for (int i = 0; i<5; i++){
        compteur += tab[i];

    }

    float moyenne = compteur/5;

    printf("moyenne : %d\n", moyenne);

}