#include <stdio.h>


int main(){

    int nombre = 77;

    int guess;

    int nombre_tour = 0;

    while (guess != nombre && nombre_tour <10){

        nombre_tour +=1;

        printf("tour %d , devinez \n", nombre_tour);
        scanf("%d", & guess);


        if (guess == nombre && nombre_tour==1) printf("bravo tricheur");

        else if (guess == nombre && 2<=nombre_tour<=5) printf("bravo");

        else if (guess == nombre && 6<=nombre_tour<=9) printf("presque bravo");

        else if (guess == nombre && nombre_tour==10) printf("mouais");

        else if (nombre_tour >= 10) printf("tié nul");


    }


    return 0;
}