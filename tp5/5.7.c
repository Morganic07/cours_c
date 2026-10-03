#include <stdio.h>

int main(){

    int nombre = 2;

    

    while (nombre <=10000){
        
        int compteur = 0;

        int i = 1;

        while (i<nombre) {
            if (nombre%i==0) compteur +=i;
            i++; }
    
        if (nombre == compteur) printf("%d\n", nombre);
        
        nombre++;

    }


    return 0;
}