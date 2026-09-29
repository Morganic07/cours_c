#include <stdio.h>


int main(){
    int longueur = 5;
    int largeur = 10;

    for (int i =1; i<=longueur; i++){

        for (int j =1; j<=largeur; j++){

            if (j!=1 && j!=largeur && i!= 1 && i!=longueur) printf("  ");
            else printf("* ");
        }
        printf("\n");
    }

    return 0;
}