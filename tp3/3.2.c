#include <stdio.h>

int main(){
    int a = 1;
    int b = 2; 
    int c = 3;
    int nbmin;

    if (a>=b && c>=b) {
        nbmin = b;
    }
    else if (a>=c && b>=c) {
        nbmin = c;
    }
    else {
        nbmin = a;
    }

    printf("le plus petit est %d\n", nbmin);


    return 0;
    
}