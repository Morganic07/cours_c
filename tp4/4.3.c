#include <stdio.h>


int main(){

    int nombre_secret = 77;
    int guess;
    
    for (n=1; n<=5; n++){
        printf("Entrez un nombre : ");
        scanf("%d", &guess);
        
        if (guess == nombre_secret) printf("Bravo ! Vous avez trouvé le nombre secret.\n"); 
        
        else if (guess<nombre_secret) printf("Le nombre secret est plus grand \n");
        
        else if (guess>nombre_secret) printf("Plus petit \n")

    }

    printf("fin du programme (deviné ou 5 tentatives)")


    return 0;
}