#include <stdio.h>

int main(){
    int nombre = 7;

    int i = 2;

    int est_premier = 1;

    while (est_premier ==1 && i < nombre) {

        if (nombre%i == 0) {

            est_premier = 0;
        }
        
        i++;
    }

    if (est_premier == 1) {
        printf("Le nombre %d est premier\n", nombre);
    } 
    
    else if (est_premier == 0) {
        printf("Le nombre %d n'est pas premier, divisible par %d\n", nombre, i-1);
    }



    return 0;
}