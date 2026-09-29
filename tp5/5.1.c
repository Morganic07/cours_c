#include <stdio.h>
int main () {
    int i = 0 ;
    
    while ( i < 10 ) {
    printf ("iteration %d \n", i) ;
    i = i+1;
    } 

    printf ("valeur de i apres la boucle : %d \n", i) ;
    return 0 ;
}