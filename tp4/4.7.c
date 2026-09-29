#include <stdio.h>


int main(){
    int longueur = 5;
    int largeur = 3;

    for (int i =1; i<=longueur; i++){

        for (int j =1; j<=largeur; j++){

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}