#include <stdio.h>
int main () {
int i = 0 ;
do {
printf ("iteration %d \n", i) ;
i = i + 1 ;
} while ( i < 10 ) ;
printf ("valeur de i apres la boucle : %d \n", i) ;
return 0 ;
}