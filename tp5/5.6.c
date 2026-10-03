#include <stdio.h>

int main(){
    int nombre = 1;


    int est_premier = 1;

    while (nombre <=100){

        int i = 2;
            
        while (est_premier ==1 && i < nombre) {
                if (nombre%i == 0) est_premier = 0;
                i++;
            }

        if (est_premier == 1) printf("%d \n", nombre);
        
        est_premier = 1;
        nombre++;
    }



    return 0;
}