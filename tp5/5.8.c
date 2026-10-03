#include <stdio.h>

int main(){

    int nombre = 15;

    int i = 1;
    
    printf("u0 = %d \n", i , nombre);


    while (nombre > 1){

        if (nombre%2==0){
            nombre = nombre/2;
        }

        else nombre = nombre*3+1;

        printf("u%d = %d \n", i , nombre);

        i++;
    }


    return 0;
}