#include <stdio.h>

int main(){

    int nombre = 0;

    int compteur = 0;
    

    while (nombre <=10000){
        
        int i = 1;

        while (i<=nombre) {
            if (nombre%i==0) compteur +=i;
            i++; }
    
        if (nombre%compteur == 0) printf("%d", nombre);
        
        nombre++;

    }


    return 0;
}